//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSArray, NSString, UIImageView;

@interface CAMHDRButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>
{
    BOOL _allowsAutomaticHDR;
    BOOL _allowsHDROn;
    UIImageView *__glyphView;
    NSArray *__allowedModes;
}

@property (nonatomic) long long HDRMode;
@property (copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes; // @synthesize _allowedModes=__allowedModes;
@property (readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property (nonatomic) BOOL allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
@property (nonatomic) BOOL allowsHDROn; // @synthesize allowsHDROn=_allowsHDROn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonCAMHDRButtonInitialization;
- (id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1;
- (void)_updateAllowedModes;
- (void)_updateCurrentGlyphImage;
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 needsReloadData:(BOOL)arg2;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (unsigned long long)indexForMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticHDR:(BOOL)arg1 needsReloadData:(BOOL)arg2;
- (BOOL)shouldAllowExpansion;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end

