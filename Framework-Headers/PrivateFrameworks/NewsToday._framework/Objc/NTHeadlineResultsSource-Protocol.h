//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@class NTPBHeadlineResultOperationInfo;

@protocol NTHeadlineResultsSource <NSObject>
- (void)fetchLatestHeadlinesWithOperationInfo:(NTPBHeadlineResultOperationInfo *)arg1 completion:(void (^)(NTHeadlineResults *, NSDictionary *, NSObject<NTHeadlineResultOperationFetchInfoProviding> *, NSError *))arg2;
@end

