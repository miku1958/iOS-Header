//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFWallpaperSlice, HUGridCellBackgroundDisplayOptions, UIVisualEffectView;

@interface HUGridCellBackgroundView : UIView
{
    BOOL _pressed;
    unsigned long long _backgroundState;
    HUGridCellBackgroundDisplayOptions *_displayOptions;
    HFWallpaperSlice *_blurredWallpaperSlice;
    double _cornerRadius;
    UIVisualEffectView *_effectView;
    UIView *_ccMaterialView;
    struct CGRect _normalizedWallpaperRect;
}

@property (nonatomic) unsigned long long backgroundState; // @synthesize backgroundState=_backgroundState;
@property (strong, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // @synthesize blurredWallpaperSlice=_blurredWallpaperSlice;
@property (strong, nonatomic) UIView *ccMaterialView; // @synthesize ccMaterialView=_ccMaterialView;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (strong, nonatomic) HUGridCellBackgroundDisplayOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
@property (strong, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property (nonatomic) struct CGRect normalizedWallpaperRect; // @synthesize normalizedWallpaperRect=_normalizedWallpaperRect;
@property (nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;

- (void).cxx_destruct;
- (void)_createCCMaterialViewIfNecessary;
- (void)_createEffectViewIfNecessary;
- (id)_highlightedBackgroundColor;
- (void)_invalidateStaticPunchOutMask;
- (BOOL)_isUsingControlCenterDisplayStyle;
- (id)_normalBackgroundColor;
- (BOOL)_shouldUseCCMaterialView;
- (BOOL)_shouldUseCCStaticPunchOutStyle;
- (BOOL)_shouldUsePrecomputedWallpaperContents;
- (BOOL)_shouldUseVisualEffectStyle;
- (void)_updateBackgroundColor;
- (void)_updateCornerRadius;
- (void)_updateDisplay;
- (void)_updateWallpaperContentsRect;
- (void)_updateWallpaperContentsScale;
- (id)ccuiPunchOutMaskForView:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
