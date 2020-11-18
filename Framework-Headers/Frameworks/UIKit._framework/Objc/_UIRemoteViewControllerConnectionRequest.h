//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString, NSUUID, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, _UIRemoteViewService;
@protocol OS_dispatch_queue, _UIViewServiceDeputyXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject
{
    _UIRemoteViewService *_service;
    CDUnknownBlockType _handler;
    NSString *_viewServiceBundleIdentifier;
    NSString *_viewControllerClassName;
    NSUUID *_contextToken;
    NSArray *_serializedAppearanceCustomizations;
    BOOL _legacyAppearance;
    id _exportedHostingObject;
    Class _remoteViewControllerClass;
    id<_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelledOrComplete;
    NSError *_error;
    _UIAsyncInvocation *_requestCancellationInvocation;
}

+ (id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 legacyAppearance:(BOOL)arg5 exportedHostingObject:(id)arg6 serviceViewControllerDeputyInterface:(id)arg7 connectionHandler:(CDUnknownBlockType)arg8;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 legacyAppearance:(BOOL)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;
+ (id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 legacyAppearance:(BOOL)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_cancelWithError:(id)arg1;
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)_connectToPlugInKitService;
- (void)_connectToServiceViewController;
- (void)_connectToTextEffectsOperator;
- (void)_connectToViewControllerControlMessageDeputy;
- (void)_connectToViewControllerOperator;
- (void)_connectToViewService;
- (void)_didFinishEstablishingConnection;
- (void)_sendServiceTextEffectsRequest;
- (void)_sendServiceViewControllerRequest;
- (void)dealloc;

@end

