//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWallpaperEffectViewBase.h>

#import <SpringBoard/SBApplicationSceneBackgroundView-Protocol.h>

@class NSString, SBWallpaperController;

@interface SBWallpaperEffectView : SBWallpaperEffectViewBase <SBApplicationSceneBackgroundView>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (nonatomic) long long wallpaperStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;

@end

