//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@protocol AFClockTimerSnapshotMutating <NSObject>
- (void)setDate:(NSDate *)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setNotifiedFiringTimerIDs:(NSOrderedSet *)arg1;
- (void)setTimersByID:(NSDictionary *)arg1;
@end

