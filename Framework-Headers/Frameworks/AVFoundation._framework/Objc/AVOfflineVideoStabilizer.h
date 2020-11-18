//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSMutableArray, NSMutableDictionary, NSSet;

@interface AVOfflineVideoStabilizer : NSObject
{
    CDStruct_1b6d18a9 _targetFrameDuration;
    int _metadataPrimingCount;
    AVWeakReference *_dataProviderWeakReference;
    struct __CVPixelBufferPool *_pixelBufferPool;
    BOOL _clientMarkedEndOfVideoData;
    long long _videoOutputFrameNumber;
    struct opaqueCMFormatDescription *_cachedVideoFormatDescription;
    NSMutableDictionary *_cachedInputBufferAttributes;
    NSMutableArray *_outputSampleBuffers;
    BOOL _clientMarkedEndOfMetadata;
    long long _metadataOutputFrameNumber;
    NSMutableArray *_futureFrameMetadataDicts;
    NSSet *_requiredMetadataKeys;
    NSSet *_optionalMetadataKeys;
    struct OpaqueFigSampleBufferProcessor *_gvsProcessor;
    BOOL _stabilizationEnabled;
}

@property (readonly, nonatomic) NSMutableArray *outputSampleBuffers; // @synthesize outputSampleBuffers=_outputSampleBuffers;
@property (readonly, nonatomic) int preferredSourcePixelBufferPrimingFrameCount;
@property (readonly, nonatomic) int preferredSourceStabilizationMetadataPrimingCount;

+ (void)initialize;
+ (id)offlineVideoStabilizerWithTargetFrameDuration:(CDStruct_1b6d18a9)arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool *)arg3 stabilizationEnabled:(BOOL)arg4;
- (struct opaqueCMSampleBuffer *)_copyStabilizedSampleBuffer:(id *)arg1;
- (struct opaqueCMSampleBuffer *)_createSampleBufferWithPixelBuffer:(struct __CVBuffer *)arg1 sampleTime:(CDStruct_1b6d18a9)arg2 futureMetadata:(id)arg3 status:(int *)arg4;
- (int)_setupGVSProcessorWithMetadataArray:(id)arg1;
- (void)_teardownVISProcessor;
- (int)_validateSourcePixelBuffer:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 isEndOfData:(BOOL *)arg4;
- (int)_validateStabilizationMetadata:(id)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2 isEndOfData:(BOOL *)arg3;
- (struct opaqueCMSampleBuffer *)copyStabilizedSampleBuffer:(id *)arg1;
- (void)dealloc;
- (id)initWithTargetFrameDuration:(CDStruct_1b6d18a9)arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool *)arg3 stabilizationEnabled:(BOOL)arg4;

@end
