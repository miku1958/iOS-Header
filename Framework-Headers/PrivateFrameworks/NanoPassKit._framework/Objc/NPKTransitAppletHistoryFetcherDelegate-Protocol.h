//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKTransitAppletHistoryFetcher, NSString, PKTransitAppletHistory;

@protocol NPKTransitAppletHistoryFetcherDelegate <NSObject>
- (void)transitAppletHistoryFetcher:(NPKTransitAppletHistoryFetcher *)arg1 gotTransitAppletHistory:(PKTransitAppletHistory *)arg2 forAppletWithAID:(NSString *)arg3;
@end
