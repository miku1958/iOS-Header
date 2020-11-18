//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUEffectView.h>

@class MPUPinningView, NSMapTable, UIImageView, UIView;

@interface MPUVibrantContentEffectView : MPUEffectView
{
    BOOL _vibrancyEnabled;
    UIView *_contentView;
    MPUPinningView *_maskedView;
    UIView *_vibrantContainer;
    UIImageView *_blurImageView;
    UIView *_plusDView;
    UIView *_tintingView;
    NSMapTable *_layerPinningViewMap;
}

@property (strong, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) NSMapTable *layerPinningViewMap; // @synthesize layerPinningViewMap=_layerPinningViewMap;
@property (strong, nonatomic) MPUPinningView *maskedView; // @synthesize maskedView=_maskedView;
@property (strong, nonatomic) UIView *plusDView; // @synthesize plusDView=_plusDView;
@property (strong, nonatomic) UIView *tintingView; // @synthesize tintingView=_tintingView;
@property (nonatomic) BOOL vibrancyEnabled; // @synthesize vibrancyEnabled=_vibrancyEnabled;
@property (strong, nonatomic) UIView *vibrantContainer; // @synthesize vibrantContainer=_vibrantContainer;

- (void).cxx_destruct;
- (id)_layersNotWantingVibrancyForSubviewsOfView:(id)arg1;
- (void)disableVibrancyForLayer:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reenableVibrancyForLayer:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)tintColorDidChange;
- (void)updateEffect;
- (void)updateVibrancyForContentView;

@end

