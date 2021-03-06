//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMTimelapseController, CAMTimelapsePlaceholderResult, NSError, NSString, UIImage;

@protocol CAMTimelapseControllerDelegate <NSObject>
- (void)timelapseController:(CAMTimelapseController *)arg1 generatedPlaceholderResult:(CAMTimelapsePlaceholderResult *)arg2 withThumbnailImage:(UIImage *)arg3 forAssetUUID:(NSString *)arg4 inCaptureSession:(unsigned short)arg5;
- (void)timelapseController:(CAMTimelapseController *)arg1 persistedPlaceholderResult:(CAMTimelapsePlaceholderResult *)arg2 error:(NSError *)arg3;
- (void)timelapseController:(CAMTimelapseController *)arg1 startedWithCaptureOrientation:(long long)arg2;
- (void)timelapseControllerStopped:(CAMTimelapseController *)arg1;
@end

