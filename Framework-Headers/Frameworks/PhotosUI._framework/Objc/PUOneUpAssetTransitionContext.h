//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUOneUpAssetTransitionInfo, UIView;

__attribute__((visibility("hidden")))
@interface PUOneUpAssetTransitionContext : NSObject
{
    BOOL _shouldHideBackground;
    UIView *_containerView;
    UIView *_fromView;
    UIView *_snapshotView;
    PUOneUpAssetTransitionInfo *_transitionInfo;
    CDUnknownBlockType _animationBlock;
}

@property (copy, nonatomic, setter=_setAnimationBlock:) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property (strong, nonatomic, setter=_setContainerView:) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic, setter=_setFromView:) UIView *fromView; // @synthesize fromView=_fromView;
@property (nonatomic, setter=_setShouldHideBackground:) BOOL shouldHideBackground; // @synthesize shouldHideBackground=_shouldHideBackground;
@property (strong, nonatomic, setter=_setSnapshotView:) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property (strong, nonatomic, setter=_setTransitionInfo:) PUOneUpAssetTransitionInfo *transitionInfo; // @synthesize transitionInfo=_transitionInfo;

+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4;
- (void).cxx_destruct;
- (id)oneUpTransitionContextWithAnimationBlock:(CDUnknownBlockType)arg1;
- (id)oneUpTransitionContextWithContextShouldHideBackground:(BOOL)arg1;
- (id)oneUpTransitionContextWithContextWithContainerView:(id)arg1;

@end

