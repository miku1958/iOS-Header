//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRouteETAUPosition, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, MNActiveRouteInfo, MNLocation, MNLocationTracker, MNTrafficIncidentAlert, NSArray, NSError;

@protocol MNLocationTrackerDelegate <NSObject>

@optional
- (void)locationTracker:(MNLocationTracker *)arg1 didArriveAtWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didChangeState:(int)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didEnterPreArrivalStateForWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didFailRerouteWithError:(NSError *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReachETAUpdatePosition:(GEOComposedRouteETAUPosition *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReroute:(MNActiveRouteInfo *)arg2 newAlternateRoutes:(NSArray *)arg3 rerouteReason:(unsigned long long)arg4 request:(GEODirectionsRequest *)arg5 response:(GEODirectionsResponse *)arg6;
- (void)locationTracker:(MNLocationTracker *)arg1 didResumeNavigatingFromWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didSuppressReroute:(NSError *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3 request:(GEODirectionsRequest *)arg4 response:(GEODirectionsResponse *)arg5;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateETAForRoute:(MNActiveRouteInfo *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 invalidatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 receivedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(BOOL))arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 shouldShowChargingInfoForWaypoint:(GEOComposedWaypoint *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 updatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTrackerDidArrive:(MNLocationTracker *)arg1;
- (void)locationTrackerDidCancelReroute:(MNLocationTracker *)arg1;
- (void)locationTrackerDidEnterPreArrivalState:(MNLocationTracker *)arg1;
- (void)locationTrackerDidTimeoutInArrivalRegion:(MNLocationTracker *)arg1;
- (void)locationTrackerWillReroute:(MNLocationTracker *)arg1;
@end

