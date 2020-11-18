//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualLocalization/VLLocalizationDataProviderDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, VLLocalizationDataProvider;

@interface VLLocalizer : NSObject <VLLocalizationDataProviderDelegate>
{
    struct GEOOnce_s _vlOnce;
    struct vl_t *_vl;
    id<VLLocalizationDataProvider> _dataProvider;
    id<VLLocalizationDataProvider> _backupDataProvider;
    unsigned long long _signpostID;
    int _algorithmVersion;
    NSObject<OS_dispatch_queue> *_recorderQueue;
    BOOL _debugInfoShouldPreserveImageData;
    int _debug_algorithmVersion;
}

@property (nonatomic, getter=_algorithmVersion, setter=_setAlgorithmVersion:) int algorithmVersion; // @synthesize algorithmVersion=_debug_algorithmVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_debugInfoShouldPreserveImageData, setter=_setDebugInfoShouldPreserveImageData:) BOOL debugInfoShouldPreserveImageData; // @synthesize debugInfoShouldPreserveImageData=_debugInfoShouldPreserveImageData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (CDUnknownBlockType)_debugInfoRecorder;
+ (void)_setDebugInfoRecorder:(CDUnknownBlockType)arg1;
+ (BOOL)isVisualLocalizationSupported;
+ (double)maximumHorizontalAccuracyThreshold;
+ (double)minimumTiltAngle;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)_fileURLForTile:(const CDStruct_4c217994 *)arg1 error:(id *)arg2;
- (struct vl_t *)_vlHandle;
- (void)dataProvider:(id)arg1 didChangeFormatVersion:(unsigned int)arg2;
- (void)dealloc;
- (void)determineAvailabilityAtLocation:(CDStruct_c3074bf1)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)initWithDataProvider:(id)arg1;
- (id)locateWithPixelBuffer:(struct __CVBuffer *)arg1 deviceLocation:(id)arg2 heading:(CDStruct_160d0e14)arg3 gravity:(CDStruct_14d5dc5e)arg4 transform:(CDStruct_8e0628e6)arg5 cameraIntrinsics:(double)arg6 radialDistortion:(double)arg7 ambientLightIntensity:(id *)arg8 timestamp:error: /* Error: Ran out of types for this method. */;
- (id)locateWithPixelBuffer:(struct __CVBuffer *)arg1 deviceLocation:(id)arg2 heading:(CDStruct_160d0e14)arg3 gravity:(CDStruct_14d5dc5e)arg4 transform:(CDStruct_8e0628e6)arg5 cameraIntrinsics:(double)arg6 radialDistortion:(double)arg7 exposureTargetOffset:(id *)arg8 timestamp:error: /* Error: Ran out of types for this method. */;
- (id)locateWithPixelBuffer:(struct __CVBuffer *)arg1 location:(CDStruct_c3074bf1)arg2 heading:(CDStruct_160d0e14)arg3 gravity:(CDStruct_14d5dc5e)arg4 transform:(CDStruct_8e0628e6)arg5 cameraIntrinsics:(double)arg6 radialDistortion:(id *)arg7 timestamp:error: /* Error: Ran out of types for this method. */;
- (id)locateWithPixelBuffer:(struct __CVBuffer *)arg1 timestamp:(unsigned long long)arg2 location:(CDStruct_c3074bf1)arg3 gravity:(CDStruct_14d5dc5e)arg4 transform:(CDStruct_8e0628e6)arg5 cameraIntrinsics:(id *)arg6 radialDistortion:error: /* Error: Ran out of types for this method. */;
- (id)locateWithPixelBuffer:(struct __CVBuffer *)arg1 timestamp:(unsigned long long)arg2 location:(CDStruct_c3074bf1)arg3 heading:(CDStruct_160d0e14)arg4 gravity:(CDStruct_14d5dc5e)arg5 transform:(CDStruct_8e0628e6)arg6 cameraIntrinsics:(id *)arg7 radialDistortion:error: /* Error: Ran out of types for this method. */;
- (void)prepareWithDeviceLocation:(id)arg1;
- (void)prepareWithLocation:(CDStruct_c3074bf1)arg1;

@end
