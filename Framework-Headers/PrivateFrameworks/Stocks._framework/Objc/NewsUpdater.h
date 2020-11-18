//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Stocks/YQLRequest.h>

@class Stock, StockNewsItemCollection;
@protocol NewsUpdaterDelegate;

@interface NewsUpdater : YQLRequest
{
    id<NewsUpdaterDelegate> _delegate;
    BOOL _firstLoad;
    double _lastResponseTimestamp;
    StockNewsItemCollection *_lastNewsItemCollection;
    Stock *_stock;
    CDUnknownBlockType _updateCompletionHandler;
}

@property (weak, nonatomic) id<NewsUpdaterDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)_newsItemCollectionCache;
+ (id)sharedNewsUpdater;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)clearNewsCacheOnDisk;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)fetchNewsForStock:(id)arg1;
- (void)fetchNewsForStock:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)loadNewsCacheFromDiskForSymbol:(id)arg1;
- (void)parseData:(id)arg1;
- (void)resetLocale;
- (void)saveLastResponse;
- (BOOL)shouldReloadOnResume;

@end

