//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHomeScreenBackdropViewBase.h>

@class MTMaterialView, UIImage, UIImageView, UIViewFloatAnimatableProperty;

@interface SBHomeScreenBackdropView : SBHomeScreenBackdropViewBase
{
    MTMaterialView *_materialView;
    UIImage *_blurredContentSnapshotImage;
    UIImageView *_blurredContentSnapshotImageView;
    unsigned long long _materialViewAnimationCount;
    BOOL _waitingForBackdropViewToRender;
    UIViewFloatAnimatableProperty *_backdropFloatAnimatableProperty;
}

- (void).cxx_destruct;
- (void)_configureBackdropAnimatableProperty;
- (void)_invalidateBackdropSnapshot;
- (void)_resetHomeScreenBlurredContentSnapshotImage;
- (void)_setupBackdropViewWithRecipe:(long long)arg1 scaleAdjustment:(CDUnknownBlockType)arg2;
- (void)_updateBackdropViewIfNeeded;
- (void)_updateBackdropViewIfNeededInvalidatingSnapshot:(BOOL)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (id)homeScreenBlurredContentSnapshotImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 materialRecipe:(long long)arg2 scaleAdjustment:(CDUnknownBlockType)arg3;
- (BOOL)isOpaque;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
