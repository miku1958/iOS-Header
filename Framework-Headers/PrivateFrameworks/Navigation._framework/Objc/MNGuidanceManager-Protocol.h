//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, MNLocation, NSDictionary;

@protocol MNGuidanceManager <NSObject>
- (void)addInjectedEvent:(NSDictionary *)arg1;
- (BOOL)repeatLastGuidanceAnnouncement:(MNLocation *)arg1;
- (void)stop;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)updateForReroute:(GEOComposedRoute *)arg1;
- (void)updateForReturnToRoute;
- (void)updateGuidanceForLocation:(MNLocation *)arg1 navigatorState:(int)arg2;
@end
