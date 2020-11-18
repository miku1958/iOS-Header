//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class KNAnimatedBuild, KNAnimatedSlideView, KNBuildChunk, KNBuildRenderer, KNPlaybackSession;
@protocol KNAmbientBuildRenderer;

@protocol KNImplicitAmbientAnimating <NSObject>

@property (readonly, nonatomic) BOOL canAddImplicitAmbientAnimations;
@property (readonly, nonatomic, getter=isImplicitAmbientAnimationInteractive) BOOL implicitAmbientAnimationInteractive;

- (KNBuildRenderer<KNAmbientBuildRenderer> *)newImplicitAmbientBuildRendererWithAnimatedBuild:(KNAnimatedBuild *)arg1 buildChunk:(KNBuildChunk *)arg2 session:(KNPlaybackSession *)arg3 animatedSlideView:(KNAnimatedSlideView *)arg4;
@end

