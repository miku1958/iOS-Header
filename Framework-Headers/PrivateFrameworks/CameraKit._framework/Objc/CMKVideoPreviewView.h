//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer, CMKEffectsFullsizeView, CMKEffectsGridLabelsView, CMKEffectsGridView, NSString;

@interface CMKVideoPreviewView : UIView
{
    NSString *_videoGravity;
    BOOL _disableLayoutForPreviewView;
    BOOL _disableLayoutForEffectsFullsizeView;
    BOOL _disableLayoutForEffectsGridViews;
    BOOL _square;
    AVCaptureVideoPreviewLayer *_previewLayer;
    long long _orientation;
    UIView *_previewLayerView;
    CMKEffectsFullsizeView *_effectsFullsizeView;
    CMKEffectsGridView *_effectsGridView;
    CMKEffectsGridLabelsView *_effectsGridLabelsView;
    UIView *_fadeOutView;
}

@property (nonatomic, getter=isDisabledLayoutForEffectsFullsizeView) BOOL disableLayoutForEffectsFullsizeView; // @synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView;
@property (nonatomic, getter=isDisabledLayoutForEffectsGridViews) BOOL disableLayoutForEffectsGridViews; // @synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews;
@property (nonatomic, getter=isDisabledLayoutForPreviewView) BOOL disableLayoutForPreviewView; // @synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView;
@property (readonly, strong, nonatomic) CMKEffectsFullsizeView *effectsFullsizeView; // @synthesize effectsFullsizeView=_effectsFullsizeView;
@property (readonly, strong, nonatomic) CMKEffectsGridLabelsView *effectsGridLabelsView; // @synthesize effectsGridLabelsView=_effectsGridLabelsView;
@property (readonly, strong, nonatomic) CMKEffectsGridView *effectsGridView; // @synthesize effectsGridView=_effectsGridView;
@property (readonly, strong, nonatomic) UIView *fadeOutView; // @synthesize fadeOutView=_fadeOutView;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (strong, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property (readonly, strong, nonatomic) UIView *previewLayerView; // @synthesize previewLayerView=_previewLayerView;
@property (nonatomic, getter=isSquare) BOOL square; // @synthesize square=_square;
@property (copy, nonatomic) NSString *videoGravity;

- (void).cxx_destruct;
- (struct CGRect)_frameForSubviewsAccountForSquare:(BOOL)arg1;
- (void)_updateGravityForLayers;
- (struct CGRect)convertRect:(struct CGRect)arg1 toSublayer:(id)arg2;
- (void)createEffectsFullsizeView;
- (void)createEffectsGridViews;
- (void)dealloc;
- (void)destroyEffectsFullsizeViewRemoveFromSuperview:(BOOL)arg1;
- (void)destroyEffectsGridViewsRemoveFromSuperview:(BOOL)arg1;
- (struct CGRect)frameForView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)rectForCaptureDeviceFace:(id)arg1;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateToContentSize:(id)arg1;

@end

