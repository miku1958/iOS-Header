//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, MNLocation, NSArray, NSTimer;
@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id<MNTimeAndDistanceUpdaterDelegate> _delegate;
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
    double _remainingTime;
    double _remainingDistance;
    double _distanceToManeuverStart;
    double _distanceToManeuverEnd;
}

@property (weak, nonatomic) id<MNTimeAndDistanceUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double distanceToManeuverEnd; // @synthesize distanceToManeuverEnd=_distanceToManeuverEnd;
@property (readonly, nonatomic) double distanceToManeuverStart; // @synthesize distanceToManeuverStart=_distanceToManeuverStart;
@property (readonly, nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property (readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;

- (void).cxx_destruct;
- (void)_startTimerToNextMinute;
- (void)dealloc;
- (void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2;
- (void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4;
- (void)startUpdating;
- (void)stopUpdating;
- (void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2;

@end
