//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject
{
    NSMutableDictionary *_inMemorySyncStatistics;
}

@property (strong, nonatomic) NSMutableDictionary *inMemorySyncStatistics; // @synthesize inMemorySyncStatistics=_inMemorySyncStatistics;

+ (id)sharedInstance;
- (void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(unsigned long long)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(unsigned long long)arg4;
- (id)currentInMemorySyncStatistics;
- (void)dealloc;
- (void)incrementSyncedAttachmentCount:(unsigned long long)arg1 incrementTotalAttachmentCount:(unsigned long long)arg2;
- (void)incrementSyncedChatCount:(unsigned long long)arg1 incrementTotalChatCount:(unsigned long long)arg2;
- (void)incrementSyncedMessageCount:(unsigned long long)arg1 incrementTotalMessageCount:(unsigned long long)arg2;
- (id)init;
- (void)refreshWithDBSyncStatistics;

@end

