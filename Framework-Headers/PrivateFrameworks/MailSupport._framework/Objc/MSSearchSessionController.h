//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol MSSearchSessionControllerDataSource, OS_dispatch_queue;

@interface MSSearchSessionController : NSObject
{
    int _emailProvider;
    unsigned long long _numberOfMessagesLeftToIndex;
    unsigned long long _percentOfMessagesIndexed;
    NSMutableArray *_mutableSessionEngagements;
    id<MSSearchSessionControllerDataSource> _dataSource;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, weak, nonatomic) id<MSSearchSessionControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) int emailProvider; // @synthesize emailProvider=_emailProvider;
@property (readonly, nonatomic) NSMutableArray *mutableSessionEngagements; // @synthesize mutableSessionEngagements=_mutableSessionEngagements;
@property (readonly, nonatomic) unsigned long long numberOfMessagesLeftToIndex; // @synthesize numberOfMessagesLeftToIndex=_numberOfMessagesLeftToIndex;
@property (readonly, nonatomic) unsigned long long percentOfMessagesIndexed; // @synthesize percentOfMessagesIndexed=_percentOfMessagesIndexed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, copy, nonatomic) NSArray *sessionEngagements;

- (void).cxx_destruct;
- (void)_addToLatestEngagementWithUserEngagement:(id)arg1;
- (void)_recordEngagement:(int)arg1 forMessage:(id)arg2 isTopHit:(BOOL)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5;
- (void)_recordUserDidNotSelectAnyMessage;
- (void)addNewEngagementWithAWDAtoms:(id)arg1 searchScope:(BOOL)arg2 suggestionsEngagements:(id)arg3;
- (void)addNewEngagementWithAtoms:(id)arg1 searchScope:(BOOL)arg2 suggestionsEngagement:(id)arg3;
- (void)endSession;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)recordUserDidOrbMessage:(id)arg1;
- (void)recordUserDidOrbMessage:(id)arg1 isTopHit:(BOOL)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidRightClickMessage:(id)arg1;
- (void)recordUserDidRightClickMessage:(id)arg1 isTopHit:(BOOL)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidSelectMessage:(id)arg1;
- (void)recordUserDidSelectMessage:(id)arg1 isTopHit:(BOOL)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidSwipeMessage:(id)arg1;
- (void)recordUserDidSwipeMessage:(id)arg1 isTopHit:(BOOL)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)updateLastEngagementSearchResultCount:(unsigned long long)arg1;

@end

