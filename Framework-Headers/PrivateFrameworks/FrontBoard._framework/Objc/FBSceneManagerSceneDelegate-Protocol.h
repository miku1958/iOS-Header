//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneSettings, FBSSceneTransitionContext, FBScene, NSSet, NSString;

@protocol FBSceneManagerSceneDelegate <NSObject>
- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBScene *)arg1 enumerateAndCalloutToObserversWithEventName:(NSString *)arg2 block:(void (^)(FBSceneObserver *))arg3;
- (void)scene:(FBScene *)arg1 handleUpdateToSettings:(FBSSceneSettings *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(BOOL))arg4;
@end
