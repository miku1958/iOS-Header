//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSIGroup;
@protocol OS_dispatch_queue;

@interface PSIGroupAggregate : NSObject
{
    NSArray *_searchTokens;
    NSMutableArray *_groupAggregateItems;
    NSMutableArray *_aggregatedGroupIds;
    NSMutableArray *_aggregateItemPool;
    unsigned long long _filenameGroupCount;
    NSObject<OS_dispatch_queue> *_groupResultsQueue;
    NSString *_transientToken;
    PSIGroup *_filenameGroupInAggregate;
}

@property (readonly, nonatomic) PSIGroup *filenameGroupInAggregate; // @synthesize filenameGroupInAggregate=_filenameGroupInAggregate;
@property (readonly, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
@property (copy, nonatomic) NSString *transientToken; // @synthesize transientToken=_transientToken;

- (void).cxx_destruct;
- (struct __CFArray *)_newSortedGroupIds;
- (struct _NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 useNormalizedString:(BOOL)arg3 extendingSearchRange:(BOOL)arg4 matchingFullToken:(BOOL)arg5 excludingRanges:(id)arg6;
- (BOOL)_verifySortedGroupIdsUnique;
- (id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3;
- (id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2;
- (id)newGroupResult;
- (id)newGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;
- (void)pop;
- (BOOL)pushGroup:(id)arg1;

@end

