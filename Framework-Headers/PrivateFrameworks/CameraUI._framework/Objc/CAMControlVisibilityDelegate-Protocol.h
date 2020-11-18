//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@protocol CAMControlVisibilityDelegate <NSObject>

@property (readonly, nonatomic) BOOL shouldHideElapsedTimeView;
@property (readonly, nonatomic) BOOL shouldHideFilterNameBadge;
@property (readonly, nonatomic) BOOL shouldHideFlashButton;
@property (readonly, nonatomic) BOOL shouldHideFlipButton;
@property (readonly, nonatomic) BOOL shouldHideHDRButton;
@property (readonly, nonatomic) BOOL shouldHideIrisButton;
@property (readonly, nonatomic) BOOL shouldHideLightingControl;
@property (readonly, nonatomic) BOOL shouldHidePortraitModeInstructionLabel;
@property (readonly, nonatomic) BOOL shouldHideTimerButton;
@property (readonly, nonatomic) BOOL shouldHideTopBar;
@property (readonly, nonatomic) BOOL shouldShiftPreviewForUtilityBar;

- (BOOL)shouldHideLightingNameBadgeForOrientation:(long long)arg1;
@end
