//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CMKBottomBar, PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlayBottomBar : UIView
{
    BOOL _playingVideo;
    BOOL _inPopover;
    long long _style;
    CMKBottomBar *_cameraBottomBar;
    PLCropOverlayPreviewBottomBar *_previewBottomBar;
    PLCropOverlayWallpaperBottomBar *_wallpaperBottomBar;
}

@property (strong, nonatomic) CMKBottomBar *cameraBottomBar; // @synthesize cameraBottomBar=_cameraBottomBar;
@property (nonatomic, getter=isInPopover) BOOL inPopover; // @synthesize inPopover=_inPopover;
@property (nonatomic, getter=isPlayingVideo) BOOL playingVideo; // @synthesize playingVideo=_playingVideo;
@property (strong, nonatomic) PLCropOverlayPreviewBottomBar *previewBottomBar; // @synthesize previewBottomBar=_previewBottomBar;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar; // @synthesize wallpaperBottomBar=_wallpaperBottomBar;

- (void)_commonPLCropOverlayBottomBarInitialization;
- (BOOL)_isEditingStyle:(long long)arg1;
- (void)_updateBottomBars;
- (void)_updatePreviewBottomBarForPlaybackState;
- (void)_updateStyle;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)togglePlaybackState;

@end

