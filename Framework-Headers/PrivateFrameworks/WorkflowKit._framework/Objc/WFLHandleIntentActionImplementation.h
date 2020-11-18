//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFLActionImplementation.h>

@class INCExtensionConnection;

@interface WFLHandleIntentActionImplementation : WFLActionImplementation
{
    INCExtensionConnection *_connection;
}

@property (strong, nonatomic) INCExtensionConnection *connection; // @synthesize connection=_connection;

+ (void)continueActionInApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (id)appNotInstalledErrorForIntent:(id)arg1 underlyingError:(id)arg2;
- (void)cancelRunning;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (id)createExtensionConnectionForIntent:(id)arg1;
- (id)errorWithCode:(long long)arg1 localizedDescription:(id)arg2 localizedTitle:(id)arg3 underlyingError:(id)arg4 intentResponse:(id)arg5;
- (void)finishRunningByContinuingInApp;
- (void)handleIntent:(id)arg1 inBackgroundAppWithBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logDebugInformation:(id)arg1;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)run;

@end

