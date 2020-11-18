//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class AVPictureInPictureController, NSError;

@protocol AVPictureInPictureControllerDelegate <NSObject>

@optional
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(BOOL))arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(AVPictureInPictureController *)arg1;
@end

