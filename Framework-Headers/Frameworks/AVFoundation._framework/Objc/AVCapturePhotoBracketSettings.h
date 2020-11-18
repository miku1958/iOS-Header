//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings
{
    AVCapturePhotoBracketSettingsInternal *_bracketSettingsInternal;
}

@property (readonly, nonatomic) NSArray *bracketedSettings;
@property (nonatomic, getter=isLensStabilizationEnabled) BOOL lensStabilizationEnabled;

+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3;
- (id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned int)arg2 bracketedSettings:(id)arg3 uniqueID:(long long)arg4 exceptionReason:(id *)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)setAutoBravoImageFusionEnabled:(BOOL)arg1;
- (void)setAutoDualCameraFusionEnabled:(BOOL)arg1;
- (void)setAutoStillImageStabilizationEnabled:(BOOL)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setOriginalPhotoDeliveryEnabled:(BOOL)arg1;

@end

