//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessory, NSNumber;

@protocol HAPAccessoryDelegate <NSObject>

@optional
- (void)accessory:(HAPAccessory *)arg1 didUpdateCategory:(NSNumber *)arg2;
- (void)accessoryDidBecomeReachable:(HAPAccessory *)arg1;
- (void)accessoryDidBecomeUnreachable:(HAPAccessory *)arg1;
@end
