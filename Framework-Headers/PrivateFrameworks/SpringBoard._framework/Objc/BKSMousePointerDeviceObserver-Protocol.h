//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet;

@protocol BKSMousePointerDeviceObserver <NSObject>

@optional
- (void)mousePointerDevicesDidChange:(NSSet *)arg1;
- (void)mousePointerDevicesDidConnect:(NSSet *)arg1;
- (void)mousePointerDevicesDidDisconnect:(NSSet *)arg1;
@end
