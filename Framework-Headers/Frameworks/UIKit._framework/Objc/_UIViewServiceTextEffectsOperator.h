//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIViewServiceDeputy-Protocol.h>
#import <UIKit/_UIViewServiceDeputyRotationDelegate-Protocol.h>
#import <UIKit/_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface-Protocol.h>

@class NSArray, NSString, UIWindow, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate>
{
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    id _remoteViewControllerProxy;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIWindow *_hostedWindow;
    struct CGPoint _windowOffset;
    struct CGSize _sceneSize;
    BOOL _canRestoreInputViews;
    BOOL _isRestoringInputViews;
    BOOL _didResignForDisappear;
    BOOL _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;
- (void).cxx_destruct;
- (int)__automatic_invalidation_logic;
- (void)__createHostedTextEffectsWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostViewWillAppear:(BOOL)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostWillEnterForeground;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setSceneSize:(struct CGSize)arg1;
- (void)__setWindowOffset:(struct CGPoint)arg1;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (BOOL)_isDeallocating;
- (void)_prepareForDisconnectionUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_queue;
- (void)_resetSceneSize;
- (void)_restoreInputViews;
- (void)_sendNotification:(id)arg1;
- (BOOL)_tryRetain;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (id)autorelease;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)forceSyncToStatusBarOrientation;
- (id)invalidate;
- (void)performOnRelevantWindows:(CDUnknownBlockType)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(BOOL)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)windowDidGainFirstResponder:(id)arg1;

@end

