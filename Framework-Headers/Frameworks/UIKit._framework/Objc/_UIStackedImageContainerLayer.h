//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <UIKitCore/CALayerDelegate-Protocol.h>

@class CATransformLayer, NSArray, NSString, UIView, _UIStackedImageConfiguration, _UIStackedImageLayerDelegate;
@protocol UINamedLayerStack;

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate>
{
    BOOL _animatingToNormalState;
    BOOL _animatingStateChange;
    double _selectionStartTime;
    double _selectionDuration;
    long long _selectionStyle;
    double _idleModeFocusSizeOffset;
    struct CGSize _radiosityImageScale;
    BOOL _radiosityNeedsLayout;
    double _scale;
    NSString *_imageStackContentsGravity;
    double _radiosityRequestTime;
    double _rotationAmount;
    struct CGPoint _translationOffset;
    double _maximumParallaxDepth;
    BOOL _nonOpaqueShadow;
    BOOL _singleLayerNoMask;
    BOOL _layerStackSupportsInflation;
    BOOL _layerStackInflated;
    unsigned long long _layerStackInflationSeed;
    BOOL _deferredInflationPending;
    id _flatImage;
    NSArray *_parallaxImages;
    NSArray *_parallaxLayerDepths;
    CALayer *_imageLayersContainer;
    NSArray *_imageLayers;
    CALayer *_flatLayer;
    CALayer *_maskLayer;
    CALayer *_radiosityLayer;
    CALayer *_selectedPlaceholderLayer;
    CALayer *_shadowLayer;
    CALayer *_specularLayer;
    CALayer *_cursorLayer;
    CALayer *_cursorLayerContainer;
    CALayer *_focusKeylineStrokeLayer;
    CALayer *_overlayLayer;
    CALayer *_overlayContainerLayer;
    CALayer *_unmaskedOverlayLayer;
    CALayer *_unmaskedOverlayContainerLayer;
    CATransformLayer *_imagePerspectiveTransformLayer;
    CATransformLayer *_imageRotationTransformLayer;
    CATransformLayer *_maskPerspectiveTransformLayer;
    CATransformLayer *_maskRotationTransformLayer;
    CATransformLayer *_unmaskedOverlayPerspectiveTransformLayer;
    CATransformLayer *_unmaskedOverlayRotationTransformLayer;
    CATransformLayer *_cursorRotationTransformLayer;
    CALayer *_frontmostPerspectiveTransformLayer;
    CATransformLayer *_frontmostRotationTransformLayer;
    _UIStackedImageLayerDelegate *_layoutDelegate;
    UIView *_animationView;
    _UIStackedImageConfiguration *_configuration;
    id<UINamedLayerStack> _layerStack;
    unsigned long long _controlState;
    struct CGPoint _focusDirection;
}

@property (strong, nonatomic) _UIStackedImageConfiguration *configuration; // @synthesize configuration=_configuration;
@property (nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<UINamedLayerStack> layerStack; // @synthesize layerStack=_layerStack;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) Class superclass;

+ (id)_layerStackObservingKeys;
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;
- (void).cxx_destruct;
- (void)_applyFocusDirectionTransform;
- (void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1;
- (BOOL)_aspectMatchesLayerStack;
- (struct CGImage *)_cgImageForLayeredImage:(id)arg1;
- (BOOL)_configuredForNonOpaqueShadow;
- (id)_contentLayers;
- (struct CGRect)_cursorBounds;
- (void)_deselect;
- (struct CGRect)_displayFrameForModelFrame:(struct CGRect)arg1;
- (struct CATransform3D)_fixedFrameTransformForDepth:(double)arg1 fudgeFactor:(double)arg2;
- (id)_flatLayer;
- (struct CGSize)_focusCursorInsetSizeForSize:(struct CGSize)arg1;
- (double)_focusedScaleFactorForCurrentBounds;
- (double)_focusedShadowRadius;
- (double)_getShadowOpacity;
- (double)_idleModeFocusSizeOffset;
- (id)_imageLayersContainer;
- (id)_imageStackContentsGravity;
- (BOOL)_isFocused;
- (BOOL)_isFocusedIdle;
- (BOOL)_isFocusedOrFocusedIdle;
- (BOOL)_isHighlighted;
- (BOOL)_isNormal;
- (BOOL)_isSelected;
- (id)_layerBelowTitles;
- (struct CGPoint)_layerStackToDisplayScaleFactor;
- (void)_layoutRadiosityLayer;
- (id)_overlayLayer;
- (id)_parallaxLayerDepths;
- (struct CATransform3D)_perspectiveTransformForCurrentState;
- (struct CGRect)_positionAndSizeForLayerImage:(id)arg1;
- (id)_preferredLayoutDelegateForLayer:(id)arg1;
- (unsigned long long)_primaryControlStateForState:(unsigned long long)arg1;
- (BOOL)_radiosityEnabled;
- (id)_randomImage;
- (void)_removeLayerFromSuperlayer:(id)arg1;
- (void)_resetAnimatingToNormalState;
- (struct CATransform3D)_rotationTransformForCurrentFocusDirection;
- (struct CGSize)_roundedBoundsSize;
- (struct CATransform3D)_scaleTransformForCurrentState;
- (struct CGSize)_scaledSizeForCurrentState;
- (long long)_selectionStyle;
- (void)_setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setDefaultParallaxLayerDepths;
- (void)_setFlatImage:(id)arg1;
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;
- (void)_setIdleModeFocusSizeOffset:(double)arg1;
- (void)_setImageStackContentsGravity:(id)arg1;
- (void)_setLayerStackInflated:(BOOL)arg1 seed:(unsigned long long)arg2;
- (void)_setOverlayLayer:(id)arg1;
- (void)_setParallaxImages:(id)arg1;
- (void)_setParallaxLayerDepths:(id)arg1;
- (void)_setSelectionStyle:(long long)arg1;
- (void)_setUnmaskedOverlayLayer:(id)arg1;
- (void)_setupFrontmostTransformLayers;
- (id)_shadowLayer;
- (void)_showImageLayers;
- (struct CATransform3D)_specularTransformForCurrentState;
- (double)_unfocusedShadowRadius;
- (id)_unmaskedOverlayLayer;
- (void)_updateCornerRadiusFromConfig;
- (void)_updateFocusKeylineStrokeScale;
- (void)_updateFocusKeylineStrokeTranslation:(struct CGPoint)arg1;
- (void)_updateFullBleedImageLayers;
- (void)_updateImageLayerFilterChains;
- (void)_updateImageLayerFilterValues;
- (void)_updateLayerForSelection;
- (void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1;
- (void)_updateNonOpaqueShadowStateFromLayerStack;
- (void)_updateNormalImageLayers;
- (void)_updateOverlayContainerLayerHierarchy:(BOOL)arg1;
- (void)_updatePerspective;
- (void)_updateRadiosityFromLayerStack;
- (void)_updateRotationAndTranslation:(id)arg1;
- (void)_updateShadowBounds;
- (void)_updateShadowPositionWithOffset:(struct CGPoint)arg1;
- (void)_updateShadowWithAnimationCoordinator:(id)arg1;
- (void)_updateSingleLayerNoMaskFromLayerStack;
- (void)_updateSpecularLayerContents;
- (void)_updateSpecularLayerContentsRect;
- (void)_wrapLayerInView:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAllAnimations;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRasterizationScale:(double)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3;

@end

