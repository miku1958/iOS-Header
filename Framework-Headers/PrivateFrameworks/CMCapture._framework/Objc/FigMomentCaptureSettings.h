//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CMCapture/NSCopying-Protocol.h>
#import <CMCapture/NSSecureCoding-Protocol.h>

@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying>
{
    long long _settingsID;
    unsigned long long _userInitiatedCaptureTime;
    int _torchMode;
    int _flashMode;
    BOOL _autoRedEyeReductionEnabled;
    int _digitalFlashMode;
    int _qualityPrioritization;
    int _HDRMode;
    BOOL _autoOriginalPhotoDeliveryEnabled;
    BOOL _autoSpatialOverCaptureEnabled;
    BOOL _autoDeferredProcessingEnabled;
    unsigned int _rawOutputFormat;
}

@property (nonatomic) int HDRMode; // @synthesize HDRMode=_HDRMode;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) BOOL autoDeferredProcessingEnabled; // @synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) BOOL autoOriginalPhotoDeliveryEnabled; // @synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled;
@property (nonatomic) BOOL autoRedEyeReductionEnabled; // @synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled; // @synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled;
@property (nonatomic) int digitalFlashMode; // @synthesize digitalFlashMode=_digitalFlashMode;
@property (nonatomic) int flashMode; // @synthesize flashMode=_flashMode;
@property (nonatomic) int qualityPrioritization; // @synthesize qualityPrioritization=_qualityPrioritization;
@property (nonatomic) unsigned int rawOutputFormat; // @synthesize rawOutputFormat=_rawOutputFormat;
@property (readonly, nonatomic) long long settingsID; // @synthesize settingsID=_settingsID;
@property (nonatomic) int torchMode; // @synthesize torchMode=_torchMode;
@property (readonly, nonatomic) unsigned long long userInitiatedCaptureTime; // @synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1 userInitiatedCaptureTime:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

