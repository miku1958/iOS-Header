//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, MSVSQLDatabase, NSHashTable, NSMutableArray, NSString, NSUUID;
@protocol MPCPlabackEngineEventStreamTestingDelegate, OS_dispatch_queue;

@interface MPCPlaybackEngineEventStream : NSObject
{
    unsigned long long _maximumEventDeliveryTimestamp;
    NSString *_playerID;
    NSMutableArray *_subscriptions;
    NSHashTable *_deferralAssertions;
    MSVSQLDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_lastReceivedEventIdentifier;
    id<MPCPlabackEngineEventStreamTestingDelegate> _testingDelegate;
}

@property (readonly, nonatomic) MPCPlaybackEngineEvent *lastEvent;
@property (nonatomic) unsigned long long maximumEventDeliveryTimestamp;
@property (readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property (weak, nonatomic) id<MPCPlabackEngineEventStreamTestingDelegate> testingDelegate; // @synthesize testingDelegate=_testingDelegate;

- (void).cxx_destruct;
- (void)addConsumer:(id)arg1;
- (id)debugDescription;
- (void)emitEventType:(id)arg1 payload:(id)arg2;
- (void)emitEventType:(id)arg1 payload:(id)arg2 atTime:(CDStruct_aeb9a598)arg3;
- (id)eventDeliveryDeferralAssertionForReason:(id)arg1;
- (id)initWithPlayerID:(id)arg1;
- (id)initWithPlayerID:(id)arg1 database:(id)arg2;
- (id)lastEventsWithCount:(long long)arg1;
- (void)removeConsumer:(id)arg1;
- (void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)arg1;

@end
