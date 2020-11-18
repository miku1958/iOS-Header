//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import <FrontBoard/BKSSystemApplicationDelegate-Protocol.h>
#import <FrontBoard/FBSSceneUpdater-Protocol.h>
#import <FrontBoard/FBSceneClient-Protocol.h>
#import <FrontBoard/FBSceneClientProvider-Protocol.h>

@class FBDisplayLayoutTransition, FBSceneClientProviderInvalidationAction, NSMapTable, NSMutableDictionary, NSString;

@interface FBSystemApp : UIApplication <BKSSystemApplicationDelegate, FBSceneClient, FBSSceneUpdater, FBSceneClientProvider>
{
    struct __CFBoolean *_darkboot;
    struct __CFBoolean *_wasDarkboot;
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_localSceneInfoByIdentifier;
    NSMapTable *_hostsByIdentifier;
    id _didFinishLaunchingObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_instantiateAppInfoProvider;
+ (id)_newApplicationLibrary;
+ (void)initializeSystemServices;
+ (void)postFrontBoardInitializationHook;
+ (void)preFrontBoardInitializationHook;
+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;
+ (id)sharedApplicationInfoProvider;
+ (id)sharedApplicationLibrary;
+ (BOOL)shouldCheckInWithBackboard;
+ (BOOL)shouldFixMainThreadPriority;
+ (long long)startupInterfaceOrientation;
+ (BOOL)systemApplicationIsAliveForWatchdog:(id)arg1;
+ (double)systemIdleSleepInterval;
- (void).cxx_destruct;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (BOOL)_openURL:(id)arg1;
- (void)_performApplicationDidFinishLaunchingTasksWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_saveSnapshotWithName:(id)arg1;
- (void)_setDarkBoot:(BOOL)arg1;
- (void)_updateSceneSettingsForScene:(id)arg1 layer:(id)arg2;
- (void)beginTransaction;
- (BOOL)canOpenURL:(id)arg1;
- (void)endTransaction;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)hostProcess;
- (id)init;
- (BOOL)isBootingDark;
- (BOOL)isFrontBoard;
- (BOOL)isSuspended;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspendedUnderLock;
- (unsigned long long)lastExitReason;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)resetIdleTimerAndUndim;
- (void)scene:(id)arg1 didAttachLayer:(id)arg2;
- (void)scene:(id)arg1 didDetachLayer:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didUpdateLayer:(id)arg2;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)sendActionsToBackboard:(id)arg1;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)unregisterHost:(id)arg1;
- (BOOL)wasBootedDark;
- (BOOL)willObserveLayersManually;

@end

