//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/_UIKeyboardArbitration-Protocol.h>

@class BKSProcessAssertion, FBSCAContextSceneLayer, NSArray, NSMutableSet, NSString, NSXPCConnection, _UIKeyboardArbiter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration>
{
    BOOL _invalidated;
    NSString *_bundleIdentifier;
    _UIKeyboardArbiter *_owner;
    BOOL _running;
    FBSCAContextSceneLayer *_sceneLayer;
    NSString *_remoteSceneID;
    BOOL _active;
    BOOL _wantedActive;
    double _level;
    NSMutableSet *_hostedPids;
    BOOL _checkingShowability;
    int _suppressionCount;
    BOOL _wantsFence;
    BKSProcessAssertion *_remoteKeepAliveAssertion;
    unsigned long long _remoteKeepAliveAssertionCount;
    unsigned long long _remoteKeepAliveTimerCount;
    NSArray *_cachedContext;
    NSXPCConnection *_connection;
}

@property (readonly) BOOL active; // @synthesize active=_active;
@property (readonly, strong) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly) double level; // @synthesize level=_level;
@property (readonly) int processIdentifier;
@property (readonly, strong) NSString *remoteSceneID; // @synthesize remoteSceneID=_remoteSceneID;
@property BOOL running; // @synthesize running=_running;
@property (readonly, strong) FBSCAContextSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property (readonly) BOOL wantedActive; // @synthesize wantedActive=_wantedActive;
@property (readonly) BOOL wantsFence; // @synthesize wantsFence=_wantsFence;

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;
- (void).cxx_destruct;
- (void)_deactivateScene;
- (void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)cacheWindowContext;
- (void)checkActivation:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (BOOL)isHandlerShowableWithHandler:(id)arg1;
- (void)notifyHostedPIDsOfSuppression:(BOOL)arg1;
- (void)releaseProcessAssertion;
- (void)retrieveDebugInformation:(CDUnknownBlockType)arg1;
- (void)retrieveMoreDebugInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setWantsFencing:(BOOL)arg1;
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(id)arg2 forKeyboard:(BOOL)arg3 withLevel:(double)arg4;
- (void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(BOOL)arg3 withSuppression:(int)arg4 onConnected:(CDUnknownBlockType)arg5;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)arg1;
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;
- (void)uncacheWindowContext;

@end

