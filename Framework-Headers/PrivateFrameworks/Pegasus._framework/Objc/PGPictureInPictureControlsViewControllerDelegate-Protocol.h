//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGPictureInPictureControlsViewController;

@protocol PGPictureInPictureControlsViewControllerDelegate <NSObject>

@optional
- (void)pictureInPictureControlsViewControllerActionButtonTapped:(PGPictureInPictureControlsViewController *)arg1;
- (void)pictureInPictureControlsViewControllerCancelButtonTapped:(PGPictureInPictureControlsViewController *)arg1;
- (BOOL)pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:(PGPictureInPictureControlsViewController *)arg1;
- (BOOL)pictureInPictureControlsViewControllerShouldHandleTapGesture:(PGPictureInPictureControlsViewController *)arg1;
- (void)pictureInPictureControlsViewControllerStopButtonTapped:(PGPictureInPictureControlsViewController *)arg1;
@end

