//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Stocks/YQLRequest.h>

@class Stock, StockChartData;
@protocol ChartUpdaterDelegate;

@interface ChartUpdater : YQLRequest
{
    Stock *_stock;
    StockChartData *_currentChartData;
    CDUnknownBlockType _updateCompletionHandler;
    id<ChartUpdaterDelegate> _delegate;
    long long _interval;
}

@property (weak, nonatomic) id<ChartUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) long long interval; // @synthesize interval=_interval;

+ (id)_rangeStringForInterval:(long long)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (id)dataSeries;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)parseDataSeriesDictionary:(id)arg1;
- (void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2;
- (BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2;
- (BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

