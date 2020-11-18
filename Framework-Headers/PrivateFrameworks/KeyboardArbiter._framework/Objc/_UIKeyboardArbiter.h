//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, FBSScene, FBSWorkspace, NSMutableArray, NSString, NSXPCListener, _UIKeyboardArbiterHandle, _UIKeyboardChangedInformation;
@protocol OS_dispatch_queue, _UIKeyboardArbiterLink;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    _UIKeyboardArbiterHandle *_activeHandle;
    _UIKeyboardArbiterHandle *_previouslyActiveHandle;
    NSString *_currentBundleIdForHardwareKeyboard;
    _UIKeyboardArbiterHandle *_keyboardFocusHandle;
    _UIKeyboardArbiterHandle *_commandFocusHandle;
    FBSWorkspace *_workspace;
    FBSScene *_scene;
    int _updateCounter;
    BKSApplicationStateMonitor *_stateMonitor;
    id<_UIKeyboardArbiterLink> _sceneLink;
    _UIKeyboardChangedInformation *_lastUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIKeyboardChangedInformation *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property (readonly, nonatomic) id<_UIKeyboardArbiterLink> sceneLink; // @synthesize sceneLink=_sceneLink;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateClients;
- (void)attemptConnection;
- (void)completeKeyboardStatusChangedFromHandler:(id)arg1;
- (void)dealloc;
- (void)handleUnexpectedDeallocForHandler:(id)arg1;
- (BOOL)handler:(id)arg1 activateSceneLayer:(id)arg2;
- (BOOL)handler:(id)arg1 deactivateSceneLayer:(id)arg2;
- (id)handlerForBundleID:(id)arg1;
- (id)handlerForPID:(int)arg1;
- (void)handlerRequestedFocus:(id)arg1;
- (id)initWithLink:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 onConnected:(CDUnknownBlockType)arg3;
- (void)processWithPID:(int)arg1 foreground:(BOOL)arg2 suspended:(BOOL)arg3;
- (void)reevaluateHardwareKeyboardClient;
- (void)reevaluateSceneSettings;
- (void)resume;
- (void)runOperations:(CDUnknownBlockType)arg1 onHandler:(id)arg2;
- (void)scheduleWindowTimeout;
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 fromHandler:(id)arg4;
- (void)updateInterestedBundleIDs;
- (void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2;
- (void)updateSceneSettings:(id)arg1;
- (void)updateSuppression:(BOOL)arg1 ofPIDs:(id)arg2;

@end

