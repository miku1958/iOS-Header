//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject
{
    BOOL _hasSentFBSWorkspaceDelegateSceneCreate;
    FBSScene *_FBSScene;
    FBSSceneTransitionContext *_pendingTransitionContext;
}

@property (strong, nonatomic) FBSScene *FBSScene; // @synthesize FBSScene=_FBSScene;
@property (nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate; // @synthesize hasSentFBSWorkspaceDelegateSceneCreate=_hasSentFBSWorkspaceDelegateSceneCreate;
@property (strong, nonatomic) FBSSceneTransitionContext *pendingTransitionContext; // @synthesize pendingTransitionContext=_pendingTransitionContext;

- (void).cxx_destruct;

@end
