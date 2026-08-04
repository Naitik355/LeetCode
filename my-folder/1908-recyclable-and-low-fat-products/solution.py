import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    result=(products['low_fats']=='Y') & (products['recyclable']=='Y') 
    return (products[result][['product_id']])
