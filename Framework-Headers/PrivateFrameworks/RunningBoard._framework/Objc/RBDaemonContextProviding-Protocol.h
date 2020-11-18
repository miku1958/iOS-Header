//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBProcess;
@protocol RBAssertionManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging;

@protocol RBDaemonContextProviding <NSObject>

@property (readonly, nonatomic) id<RBAssertionManaging> assertionManager;
@property (readonly, nonatomic) id<RBEntitlementManaging> entitlementManager;
@property (readonly, nonatomic) RBProcess *process;
@property (readonly, nonatomic) id<RBProcessManaging> processManager;
@property (readonly, nonatomic) id<RBProcessMonitoring> processMonitor;
@property (readonly, nonatomic) id<RBStateCaptureManaging> stateCaptureManager;

@end
