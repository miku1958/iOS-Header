//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class _UILegibilitySettings;

@protocol SBWallpaperObserver <NSObject>

@optional
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(_UILegibilitySettings *)arg1 forVariant:(long long)arg2;
- (void)wallpaperWillChangeForVariant:(long long)arg1;
@end

