//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKExpandableMenuButton.h>

@class UIImageView;

@interface CMKFlashButton : CMKExpandableMenuButton
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

- (void).cxx_destruct;
- (void)_commonCMKFlashButtonInitialization;
- (id)_currentGlyphImage;
- (void)_updateCurrentGlyphImage;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (long long)indexForMode:(long long)arg1;
- (id)initWithExpansionOrientation:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)reloadData;
- (BOOL)shouldIgnoreMenuInteraction;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (BOOL)wantsSelectedItemToBeVisible;

@end

