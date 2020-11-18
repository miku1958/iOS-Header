//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class MNLocation, MNTraceRecorder, NSError, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MNTraceNavigationEventRecorder : NSObject <MNNavigationSessionObserver>
{
    MNTraceRecorder *_traceRecorder;
    MNLocation *_lastMatchedLocation;
    NSError *_previousSuppressedRerouteError;
    NSUUID *_currentPrimarySignID;
    NSUUID *_currentSecondarySignID;
    NSUUID *_laneGuidanceID;
    NSUUID *_junctionViewID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionForWaypoint:(id)arg1;
- (void)_recordDebugSettings;
- (void)_recordEvent:(long long)arg1 description:(id)arg2;
- (id)_stringForSignDescription:(id)arg1;
- (void)_userGotOnRoute;
- (void)_userWentOffRoute;
- (id)initWithTraceRecorder:(id)arg1;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSession:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionDidStop:(id)arg1;
- (void)recordStartNavigationWithRouteInfo:(id)arg1 navigationType:(int)arg2 isReconnecting:(BOOL)arg3;
- (void)setLastMatchedLocation:(id)arg1;

@end
