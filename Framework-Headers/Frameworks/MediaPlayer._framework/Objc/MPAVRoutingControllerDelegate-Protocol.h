//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVRoute, MPAVRoutingController, NSError;

@protocol MPAVRoutingControllerDelegate <NSObject>

@optional
- (void)routingController:(MPAVRoutingController *)arg1 didFailToPickRouteWithError:(NSError *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRouteDidChange:(MPAVRoute *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2;
- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg1;
- (void)routingControllerDidPauseFromActiveRouteChange:(MPAVRoutingController *)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(MPAVRoutingController *)arg1;
@end

