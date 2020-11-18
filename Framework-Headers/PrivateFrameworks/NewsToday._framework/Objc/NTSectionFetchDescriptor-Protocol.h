//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSObject-Protocol.h>

@class NSArray, NTCatchUpOperation, NTCatchUpOperationResults;
@protocol FCFeedPersonalizing, FCFeedTransforming;

@protocol NTSectionFetchDescriptor <NSObject, NSCopying>
- (void)configureCatchUpOperationWithFetchRequest:(NTCatchUpOperation *)arg1;
- (NTCatchUpOperationResults *)extractResultsFromCatchUpOperation:(NTCatchUpOperation *)arg1;
- (id<FCFeedTransforming>)incrementalLimitTransformationWithFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 limit:(unsigned long long)arg2 priorFeedItems:(NSArray *)arg3;
- (id<FCFeedTransforming>)incrementalSortTransformationWithFeedPersonalizer:(id<FCFeedPersonalizing>)arg1;
@end

