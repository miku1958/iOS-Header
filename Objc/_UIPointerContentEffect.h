//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPointerInteractionAnimator, UIPointerRegion, UIPointerStyle, UIView, _UIPointerEffectPlatterView;

__attribute__((visibility("hidden")))
@interface _UIPointerContentEffect : NSObject
{
    struct {
        BOOL isRearrangingEffectViews;
        BOOL sourceViewDidAllowEdgeAntialiasing;
        BOOL sourceViewDidAlignContentsToPixels;
    } _flags;
    BOOL _pressed;
    UIPointerRegion *_region;
    UIPointerStyle *_style;
    UIPointerInteractionAnimator *_entranceAnimator;
    UIPointerInteractionAnimator *_exitAnimator;
    _UIPointerEffectPlatterView *_platterView;
    UIView *_lumaSamplingBackdrop;
    UIView *_pointerPortal;
    CDUnknownBlockType _completion;
    long long _state;
    unsigned long long _animationCount;
    UIView *_positionReferenceView;
    UIView *_sublayerObservationView;
    UIView *_boundsObservationView;
    struct CGPoint _initialEffectPlatterPosition;
}

@property (nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property (weak, nonatomic) UIView *boundsObservationView; // @synthesize boundsObservationView=_boundsObservationView;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) UIPointerInteractionAnimator *entranceAnimator; // @synthesize entranceAnimator=_entranceAnimator;
@property (strong, nonatomic) UIPointerInteractionAnimator *exitAnimator; // @synthesize exitAnimator=_exitAnimator;
@property (nonatomic) struct CGPoint initialEffectPlatterPosition; // @synthesize initialEffectPlatterPosition=_initialEffectPlatterPosition;
@property (weak, nonatomic) UIView *lumaSamplingBackdrop; // @synthesize lumaSamplingBackdrop=_lumaSamplingBackdrop;
@property (strong, nonatomic) _UIPointerEffectPlatterView *platterView; // @synthesize platterView=_platterView;
@property (weak, nonatomic) UIView *pointerPortal; // @synthesize pointerPortal=_pointerPortal;
@property (weak, nonatomic) UIView *positionReferenceView; // @synthesize positionReferenceView=_positionReferenceView;
@property (nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property (copy, nonatomic) UIPointerRegion *region; // @synthesize region=_region;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (strong, nonatomic) UIPointerStyle *style; // @synthesize style=_style;
@property (weak, nonatomic) UIView *sublayerObservationView; // @synthesize sublayerObservationView=_sublayerObservationView;

- (void).cxx_destruct;
- (void)_anchorPlatterView:(id)arg1 toPreview:(id)arg2 updateBounds:(BOOL)arg3;
- (void)_cleanUpObservation;
- (void)_clearArbiterPointerStyleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_commitPointerStyleToArbiterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createAndInstallPlatterView;
- (void)_ensureRelativeEffectViewOrderInContainer;
- (void)_modifyEffectContainerViewHierarchy:(CDUnknownBlockType)arg1;
- (void)_tearDownPlatterView;
- (void)_updateFromState:(long long)arg1 toState:(long long)arg2;
- (void)_updatePlatterView:(id)arg1 forStyle:(id)arg2;
- (void)begin;
- (void)dealloc;
- (void)end;
- (unsigned long long)hash;
- (id)initWithStyle:(id)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setStyle:(id)arg1 andRegion:(id)arg2;

@end

