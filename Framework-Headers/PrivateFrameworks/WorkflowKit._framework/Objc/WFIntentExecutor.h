//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/INIntentResponseObserver-Protocol.h>
#import <WorkflowKit/NSProgressReporting-Protocol.h>

@class INCExtensionConnection, INIntent, NSProgress, NSString;
@protocol INCExtensionProxy, WFIntentExecutorDelegate;

@interface WFIntentExecutor : NSObject <INIntentResponseObserver, NSProgressReporting>
{
    WFIntentExecutor *_strongSelf;
    BOOL _forceExecutionOnPhone;
    BOOL _skipResolveAndConfirm;
    NSProgress *_progress;
    INCExtensionConnection *_connection;
    id<WFIntentExecutorDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    id<INCExtensionProxy> _getRideStatusUpdatingExtensionProxy;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) INCExtensionConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFIntentExecutorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceExecutionOnPhone; // @synthesize forceExecutionOnPhone=_forceExecutionOnPhone;
@property (strong, nonatomic) id<INCExtensionProxy> getRideStatusUpdatingExtensionProxy; // @synthesize getRideStatusUpdatingExtensionProxy=_getRideStatusUpdatingExtensionProxy;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly) NSProgress *progress; // @synthesize progress=_progress;
@property (nonatomic) BOOL skipResolveAndConfirm; // @synthesize skipResolveAndConfirm=_skipResolveAndConfirm;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)autoreleaseSelf;
- (void)cancel;
- (void)configureConnection;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (BOOL)continueInApp;
- (void)deliverIntentForwardingActionToApp:(id)arg1 withBundleIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromExtensionError:(id)arg1;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)extensionInputItemsWithIntent:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)finish;
- (void)finishWithInteraction:(id)arg1;
- (void)finishWithInteraction:(id)arg1 error:(id)arg2;
- (void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDynamicOptionsForParameterNamed:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleIntent:(id)arg1 inBackgroundAppWithBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithIntent:(id)arg1 donateInteraction:(BOOL)arg2 groupIdentifier:(id)arg3;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)resolveIntentResolutionResults:(id)arg1 slotDescription:(id)arg2 intent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retainSelf;
- (void)showConfirmationForInteraction:(id)arg1 confirmationRequired:(BOOL)arg2 authenticationRequired:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startReceivingRideStatusUpdates;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopReceivingRideStatusUpdates;
- (void)updateIntentWithItemToConfirm:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;

@end

