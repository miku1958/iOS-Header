//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGCommand, PGPictureInPictureViewController;

@protocol PGPictureInPictureViewControllerDelegate <NSObject>
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 didReceiveCommand:(PGCommand *)arg2;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 didTransitionToStashed:(BOOL)arg2 shouldBeginOrEndInterruption:(BOOL)arg3;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(PGPictureInPictureViewController *)arg1;
@end
