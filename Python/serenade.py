import requests
from account import Account


class CheckingAccount:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance

    def deposit(self, amount, date):
        self.balance += amount


def main():
    names = ['Sarah', 'David', 'Jessica']
    for name in names:
        account = CheckingAccount(name, 1000)
