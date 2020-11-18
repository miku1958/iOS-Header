//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKAppContextDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/IKApplication-Protocol.h>
#import <VideoSubscriberAccountUI/VSStateMachineDelegate-Protocol.h>

@class IKAppContext, NSError, NSHTTPCookieStorage, NSString, NSURL, VSAppDeviceConfig, VSAuditToken, VSStateMachine;
@protocol VSApplicationDelegate;

__attribute__((visibility("hidden")))
@interface VSApplication : NSObject <IKAppContextDelegate, VSStateMachineDelegate, IKApplication>
{
    BOOL _shouldAllowRemoteInspection;
    NSURL *_bootURL;
    IKAppContext *_appContext;
    id<VSApplicationDelegate> _delegate;
    VSAuditToken *_auditToken;
    VSStateMachine *_stateMachine;
    VSAppDeviceConfig *_appDeviceConfig;
    NSHTTPCookieStorage *_cookieStorage;
    NSError *_failureToStart;
}

@property (strong, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property (strong, nonatomic) VSAppDeviceConfig *appDeviceConfig; // @synthesize appDeviceConfig=_appDeviceConfig;
@property (copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, copy, nonatomic) NSURL *bootURL; // @synthesize bootURL=_bootURL;
@property (strong, nonatomic) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *failureToStart; // @synthesize failureToStart=_failureToStart;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldAllowRemoteInspection; // @synthesize shouldAllowRemoteInspection=_shouldAllowRemoteInspection;
@property (strong, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeDocument;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)appDocumentForDocument:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)appIdentifier;
- (BOOL)appIsTrusted;
- (id)appJSURL;
- (id)appLaunchParams;
- (void)dealloc;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithBootURL:(id)arg1;
- (id)localStorage;
- (id)objectForMediaItem:(id)arg1;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (oneway void)release;
- (void)sendErrorWithMessage:(id)arg1;
- (BOOL)shouldIgnoreJSValidation;
- (id)sourceApplicationAuditTokenDataForContext:(id)arg1;
- (id)sourceApplicationBundleIdentifierForContext:(id)arg1;
- (void)start;
- (void)stop;
- (void)transitionToInvalidState;
- (void)transitionToNotifyingOfFailureToStartState;
- (void)transitionToReadyState;
- (void)transitionToStartingState;
- (void)transitionToStoppingState;
- (id)userDefaultsStorage;
- (id)vendorIdentifier;
- (id)vendorStorage;
- (id)viewElementRegistry;
- (id)xhrSessionConfigurationForContext:(id)arg1;

@end
