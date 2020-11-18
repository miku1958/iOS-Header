//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdleTimerServices/NSObject-Protocol.h>

@class BSProcessHandle, ITIdleTimerConfiguration, NSString;

@protocol ITIdleTimerStateServerDelegate <NSObject>
- (BOOL)addIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 fromProcess:(BSProcessHandle *)arg2 forReason:(NSString *)arg3;
- (void)clientDidDisconnect:(BSProcessHandle *)arg1;
- (BOOL)isIdleTimerServiceAvailable;
- (void)removeIdleTimerConfigurationFromProcess:(BSProcessHandle *)arg1 forReason:(NSString *)arg2;
@end
