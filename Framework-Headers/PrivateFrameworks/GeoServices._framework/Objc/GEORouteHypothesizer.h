//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSUUID, geo_isolater;
@protocol OS_dispatch_source;

@interface GEORouteHypothesizer : NSObject
{
    GEOPlannedDestination *_plannedDestination;
    unsigned long long _state;
    BOOL _unableToFindRouteForOriginalTransportType;
    GEORouteHypothesis *_currentHypothesis;
    NSError *_currentError;
    CDUnknownBlockType _updateHandler;
    NSUUID *_uuid;
    geo_isolater *_isolater;
    BOOL _wakeForDelay;
    NSObject<OS_dispatch_source> *_delayDispatchTimer;
}

@property (readonly, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property (readonly, nonatomic) GEORouteHypothesis *currentHypothesis; // @synthesize currentHypothesis=_currentHypothesis;
@property (readonly, nonatomic) GEOPlannedDestination *plannedDestination; // @synthesize plannedDestination=_plannedDestination;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic) BOOL unableToFindRouteForOriginalTransportType; // @synthesize unableToFindRouteForOriginalTransportType=_unableToFindRouteForOriginalTransportType;
@property (readonly, nonatomic) double willBeginHypothesizingInterval;
@property (readonly, nonatomic) double willEndHypothesizingInterval;

+ (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
+ (id)hypothesizerForPlannedDestination:(id)arg1;
+ (BOOL)transitTTLSupportedInCurrentCountry;
- (void).cxx_destruct;
- (void)_delayStartingWithXpc;
- (void)_delayStartingWithoutXpc;
- (void)_performDelayedStart;
- (BOOL)_wontHypothesizeAgain;
- (void)cancelDelayDispatchTimer;
- (void)dealloc;
- (id)description;
- (void)didPostUINotification:(unsigned long long)arg1;
- (id)initWithPlannedDestination:(id)arg1;
- (void)onlyPerformLocalUpdates;
- (void)requestRefresh;
- (void)setDoNotWakeForDelay;
- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)stopHypothesizing;
- (BOOL)wakeForDelay;

@end

