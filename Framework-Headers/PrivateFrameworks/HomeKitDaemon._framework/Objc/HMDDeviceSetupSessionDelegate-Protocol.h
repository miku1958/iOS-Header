//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDeviceSetupSession, NSError;

@protocol HMDDeviceSetupSessionDelegate <NSObject>
- (void)setupSession:(HMDDeviceSetupSession *)arg1 didCloseWithError:(NSError *)arg2;
@end
