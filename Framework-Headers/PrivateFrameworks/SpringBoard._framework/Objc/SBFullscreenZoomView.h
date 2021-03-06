//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView
{
    BOOL _hasImage;
    id _surface;
}

@property (readonly, weak, nonatomic) id surface;

- (void).cxx_destruct;
- (void)_addBlackBackground;
- (id)_initWithFrame:(struct CGRect)arg1;
- (id)_initWithView:(id)arg1 displayConfiguration:(id)arg2;
- (id)initWithContainingBounds:(struct CGRect)arg1 contentFrame:(struct CGRect)arg2 statusBarFrame:(struct CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(BOOL)arg7 preventSplit:(BOOL)arg8 needsZoomFilter:(BOOL)arg9 asyncDecodeImage:(BOOL)arg10 forJail:(BOOL)arg11;
- (id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3;

@end

