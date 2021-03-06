//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class GEONameInfo, GEONavigationGuidanceState, GEONavigationListener, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, NSArray, NSData, NSString;

@protocol GEONavigationListenerDelegate <NSObject>

@optional
- (void)navigationListener:(GEONavigationListener *)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateActiveRouteData:(NSData *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateCurrentRoadName:(NSString *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateGuidanceState:(GEONavigationGuidanceState *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateNavigationVoiceVolume:(int)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromDestination:(CDStruct_c3b9c2ee)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromManeuver:(CDStruct_c3b9c2ee)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromSign:(CDStruct_c3b9c2ee)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateRideSelections:(NSArray *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateRouteSummary:(GEONavigationRouteSummary *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateStepIndex:(unsigned long long)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateStepNameInfo:(GEONameInfo *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateTransitSummary:(GEONavigationRouteTransitSummary *)arg2;
@end

