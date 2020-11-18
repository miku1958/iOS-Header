//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class UIColor, UIImageView;
@protocol _MKPinAnnotationViewDelegate;

@interface MKPinAnnotationView : MKAnnotationView
{
    UIImageView *_shadowView;
    UIColor *_pinTintColor;
    id<_MKPinAnnotationViewDelegate> _delegate;
    int _state;
    BOOL _animatesDrop;
}

@property (weak, nonatomic, setter=_setDelegate:) id<_MKPinAnnotationViewDelegate> _delegate; // @synthesize _delegate;
@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) unsigned long long pinColor;
@property (strong, nonatomic) UIColor *pinTintColor;

+ (id)_bounceAnimation;
+ (struct CGPoint)_calloutOffset;
+ (id)_dropBounceAnimation;
+ (id)_imageCache;
+ (id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 traits:(id)arg4;
+ (id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 pinColor:(id)arg3 traits:(id)arg4;
+ (struct CGPoint)_leftCalloutOffset;
+ (Class)_mapkitLeafClass;
+ (struct CGPoint)_perceivedAnchorPoint;
+ (struct CGSize)_perceivedSize;
+ (struct CGRect)_pinFrameForPosition:(struct CGPoint)arg1;
+ (id)_pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3;
+ (id)_reuseIdentifier;
+ (struct CGPoint)_rightCalloutOffset;
+ (struct CGPoint)_shadowAnchorPoint;
+ (id)_shadowImage;
+ (id)greenPinColor;
+ (Class)layerClass;
+ (id)purplePinColor;
+ (id)redPinColor;
- (void).cxx_destruct;
- (id)_bounceAnimation:(BOOL)arg1 withDelay:(double)arg2 addToLayer:(BOOL)arg3;
- (void)_cleanupAfterPinDropAnimation;
- (struct UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
- (void)_didUpdatePosition;
- (struct CGPoint)_draggingDropOffset;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3;
- (id)_floatingImage;
- (id)_highlightedImage;
- (id)_image;
- (void)_invalidateImage;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)arg1;
- (void)_liftForDraggingAnimated:(BOOL)arg1;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (id)_pins;
- (void)_removeAllAnimations;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (struct CGRect)_significantBounds;
- (int)_state;
- (void)_stopDrop;
- (void)_updateAnchorPosition:(struct CGPoint)arg1 alignToPixels:(BOOL)arg2;
- (void)_updateShadowLayer;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)description;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isHighlighted;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
