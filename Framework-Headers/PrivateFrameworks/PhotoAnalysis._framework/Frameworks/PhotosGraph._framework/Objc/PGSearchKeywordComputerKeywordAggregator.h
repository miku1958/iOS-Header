//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject
{
    NSMutableDictionary *_keywordsByCategoryMaskByDateIntervalByMomentUUID;
}

@property (readonly) NSDictionary *aggregatedKeywords;

- (void).cxx_destruct;
- (void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3;
- (void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4;
- (id)init;

@end

