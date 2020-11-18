//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSceneViewControlling-Protocol.h>

@class SBApplicationSceneHandle;
@protocol SBApplicationSceneViewControllingStatusBarDelegate;

@protocol SBApplicationSceneViewControlling <SBSceneViewControlling>

@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) double statusBarAlpha;

@end
