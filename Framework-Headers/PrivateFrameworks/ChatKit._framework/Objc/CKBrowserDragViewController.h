//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>
#import <ChatKit/UIDynamicAnimatorDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, CALayer, CKAnimatedImage, CKElasticFunction, NSArray, NSMutableDictionary, NSString, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;
@protocol CKBrowserDragViewControllerDelegate;

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKAnimationTimerObserver>
{
    BOOL _canScale;
    BOOL _canRotate;
    BOOL _canPeel;
    BOOL _pressed;
    BOOL _scaledDown;
    BOOL _hasMovedToWindow;
    id<CKBrowserDragViewControllerDelegate> _delegate;
    double _dragViewScale;
    UILongPressGestureRecognizer *_gestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CKAnimatedImage *_dragImage;
    NSMutableDictionary *_peelMaskImageCache;
    UIImage *_currentFrameImage;
    NSArray *_dragImageFrames;
    UIView *_dragView;
    UIView *_plusImageView;
    UIView *_whiteBackground;
    CALayer *_peelImageLayer;
    CALayer *_peelMaskLayer;
    double _initialScale;
    double _rotationAngle;
    CALayer *_shineLayer;
    CALayer *_shadowLayer;
    CALayer *_dropShadowLayer;
    CALayer *_peelLayer;
    CALayer *_meshLayer;
    CALayer *_perspectiveLayer;
    CADisplayLink *_displayLink;
    double _elasticLastTime;
    double _elasticRemainingTime;
    CKElasticFunction *_elasticFunctionPositionX;
    CKElasticFunction *_elasticFunctionPositionY;
    CKElasticFunction *_elasticFunctionRotation;
    double _elasticRotationAngle;
    CKElasticFunction *_elasticFunctionScaleX;
    CKElasticFunction *_elasticFunctionScaleY;
    double _elasticScaleX;
    double _elasticScaleY;
    struct CGPoint _anchorOffset;
    struct CGSize _initialSize;
    struct CGPoint _initialDragStartPosition;
    struct CGSize _rasterizedImageSize;
    struct CGPoint _previousPanLocationInView;
    struct CGPoint _meshLayerStartPosition;
    struct CGPoint _peelLayerStartPosition;
    struct CGPoint _shineLayerStartPosition;
    struct CGPoint _shadowLayerStartPosition;
    struct CGPoint _dropShadowLayerStartPosition;
    struct CGRect _sourceRect;
}

@property (readonly, nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint anchorOffset; // @synthesize anchorOffset=_anchorOffset;
@property (nonatomic) BOOL canPeel; // @synthesize canPeel=_canPeel;
@property (nonatomic) BOOL canRotate; // @synthesize canRotate=_canRotate;
@property (nonatomic) BOOL canScale; // @synthesize canScale=_canScale;
@property (strong, nonatomic) UIImage *currentFrameImage; // @synthesize currentFrameImage=_currentFrameImage;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKBrowserDragViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (strong, nonatomic) CKAnimatedImage *dragImage; // @synthesize dragImage=_dragImage;
@property (strong, nonatomic) NSArray *dragImageFrames; // @synthesize dragImageFrames=_dragImageFrames;
@property (strong, nonatomic) UIView *dragView; // @synthesize dragView=_dragView;
@property (readonly, nonatomic) struct CGPoint dragViewCenter;
@property (readonly, nonatomic) double dragViewRotation;
@property (nonatomic) double dragViewScale; // @synthesize dragViewScale=_dragViewScale;
@property (nonatomic) CALayer *dropShadowLayer; // @synthesize dropShadowLayer=_dropShadowLayer;
@property (nonatomic) struct CGPoint dropShadowLayerStartPosition; // @synthesize dropShadowLayerStartPosition=_dropShadowLayerStartPosition;
@property (strong, nonatomic) CKElasticFunction *elasticFunctionPositionX; // @synthesize elasticFunctionPositionX=_elasticFunctionPositionX;
@property (strong, nonatomic) CKElasticFunction *elasticFunctionPositionY; // @synthesize elasticFunctionPositionY=_elasticFunctionPositionY;
@property (strong, nonatomic) CKElasticFunction *elasticFunctionRotation; // @synthesize elasticFunctionRotation=_elasticFunctionRotation;
@property (strong, nonatomic) CKElasticFunction *elasticFunctionScaleX; // @synthesize elasticFunctionScaleX=_elasticFunctionScaleX;
@property (strong, nonatomic) CKElasticFunction *elasticFunctionScaleY; // @synthesize elasticFunctionScaleY=_elasticFunctionScaleY;
@property (nonatomic) double elasticLastTime; // @synthesize elasticLastTime=_elasticLastTime;
@property (nonatomic) double elasticRemainingTime; // @synthesize elasticRemainingTime=_elasticRemainingTime;
@property (nonatomic) double elasticRotationAngle; // @synthesize elasticRotationAngle=_elasticRotationAngle;
@property (nonatomic) double elasticScaleX; // @synthesize elasticScaleX=_elasticScaleX;
@property (nonatomic) double elasticScaleY; // @synthesize elasticScaleY=_elasticScaleY;
@property (strong, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (nonatomic) BOOL hasMovedToWindow; // @synthesize hasMovedToWindow=_hasMovedToWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint initialDragStartPosition; // @synthesize initialDragStartPosition=_initialDragStartPosition;
@property (nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property (nonatomic) struct CGSize initialSize; // @synthesize initialSize=_initialSize;
@property (nonatomic) CALayer *meshLayer; // @synthesize meshLayer=_meshLayer;
@property (nonatomic) struct CGPoint meshLayerStartPosition; // @synthesize meshLayerStartPosition=_meshLayerStartPosition;
@property (strong, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (strong, nonatomic) CALayer *peelImageLayer; // @synthesize peelImageLayer=_peelImageLayer;
@property (nonatomic) CALayer *peelLayer; // @synthesize peelLayer=_peelLayer;
@property (nonatomic) struct CGPoint peelLayerStartPosition; // @synthesize peelLayerStartPosition=_peelLayerStartPosition;
@property (strong, nonatomic) NSMutableDictionary *peelMaskImageCache; // @synthesize peelMaskImageCache=_peelMaskImageCache;
@property (strong, nonatomic) CALayer *peelMaskLayer; // @synthesize peelMaskLayer=_peelMaskLayer;
@property (nonatomic) CALayer *perspectiveLayer; // @synthesize perspectiveLayer=_perspectiveLayer;
@property (strong, nonatomic) UIView *plusImageView; // @synthesize plusImageView=_plusImageView;
@property (nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property (nonatomic) struct CGPoint previousPanLocationInView; // @synthesize previousPanLocationInView=_previousPanLocationInView;
@property (nonatomic) struct CGSize rasterizedImageSize; // @synthesize rasterizedImageSize=_rasterizedImageSize;
@property (nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property (nonatomic, getter=isScaledDown) BOOL scaledDown; // @synthesize scaledDown=_scaledDown;
@property (nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property (nonatomic) struct CGPoint shadowLayerStartPosition; // @synthesize shadowLayerStartPosition=_shadowLayerStartPosition;
@property (nonatomic) CALayer *shineLayer; // @synthesize shineLayer=_shineLayer;
@property (nonatomic) struct CGPoint shineLayerStartPosition; // @synthesize shineLayerStartPosition=_shineLayerStartPosition;
@property (nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *whiteBackground; // @synthesize whiteBackground=_whiteBackground;

+ (id)meshTransform;
+ (id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2;
+ (BOOL)supportsForceTouch;
- (void).cxx_destruct;
- (void)_attachElasticEffectsForLocation:(struct CGPoint)arg1;
- (void)_detachElasticEffects;
- (void)_displayLinkCallback:(id)arg1;
- (BOOL)_orbScalingEnabled;
- (void)_updateElasticEffectsForLocation:(struct CGPoint)arg1;
- (void)animateBackToSourceCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animatePeelWithCompletion:(CDUnknownBlockType)arg1;
- (void)animatePlacementAtPoint:(struct CGPoint)arg1 shouldShrink:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)animateScaleDown;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applyTransforms;
- (void)commitDrag;
- (void)dealloc;
- (double)dragViewScaleUp;
- (void)gestureRecognized:(id)arg1;
- (id)initWithDragImage:(id)arg1 inSourceRect:(struct CGRect)arg2 withSourcePoint:(struct CGPoint)arg3 withGestureRecognizer:(id)arg4;
- (void)manuallyInitializeDragAtPoint:(struct CGPoint)arg1;
- (void)manuallyUpdateDragPositionToPoint:(struct CGPoint)arg1;
- (void)panGestureRecognized:(id)arg1;
- (id)peelMaskImageFromImage:(id)arg1;
- (void)reversePeelAnimationToPoint:(struct CGPoint)arg1 forPlacement:(BOOL)arg2 shouldShrink:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)setPlusImageViewHidden:(BOOL)arg1;
- (void)setUpPeelLayers;
- (void)updateAnimationTimerObserving;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

