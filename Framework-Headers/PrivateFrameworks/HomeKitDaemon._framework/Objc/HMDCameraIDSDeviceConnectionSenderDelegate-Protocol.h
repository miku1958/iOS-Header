//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraIDSDeviceConnectionSender, NSError;

@protocol HMDCameraIDSDeviceConnectionSenderDelegate <NSObject>
- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didEndSession:(NSError *)arg2;
- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didSetup:(NSError *)arg2;
@end

