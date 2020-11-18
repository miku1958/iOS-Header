//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>

@class AVAsset, AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, NSDictionary, NSMutableArray, NSSet, NSString;
@protocol ARReplaySensorDelegate, ARSensorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ARReplaySensor : NSObject <ARSensor>
{
    BOOL _manualCommandLineMode;
    AVAsset *_asset;
    NSMutableArray *_arImageData;
    NSMutableArray *_arAccelerometerData;
    NSMutableArray *_arGyroData;
    NSMutableArray *_arDeviceOrientationData;
    NSDictionary *_recordedResultGetters;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    long long _tick;
    double _frameRateScale;
    double _timestampWhenFramerateChanged;
    double _imageTimestampWhenFramerateChanged;
    int _imageIndexForPreloading;
    int _accelDataIndex;
    int _gyroDataIndex;
    int _deviceOrientationDataIndex;
    BOOL _running;
    BOOL _metadataLoadedFromAsset;
    BOOL _interrupted;
    BOOL _replayStarted;
    struct opaqueCMSampleBuffer *_nextSampleBuffer;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_imageOutput;
    AVAssetReaderTrackOutput *_depthOutput;
    struct opaqueCMSampleBuffer *_nextDepthSampleBuffer;
    AVAssetReaderOutputMetadataAdaptor *_oldMotionOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_deviceOrientationOutputMetadataAdaptor;
    NSDictionary *_recordedResultAdaptors;
    unsigned long long _sensorDataTypes;
    BOOL _isReplayingManually;
    float _advanceFramesPerSecondMultiplier;
    int _imageIndex;
    id<ARSensorDelegate> _delegate;
    id<ARReplaySensorDelegate> _replaySensorDelegate;
    NSString *_deviceModel;
    unsigned long long _recordedSensorTypes;
    NSSet *_recordedResultClasses;
    unsigned long long _forcePlaybackFramesPerSecond;
    long long _nextFrameIndex;
    long long _targetFrameIndex;
    struct CGSize _imageResolution;
}

@property float advanceFramesPerSecondMultiplier; // @synthesize advanceFramesPerSecondMultiplier=_advanceFramesPerSecondMultiplier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property (nonatomic) unsigned long long forcePlaybackFramesPerSecond; // @synthesize forcePlaybackFramesPerSecond=_forcePlaybackFramesPerSecond;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageIndex; // @synthesize imageIndex=_imageIndex;
@property (readonly, nonatomic) struct CGSize imageResolution; // @synthesize imageResolution=_imageResolution;
@property (readonly, nonatomic) BOOL interrupted; // @synthesize interrupted=_interrupted;
@property (readonly, nonatomic) BOOL isReplayingManually; // @synthesize isReplayingManually=_isReplayingManually;
@property long long nextFrameIndex; // @synthesize nextFrameIndex=_nextFrameIndex;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly, nonatomic) NSSet *recordedResultClasses; // @synthesize recordedResultClasses=_recordedResultClasses;
@property (readonly, nonatomic) unsigned long long recordedSensorTypes; // @synthesize recordedSensorTypes=_recordedSensorTypes;
@property (weak, nonatomic) id<ARReplaySensorDelegate> replaySensorDelegate; // @synthesize replaySensorDelegate=_replaySensorDelegate;
@property (readonly) Class superclass;
@property long long targetFrameIndex; // @synthesize targetFrameIndex=_targetFrameIndex;

- (void).cxx_destruct;
- (void)_didOutputSensorData:(id)arg1;
- (void)advance;
- (void)advanceFrame;
- (void)advanceToFrameIndex:(long long)arg1;
- (id)createAndAddMetadataAdaptorForTrack:(id)arg1;
- (double)currentTime;
- (void)dealloc;
- (void)endInterruption;
- (void)endReplay;
- (void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)failWithError:(id)arg1;
- (void)fastForwardIndexesToTime:(double)arg1;
- (id)getNextAccelerometerData;
- (id)getNextDeviceOrientationData;
- (id)getNextGyroData;
- (id)getNextImageData;
- (id)getResultDataForClasses:(id)arg1 atTimestamp:(double)arg2;
- (BOOL)hasAccelerometerDataForTime:(double)arg1;
- (BOOL)hasDeviceOrientationDataForTime:(double)arg1;
- (BOOL)hasGyroDataForTime:(double)arg1;
- (BOOL)hasImageDataForTimestamp:(double)arg1;
- (BOOL)hasMoreData;
- (id)initWithDataFromFile:(id)arg1;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2;
- (void)initializeAssetReaderWithAsset:(id)arg1 buffersOnly:(BOOL)arg2;
- (void)interrupt;
- (void)loadAllMetadata;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)preloadNextPixelBuffers:(int)arg1;
- (void)prepareForReplay;
- (unsigned long long)providedDataTypes;
- (void)readFileMetadataFromAsset:(id)arg1;
- (id)replayTechniqueForResultDataClasses:(id)arg1;
- (struct __CVBuffer *)requestNextDepthPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer *)requestNextPixelBufferForTimestamp:(double)arg1;
- (void)start;
- (void)startReplayIfNeeded;
- (void)stop;
- (void)tick;
- (BOOL)track:(id)arg1 hasMetadataIdentifier:(id)arg2;
- (id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (id)unpackTimestampedItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;

@end
