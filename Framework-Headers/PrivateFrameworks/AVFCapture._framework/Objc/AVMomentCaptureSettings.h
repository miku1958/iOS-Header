//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCapture/NSCopying-Protocol.h>

@class NSString;

@interface AVMomentCaptureSettings : NSObject <NSCopying>
{
    long long _uniqueID;
    unsigned long long _userInitiatedCaptureTime;
    long long _torchMode;
    long long _flashMode;
    BOOL _autoRedEyeReductionEnabled;
    long long _digitalFlashMode;
    long long _photoQualityPrioritization;
    long long _HDRMode;
    BOOL _autoOriginalPhotoDeliveryEnabled;
    NSString *_bravoCameraSelectionBehaviorForRecording;
    BOOL _autoSpatialOverCaptureEnabled;
    BOOL _autoDeferredProcessingEnabled;
    unsigned int _rawOutputFormat;
}

@property (nonatomic) long long HDRMode;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) BOOL autoDeferredProcessingEnabled; // @synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) BOOL autoOriginalPhotoDeliveryEnabled; // @synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) BOOL autoRedEyeReductionEnabled; // @synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled; // @synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled;
@property (copy, nonatomic) NSString *bravoCameraSelectionBehaviorForRecording;
@property (nonatomic) long long digitalFlashMode;
@property (nonatomic) long long flashMode;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) unsigned int rawOutputFormat; // @synthesize rawOutputFormat=_rawOutputFormat;
@property (nonatomic) long long torchMode;
@property (readonly, nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property (readonly, nonatomic) unsigned long long userInitiatedCaptureTime; // @synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime;

+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;
- (id)_initWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;

@end

