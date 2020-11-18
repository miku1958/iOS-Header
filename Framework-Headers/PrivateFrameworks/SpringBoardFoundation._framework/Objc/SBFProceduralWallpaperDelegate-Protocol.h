//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class UIColor;
@protocol SBFProceduralWallpaper;

@protocol SBFProceduralWallpaperDelegate <NSObject>
- (void)wallpaper:(id<SBFProceduralWallpaper>)arg1 didComputeAverageColor:(UIColor *)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id<SBFProceduralWallpaper>)arg1 didGenerateBlur:(void *)arg2 forRect:(struct CGRect)arg3;
@end

