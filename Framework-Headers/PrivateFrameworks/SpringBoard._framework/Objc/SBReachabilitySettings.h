//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBReachabilitySettings : PTSettings
{
    BOOL _allowOnAllDevices;
    double _reachabilityDefaultKeepAlive;
    double _reachabilityInteractiveKeepAlive;
    double _yOffsetFactor;
    double _homeGestureSwipeDownHysteresis;
    double _homeGestureSwipeDownHeight;
    double _systemWideSwipeDownHeight;
    SBFFluidBehaviorSettings *_animationSettings;
}

@property (nonatomic) BOOL allowOnAllDevices; // @synthesize allowOnAllDevices=_allowOnAllDevices;
@property (strong, nonatomic) SBFFluidBehaviorSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property (nonatomic) double homeGestureSwipeDownHeight; // @synthesize homeGestureSwipeDownHeight=_homeGestureSwipeDownHeight;
@property (nonatomic) double homeGestureSwipeDownHysteresis; // @synthesize homeGestureSwipeDownHysteresis=_homeGestureSwipeDownHysteresis;
@property (nonatomic) double reachabilityDefaultKeepAlive; // @synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive;
@property (nonatomic) double reachabilityInteractiveKeepAlive; // @synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive;
@property (nonatomic) double systemWideSwipeDownHeight; // @synthesize systemWideSwipeDownHeight=_systemWideSwipeDownHeight;
@property (nonatomic) double yOffsetFactor; // @synthesize yOffsetFactor=_yOffsetFactor;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (double)yOffset;

@end
