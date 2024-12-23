# Xenith lang
Xenith is a high level domain-specific language used for financial trading.

### Syntax
#### Keywords
- strategy
- buy
- sell
- when
- after
- closeall
- db
- broker

#### Sample program
```
broker(Broker.INTERACTIVE_BROKERS, '<API_KEY>')

strategy aapl_long {
    ticker aapl = 'AAPL'
    date term = '2025-03-31T23:59:59'
    when(aapl, PRICE) > 180 {
        buy(units:100, EXACT)
    }

    # DEFAULT: stop when executed
    stop when (Date.now() > term)
}

main {
    when(Date.now()) > Date('2025-01-01T00:00:00') {
        execute(aapl_long)
    }
}
```
