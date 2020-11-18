//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGPictureInPictureViewController;

@protocol PGPictureInPictureViewControllerDelegate <NSObject>

@optional
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 controlsVisibilityChanged:(BOOL)arg2 animated:(BOOL)arg3;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (void)pictureInPictureViewControllerActionButtonTapped:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerCancelButtonTapped:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerStopButtonTapped:(PGPictureInPictureViewController *)arg1;
@end

