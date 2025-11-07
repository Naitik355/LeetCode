import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    condition=animals['weight']>100
    result = animals[condition].sort_values(by='weight', ascending=False)[['name']]
    return result
