//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton
{
    BOOL _allowsAutomaticFlash;
    BOOL _unavailable;
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
}

@property (readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property (readonly, nonatomic) UIImageView *_warningIndicatorView; // @synthesize _warningIndicatorView=__warningIndicatorView;
@property (nonatomic) BOOL allowsAutomaticFlash; // @synthesize allowsAutomaticFlash=_allowsAutomaticFlash;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isUnavailable) BOOL unavailable; // @synthesize unavailable=_unavailable;

+ (long long)flashModeForTorchMode:(long long)arg1;
+ (long long)torchModeForFlashMode:(long long)arg1;
- (void).cxx_destruct;
- (void)_commonCAMFlashButtonInitialization;
- (id)_currentGlyphImage;
- (void)_updateCurrentGlyphImage;
- (double)collapsedSelectedLabelHorizontalMargin;
- (id)headerView;
- (long long)indexForMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)reloadData;
- (BOOL)shouldIgnoreMenuInteraction;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (BOOL)wantsSelectedItemToBeVisible;

@end

