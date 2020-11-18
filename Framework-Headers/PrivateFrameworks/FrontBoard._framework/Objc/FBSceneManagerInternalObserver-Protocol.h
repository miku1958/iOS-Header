//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSceneManagerObserver-Protocol.h>

@class FBSMutableSceneSettings, FBScene, FBSceneManager;

@protocol FBSceneManagerInternalObserver <FBSceneManagerObserver>

@optional
- (void)sceneManager:(FBSceneManager *)arg1 interceptUpdateForSceneDeactivationManager:(FBScene *)arg2 withNewSettings:(FBSMutableSceneSettings *)arg3;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(FBSceneManager *)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(FBSceneManager *)arg1;
@end
