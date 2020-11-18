//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings
{
    AVCapturePhotoBracketSettingsInternal *_bracketSettingsInternal;
}

@property (readonly, nonatomic) NSArray *bracketedSettings;
@property (nonatomic, getter=isLensStabilizationEnabled) BOOL lensStabilizationEnabled;

+ (void)initialize;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5;
- (id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned int)arg3 rawFileType:(id)arg4 bracketedSettings:(id)arg5 uniqueID:(long long)arg6 exceptionReason:(id *)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)setAutoDualCameraFusionEnabled:(BOOL)arg1;
- (void)setAutoRedEyeReductionEnabled:(BOOL)arg1;
- (void)setAutoStillImageStabilizationEnabled:(BOOL)arg1;
- (void)setAutoVirtualDeviceFusionEnabled:(BOOL)arg1;
- (void)setEV0PhotoDeliveryEnabled:(BOOL)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;

@end
