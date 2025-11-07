import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    condition=students['student_id']==101
    return students[condition].drop(columns=['student_id'])
