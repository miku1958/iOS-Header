//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIActivityContinuationManagerApplicationContext-Protocol.h>
#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUserActivity, UIActivityContinuationManager, UIScene;

__attribute__((visibility("hidden")))
@interface _UICanvasUserActivityManager : NSObject <UIActivityContinuationManagerApplicationContext, _UISceneComponentProviding>
{
    UIScene *_weakScene;
    NSUserActivity *_restorationActivity;
    NSDictionary *_connectionOptionsRestorationActivityDictionary;
    UIActivityContinuationManager *_activityContinuationManager;
    NSSet *_activityTypesForDefaultProgressUI;
    BOOL _isDisplayingActivityContinuationUI;
}

@property (readonly, nonatomic, getter=_activityContinuationManager) UIActivityContinuationManager *_activityContinuationManager;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_isDisplayingActivityContinuationUI, setter=_setIsDisplayingActivityContinuationUI:) BOOL isDisplayingActivityContinuationUI; // @synthesize isDisplayingActivityContinuationUI=_isDisplayingActivityContinuationUI;
@property (readonly) Class superclass;

+ (id)_activityContinuationDictionaryWithAction:(id)arg1;
+ (void)_deleteSavedSceneSessionDirectoryWithIdentifier:(id)arg1;
+ (void)_deleteSceneSessionsWithPersistentIdentifiers:(id)arg1;
+ (id)_fetchSceneSessionWithPersistentIdentifier:(id)arg1;
+ (id)_getRestorationUserActivityForPersistentIdentifier:(id)arg1 error:(id *)arg2;
+ (id)_getUserInfoForSceneIdentifier:(id)arg1 error:(id *)arg2;
+ (void)_initializeUserActivityManager;
+ (id)_knownSceneSessionMap;
+ (BOOL)_restorationUserActivityAvailableForSceneIdentifier:(id)arg1;
+ (void)_saveRestorationStateForScene:(id)arg1;
+ (void)_scheduleDataSaveForSceneSession:(id)arg1 saveRestorationActivity:(BOOL)arg2;
+ (void)_showProgressForScene:(id)arg1 whenFetchingUserActivityForTypes:(id)arg2;
+ (void)_updatePersistedSceneSession:(id)arg1;
+ (id)_userActivityManagerForScene:(id)arg1;
- (void).cxx_destruct;
- (void)_checkActivityContinuationAndBecomeCurrentIfNeeded;
- (void)_performCanvasRestoration;
- (void)_performCanvasRestorationIfNecessary;
- (void)_saveOrClearRestorationDictionary:(id)arg1 forScene:(id)arg2;
- (void)_saveSceneRestorationState;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setupCanvasRestorationState;
- (id)_updateCanvasConnectionOptionsDictionary:(id)arg1;
- (void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2;
- (BOOL)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2;
- (void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(CDUnknownBlockType)arg3;
- (void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(CDUnknownBlockType)arg2;
- (BOOL)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (BOOL)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1;
- (id)activityContinuationManagerUserCancelledError:(id)arg1;
- (id)initWithScene:(id)arg1;

@end

