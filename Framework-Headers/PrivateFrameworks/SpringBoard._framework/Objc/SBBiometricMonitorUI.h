//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBiometricMonitorObserver-Protocol.h>

@class NSString, SBBiometricMonitorViewController, UIWindow;
@protocol SBBiometricMonitorDataSource;

@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver>
{
    BOOL _enabled;
    UIWindow *_debugWindow;
    SBBiometricMonitorViewController *_debugViewController;
    BOOL _deferredMatchUpdatePending;
    BOOL _deferredPresenceDetectUpdatePending;
    id<SBBiometricMonitorDataSource> _dataSource;
}

@property (strong, nonatomic) id<SBBiometricMonitorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDeferredUpdateMatchState;
- (void)_cancelDeferredUpdatePresenceDetectState;
- (void)_deferredUpdateMatchState;
- (void)_deferredUpdatePresenceDetectState;
- (void)_doDeferredMatchStateUpdate;
- (void)_doDeferredPresenceDetectUpdate;
- (BOOL)_isDeferredMatchStateUpdatePending;
- (BOOL)_isDeferredPresenceDetectStateUpdatePending;
- (void)_updateMatchState;
- (void)_updatePresenceDetectState;
- (void)biometricMonitorDataSourceMatchingEnded:(id)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id)arg1;
- (void)biometricMonitorDataSourceMatchingStarted:(id)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;
- (void)biometricMonitorDataSourcePoseUpdated:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;
- (void)disable;
- (void)enable;
- (id)init;

@end
