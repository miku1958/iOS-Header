//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNTimeAndDistanceUpdater;

@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(MNTimeAndDistanceUpdater *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
@end
