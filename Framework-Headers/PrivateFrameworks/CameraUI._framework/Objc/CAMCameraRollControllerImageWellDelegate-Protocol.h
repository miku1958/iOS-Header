//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCameraRollController, NSString, UIImage;

@protocol CAMCameraRollControllerImageWellDelegate <NSObject>

@optional
- (void)cameraRollController:(CAMCameraRollController *)arg1 didChangeImageWellImage:(UIImage *)arg2 withUUID:(NSString *)arg3 animated:(BOOL)arg4;
@end
