//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFWallpaperSlice;

@interface HUWallpaperView : UIView
{
    HFWallpaperSlice *_wallpaperSlice;
    UIView *_wallpaperContentView;
}

@property (strong, nonatomic) UIView *wallpaperContentView; // @synthesize wallpaperContentView=_wallpaperContentView;
@property (strong, nonatomic) HFWallpaperSlice *wallpaperSlice; // @synthesize wallpaperSlice=_wallpaperSlice;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)normalizedWallpaperRectForFrameInWindowSpace:(struct CGRect)arg1;

@end
