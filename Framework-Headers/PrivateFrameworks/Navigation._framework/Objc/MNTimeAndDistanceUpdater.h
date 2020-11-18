//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id<MNTimeAndDistanceUpdaterDelegate> _delegate;
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
- (void)updateForLocation:(id)arg1 route:(id)arg2 etaRoute:(id)arg3;

@end
