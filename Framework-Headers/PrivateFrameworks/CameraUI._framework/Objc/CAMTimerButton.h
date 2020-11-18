//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSString, UIImageView;
@protocol CAMTimerButtonDelegate;

@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>
{
    BOOL _hideOffWhenCollapsed;
    id<CAMTimerButtonDelegate> _delegate;
    UIImageView *__glyphView;
}

@property (readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CAMTimerButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideOffWhenCollapsed; // @synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonCAMTimerButtonInitialization;
- (id)_currentGlyphImageForAccessibiliyHUD:(BOOL)arg1;
- (void)_updateCurrentGlyphImage;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)numberOfMenuItems;
- (double)padHeaderViewContentInsetLeft;
- (void)reloadData;
- (void)setDuration:(long long)arg1 animated:(BOOL)arg2;
- (void)setHideOffWhenCollapsed:(BOOL)arg1 needsReloadData:(BOOL)arg2;
- (id)shownIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end

