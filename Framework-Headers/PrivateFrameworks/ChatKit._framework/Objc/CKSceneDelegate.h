//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/UIWindowSceneDelegate-Protocol.h>

@class CKMacToolbarController, NSString, UIWindow, UIWindowScene;

@interface CKSceneDelegate : NSObject <UIWindowSceneDelegate>
{
    BOOL _handlingLaunchTask;
    UIWindowScene *_scene;
    UIWindow *_window;
    CKMacToolbarController *_toolbarController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isHandlingLaunchTask) BOOL handlingLaunchTask; // @synthesize handlingLaunchTask=_handlingLaunchTask;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) UIWindowScene *scene; // @synthesize scene=_scene;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKMacToolbarController *toolbarController; // @synthesize toolbarController=_toolbarController;
@property (strong, nonatomic) UIWindow *window; // @synthesize window=_window;

+ (Class)containerClassForType:(long long)arg1;
+ (id)stateFromUserInfoDictionary:(id)arg1;
+ (id)userInfoDictionaryForState:(id)arg1;
- (void).cxx_destruct;
- (void)_setFrameNameForWindowIfNeeded;
- (id)canActivatePredicate;
- (id)init;
- (id)predicateMatchingConversation:(id)arg1;
- (id)prefersToActivatePredicate;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (id)stateRestorationActivityForScene:(id)arg1;
- (long long)type;
- (void)updateSceneActivationConditions;
- (void)updateSceneTitleForConversation:(id)arg1;
- (void)windowSceneDidBecomeVisible:(id)arg1;

@end

