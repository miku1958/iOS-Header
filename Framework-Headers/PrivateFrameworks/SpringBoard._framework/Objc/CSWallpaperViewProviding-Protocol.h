//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, UIView;
@protocol BSInvalidatable, CSWallpaperView;

@protocol CSWallpaperViewProviding <NSObject>
- (UIView<CSWallpaperView> *)createCoverSheetWallpaperView;
- (UIView<CSWallpaperView> *)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;
- (id<BSInvalidatable>)suspendWallpaperAnimationForReason:(NSString *)arg1;
- (void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@end

