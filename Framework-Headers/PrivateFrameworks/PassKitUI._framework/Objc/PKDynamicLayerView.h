//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEmitterLayer, CALayer, NSData, PKDynamicContentView, PKDynamicLayerConfiguration, PKDynamicLayerTransactionEffectConfiguration, PKPass, UIImage, UIImageView;

@interface PKDynamicLayerView : UIView
{
    PKPass *_pass;
    PKDynamicContentView *_backgroundParallaxView;
    PKDynamicContentView *_neutralView;
    PKDynamicContentView *_foregroundParallaxView;
    PKDynamicContentView *_staticOverlayView;
    UIImageView *_staticFallbackView;
    PKDynamicLayerConfiguration *_dynamicLayerConfiguration;
    PKDynamicLayerTransactionEffectConfiguration *_transactionEffectConfiguration;
    UIImage *_transactionEffectEmitterImage;
    NSData *_transactionEffectShapeData;
    CAEmitterLayer *_transactionEffectLayer;
    CALayer *_dimmingLayer;
    BOOL _invalidated;
    BOOL _paused;
    BOOL _loaded;
    BOOL _effectiveMotionEnabled;
    BOOL _automaticallyLoadContent;
    BOOL _motionEnabled;
}

@property (nonatomic) BOOL automaticallyLoadContent; // @synthesize automaticallyLoadContent=_automaticallyLoadContent;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void).cxx_destruct;
- (void)_addParallaxMotionEffect;
- (void)_configureDynamicViewsWithImageSet:(id)arg1;
- (void)_configureViews;
- (id)_dimmingLayerAnimationWithDuration:(double)arg1;
- (void)_removeParallaxMotionEffect;
- (void)_updateVisibility;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2 automaticallyLoadContent:(BOOL)arg3;
- (void)invalidate;
- (void)layoutSubviews;
- (void)loadContent;
- (void)runTransactionEffect;

@end

