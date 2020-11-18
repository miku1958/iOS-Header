//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVCapturePhotoSettingsInternal, NSArray, NSDictionary, NSURL;

@interface AVCapturePhotoSettings : NSObject <NSCopying>
{
    AVCapturePhotoSettingsInternal *_internal;
}

@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) BOOL autoStillImageStabilizationEnabled;
@property (readonly, nonatomic) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (nonatomic) long long flashMode;
@property (readonly, copy) NSDictionary *format;
@property (nonatomic, getter=isHighResolutionPhotoEnabled) BOOL highResolutionPhotoEnabled;
@property (copy, nonatomic) NSURL *livePhotoMovieFileURL;
@property (copy, nonatomic) NSArray *livePhotoMovieMetadata;
@property (copy, nonatomic) NSDictionary *previewPhotoFormat;
@property (readonly) unsigned int rawPhotoPixelFormatType;
@property (readonly) long long uniqueID;

+ (id)photoSettings;
+ (id)photoSettingsFromPhotoSettings:(id)arg1;
+ (id)photoSettingsWithFormat:(id)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2;
+ (long long)uniqueID;
- (long long)HDRMode;
- (id)_description;
- (id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned int)arg2 uniqueID:(long long)arg3;
- (id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)formatFourCC;
- (id)init;
- (BOOL)isAutoBravoImageFusionEnabled;
- (BOOL)isOriginalPhotoDeliveryEnabled;
- (BOOL)isSquareCropEnabled;
- (BOOL)isTurboModeEnabled;
- (id)livePhotoContentIdentifier;
- (id)livePhotoContentIdentifierForOriginalPhoto;
- (id)livePhotoMovieFileURLForOriginalPhoto;
- (id)livePhotoMovieMetadataForOriginalPhoto;
- (struct CGSize)previewCGSize;
- (unsigned int)previewFormatFourCC;
- (void)setAutoBravoImageFusionEnabled:(BOOL)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setLivePhotoContentIdentifier:(id)arg1;
- (void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setOriginalPhotoDeliveryEnabled:(BOOL)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setSquareCropEnabled:(BOOL)arg1;
- (void)setTurboModeEnabled:(BOOL)arg1;
- (unsigned int)shutterSound;

@end

