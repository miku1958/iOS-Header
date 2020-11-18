//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUSectionedGridLayout;

__attribute__((visibility("hidden")))
@interface PULayoutAnimationsHelper : NSObject
{
    BOOL _shouldAnimateTemporaryImageView;
    PUSectionedGridLayout *_layout;
}

@property (readonly, weak, nonatomic) PUSectionedGridLayout *layout; // @synthesize layout=_layout;
@property (nonatomic) BOOL shouldAnimateTemporaryImageView; // @synthesize shouldAnimateTemporaryImageView=_shouldAnimateTemporaryImageView;

+ (CDUnknownBlockType)stackedTransitionAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 shouldUseSpringAnimations:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_adjustAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustCellAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustDecorationViewAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustRenderedStripAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustSectionHeaderAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (void)_applyDefaultLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)_configureAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_createDefaultZoomingInAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_createDefaultZoomingOutAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_defaultAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (CDUnknownBlockType)animationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (void)didFinishLayoutTransitionAnimations:(BOOL)arg1 transitionIsAppearing:(BOOL)arg2;
- (id)initWithSectionedGridLayout:(id)arg1;

@end

