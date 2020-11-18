//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSSceneSettings, FBSSceneTransitionContext;

@interface FBProcessWatchdogEventContext : NSObject
{
    long long _event;
    FBSSceneSettings *_sceneSettings;
    FBSSceneTransitionContext *_sceneTransitionContext;
}

@property (readonly, nonatomic) long long event; // @synthesize event=_event;
@property (readonly, nonatomic) FBSSceneSettings *sceneSettings; // @synthesize sceneSettings=_sceneSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *sceneTransitionContext; // @synthesize sceneTransitionContext=_sceneTransitionContext;

+ (id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3;

@end

