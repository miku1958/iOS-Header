//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVLightweightRoutingController, NSArray;

@protocol MPAVLightweightRoutingControllerDelegate <NSObject>

@optional
- (void)lightweightRoutingController:(MPAVLightweightRoutingController *)arg1 didChangeDevicePresenceDetected:(BOOL)arg2;
- (void)lightweightRoutingController:(MPAVLightweightRoutingController *)arg1 didChangePickedRoutes:(NSArray *)arg2;
@end

