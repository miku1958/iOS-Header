//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNCommuteDestination, MNCommuteDestinationUpdater;

@protocol MNCommuteDestinationUpdaterDelegate <NSObject>
- (void)destinationUpdater:(MNCommuteDestinationUpdater *)arg1 didUpdateDestination:(MNCommuteDestination *)arg2;
- (void)destinationUpdaterDidArrive:(MNCommuteDestinationUpdater *)arg1;
@end
