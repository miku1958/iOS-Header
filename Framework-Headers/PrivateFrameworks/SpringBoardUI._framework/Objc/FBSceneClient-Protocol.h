//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;
@protocol FBSceneHost;

@protocol FBSceneClient <NSObject>
- (void)host:(id<FBSceneHost>)arg1 configureWithInitialClientSettings:(FBSSceneClientSettings *)arg2;
- (void)host:(id<FBSceneHost>)arg1 didInvalidateWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(BOOL))arg3;
- (void)host:(id<FBSceneHost>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)host:(id<FBSceneHost>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(BOOL))arg5;
@end

