//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject
{
    NSMutableArray *_events;
    NSMutableDictionary *_lazyEvents;
}

@property (strong, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property (strong, nonatomic) NSMutableDictionary *lazyEvents; // @synthesize lazyEvents=_lazyEvents;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_gatherDataFromProducers;
- (void)_sendEvent:(id)arg1 payload:(id)arg2;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 withPayload:(id)arg2 persist:(BOOL)arg3;
- (void)addEvent:(id)arg1 withPayloadBlock:(CDUnknownBlockType)arg2 persist:(BOOL)arg3;
- (void)commit;
- (id)init;
- (void)removeEventsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeNonPersistentEvents;
- (void)reset;
- (void)stash:(id)arg1;

@end

