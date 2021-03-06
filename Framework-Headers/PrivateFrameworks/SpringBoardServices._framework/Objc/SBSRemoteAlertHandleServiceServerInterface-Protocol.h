//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSNumber, NSString, SBSRemoteAlertActivationContext, SBSRemoteAlertConfigurationContext, SBSRemoteAlertDefinition, SBSRemoteAlertHandleContext;
@protocol __SBSRemoteAlertHandleContext__;

@protocol SBSRemoteAlertHandleServiceServerInterface
- (oneway void)activateRemoteAlertHandleWithID:(NSString *)arg1 activationContext:(SBSRemoteAlertActivationContext *)arg2;
- (SBSRemoteAlertHandleContext *)createRemoteAlertHandleContextWithDefinition:(SBSRemoteAlertDefinition *)arg1 configurationContext:(SBSRemoteAlertConfigurationContext *)arg2;
- (oneway void)invalidateRemoteAlertHandleWithID:(NSString *)arg1;
- (NSArray<__SBSRemoteAlertHandleContext__> *)remoteAlertHandleContextsForDefinition:(SBSRemoteAlertDefinition *)arg1 allowsCreationValue:(NSNumber *)arg2 configurationContext:(SBSRemoteAlertConfigurationContext *)arg3;
@end

