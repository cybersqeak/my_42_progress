from abc import ABC, abstractmethod
from typing import Any

class DataProcessor(ABC):

    def __init__(self):
        self._storage = []
        self._total = 0
        self._output_count = 0

    def output(self)->tuple[int, str]:
        if not self._storage:
            raise IndexError("No data to output")
        value = self._storage.pop(0)
        rank = self._output_count
        self._output_count += 1
        self._total -= 1
        return rank,value 
    
    @abstractmethod
    def validate(self, data:Any)->bool:
        pass
    @abstractmethod
    def ingest(self, data:Any)->None:
        pass

class NumericProcessor(DataProcessor):

    def is_number(self, x: Any)->bool:
        return isinstance(x, (int|float)) and not isinstance(x, bool)

    def validate(self, data:Any) -> bool:
        if isinstance(data,list):
            return all(self.is_number(x) for x in data)
        return isinstance(data, (int|float)) and not isinstance(data, bool)
   
    def ingest(self, data: int | float | list[int | float])->None:
        if not self.validate(data):
            raise ValueError("Improper numeric data")

        if isinstance(data, list):
            items = data
        else :
            items = [data]

        for item in items:
            self._storage.append(str(item))
            print(self._storage)
            self._total += 1

class TextProcessor(DataProcessor):
   
    def _is_string(self, x):
        return isinstance(x, str)

    def validate(self, data: Any)->bool: # so Any is really not important since only strings cames in
        if isinstance(data,list):
            return all(self._is_string(x) for x in data)
        return isinstance(data,str) 

    def ingest(self, data: str | list[str])->None:
        if not self.validate(data):
            raise ValueError("Improper string data")
        if isinstance(data, list):
            items = data
        else :
            items = [data]
            
        for item in items :
            self._storage.append(item)
            self._total += 1

class LogProcessor(DataProcessor):
    def _is_log(self, x)->bool:
        return( isinstance(x,dict)
                   and "log_level" in x
                   and "log_message" in x
                   and all(isinstance(k,str) and isinstance(v,str)
                           for k, v in x.items())
                   )

    def validate(self, data:Any)->bool:
        if isinstance(data, list):
            return all(self._is_log(x) for x in data)
        return isinstance(data, dict)
    
    def ingest(self, data:dict | list[dict])->None:
        if not self.validate(data):
            raise ValueError("Improper dict data")
        if isinstance(data, list):
            items = data
        else :
            items = [data]

        for item in items:
            self._storage.append(f"{item['log_level']}: {item['log_message']}")
            self._total += 1

class DataStream(ABC):
    
    def check_types(self, x: Any):
        if (isinstance(x, list));
            for i in x:
                return all(check_types(i))
        elif isinstance(x, (int | float)) and not  isinstance(x, bool):
                        return f"NumericProcessor"
        elif isinstance(x, str):
            return f"TextProcessor"
        elif isinstance(x, dict) and "log_level" in x and "log_message" in x and all(isinstance(k, str) and isinstance(v, str) for k,v in x.items()):
            return f"LogProcessor"
    def register_processor(self, proc:DataProcessor) ->None:
        pass

    def process_stream(self, stream : list[Any]) ->None:
        for i in stream:
            if self.check_types(i) == NumericProcessor:
                self.register_processor(

                        
                        
        

    def print_processors_state(self)->None:
        pass


if __name__ == "__main__":
    print("=== Code Nexus - Data Processor ===")
    print("\nTesting Numeric Processor...")
    num = NumericProcessor()
    print(f" Trying to validate input '42': {num.validate(42)}")
    print(f" Trying to validate input 'Hello': {num.validate('Hello')}")
    print(" Test invalid ingestion of string 'foo' without prior validation:")
    try:
        num.ingest("foo")  # type: ignore
    except ValueError as e:
        print(f" Got exception: {e}") 
    print("\nTesting Text Processor...")
    text = TextProcessor()
    print(f" Trying to validate input '42': {text.validate(42)}")
    words = ["Hello", "Nexus", "World"]
    print(f" Processing data: {words}")
    text.ingest(words)
    print(" Extracting 1 value...")
    rank, value = text.output()
    print(f" Text value {rank}: {value}")

    print("\nTesting Log Processor...")
    log = LogProcessor()
    print(f" Trying to validate input 'Hello': {log.validate('Hello')}")
    entries: list[dict[str, str]] = [
        {"log_level": "NOTICE", "log_message": "Connection to server"},
        {"log_level": "ERROR", "log_message": "Unauthorized access!!"},
    ]
    print(f" Processing data: {entries}")
    log.ingest(entries)
    print(" Extracting 2 values...")
    for _ in range(2):
        rank, value = log.output()
        print(f" Log entry {rank}: {value}")




    stream = [42,43,5]
    try :
        for i in stream:
          
    except ValueError as e:
        print(f"got error : {e}")
    
    #test = num._storage() 
