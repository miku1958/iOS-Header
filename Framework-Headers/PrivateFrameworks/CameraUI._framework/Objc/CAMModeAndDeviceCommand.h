//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration, NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand
{
    int __requestID;
    CAMCaptureGraphConfiguration *__desiredGraphConfiguration;
    CAMCaptureGraphConfiguration *__resolvedGraphConfiguration;
    double __minimumExecutionTime;
    NSError *__configurationError;
}

@property (strong, nonatomic, setter=_setConfigurationError:) NSError *_configurationError; // @synthesize _configurationError=__configurationError;
@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration; // @synthesize _desiredGraphConfiguration=__desiredGraphConfiguration;
@property (readonly, nonatomic) double _minimumExecutionTime; // @synthesize _minimumExecutionTime=__minimumExecutionTime;
@property (readonly, nonatomic) int _requestID; // @synthesize _requestID=__requestID;
@property (strong, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration; // @synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration;

- (void).cxx_destruct;
- (id)_desiredInputsWithContext:(id)arg1;
- (id)_desiredOutputsWithContext:(id)arg1 shouldUseThumbnailOutputForFilters:(BOOL)arg2;
- (id)_existingInputsWithContext:(id)arg1 without:(id)arg2;
- (id)_existingOutputsWithContext:(id)arg1 without:(id)arg2;
- (BOOL)_isStillImageMode:(long long)arg1;
- (void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (void)_performPostConfigurationSetupForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (void)_sanitizeDeviceUsingContext:(id)arg1;
- (BOOL)_shouldEnableDeferredProcessingForMode:(long long)arg1;
- (BOOL)_shouldEnableLivePhotoCaptureForMode:(long long)arg1 device:(long long)arg2;
- (id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)arg1;
- (id)_specificFramerateCommandForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)arg1;
- (BOOL)_wantsLivePhotoMetadataInVideosForMode:(long long)arg1 device:(long long)arg2;
- (BOOL)_wantsLowLightBoostForMode:(long long)arg1 device:(long long)arg2;
- (BOOL)_wantsQuadraHighResolutionForMode:(long long)arg1 device:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 requestID:(int)arg3;
- (BOOL)requiresSessionModification;
- (id)sessionModificationLogReason;
- (double)sessionModificationMinimumExecutionTime;
- (id)userInfo;

@end

