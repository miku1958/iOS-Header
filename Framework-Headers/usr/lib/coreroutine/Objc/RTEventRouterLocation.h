//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTEventStore.h>

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTEventStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface RTEventRouterLocation : RTEventStore <RTEventStore, NSSecureCoding>
{
    NSMutableDictionary *_locationMap;
    RTEventStore *_fallbackModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTEventStore *fallbackModel; // @synthesize fallbackModel=_fallbackModel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *locationMap; // @synthesize locationMap=_locationMap;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_createEventStore;
- (void)_processEventsForLocation:(id)arg1 globalAppLaunchCountedSet:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)addAppLaunchEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)clearAllEvents;
- (void)clearAllEventsForLocation:(id)arg1;
- (BOOL)containsLocation:(id)arg1;
- (unsigned long long)countOfEvents;
- (unsigned long long)countOfEventsForLocation:(id)arg1;
- (unsigned long long)countOfLocations;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchPredictionForEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchRecommendedAppsHistogramMetric:(CDUnknownBlockType)arg1;
- (id)initWithApplicableEventClasses:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)logRecommendedAppsHistogramMetric:(CDUnknownBlockType)arg1;
- (void)processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeEvent:(id)arg1;
- (void)setUnderlyingQueue:(id)arg1;
- (id)storeForLocation:(id)arg1;

@end

