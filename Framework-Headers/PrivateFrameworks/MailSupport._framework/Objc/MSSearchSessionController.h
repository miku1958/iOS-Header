//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol MSSearchSessionControllerDataSource;

@interface MSSearchSessionController : NSObject
{
    unsigned long long _numberOfMessagesLeftToIndex;
    NSMutableArray *_mutableSessionEngagements;
    id<MSSearchSessionControllerDataSource> _dataSource;
}

@property (readonly, weak, nonatomic) id<MSSearchSessionControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) NSMutableArray *mutableSessionEngagements; // @synthesize mutableSessionEngagements=_mutableSessionEngagements;
@property (readonly, nonatomic) unsigned long long numberOfMessagesLeftToIndex; // @synthesize numberOfMessagesLeftToIndex=_numberOfMessagesLeftToIndex;
@property (readonly, copy, nonatomic) NSArray *sessionEngagements;

- (void).cxx_destruct;
- (void)_addNewEngagementWithAWDAtoms:(id)arg1 searchScope:(BOOL)arg2;
- (void)_addToLatestEngagementWithUserEngagement:(id)arg1;
- (void)_recordEngagement:(int)arg1 forMessage:(id)arg2;
- (void)_recordUserDidNotSelectAnyMessage;
- (void)addNewEngagementWithAtoms:(id)arg1 searchScope:(BOOL)arg2;
- (void)endSession;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)recordUserDidOrbMessage:(id)arg1;
- (void)recordUserDidRightClickMessage:(id)arg1;
- (void)recordUserDidSelectMessage:(id)arg1;
- (void)recordUserDidSwipeMessage:(id)arg1;
- (void)updateLastEngagementSearchResultCount:(unsigned long long)arg1;

@end

