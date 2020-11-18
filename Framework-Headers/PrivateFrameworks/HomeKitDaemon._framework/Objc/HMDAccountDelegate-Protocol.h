//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccount, HMDDevice;

@protocol HMDAccountDelegate <NSObject>
- (void)account:(HMDAccount *)arg1 didAddDevice:(HMDDevice *)arg2;
- (void)account:(HMDAccount *)arg1 didRemoveDevice:(HMDDevice *)arg2;
- (void)account:(HMDAccount *)arg1 didUpdateDevice:(HMDDevice *)arg2;
@end

