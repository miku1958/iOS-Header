//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIColor;
@protocol SBFLegibilitySettingsProvider;

@protocol CSWallpaperColorProvider <NSObject>
- (UIColor *)averageColorForCurrentWallpaper;
- (UIColor *)averageColorForCurrentWallpaperInScreenRect:(struct CGRect)arg1;
- (double)contrastForCurrentWallpaper;
- (id<SBFLegibilitySettingsProvider>)newLegibilitySettingsProvider;
@end

