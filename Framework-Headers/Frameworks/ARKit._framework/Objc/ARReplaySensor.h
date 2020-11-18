//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>

@class AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, NSMutableArray, NSString;
@protocol ARReplaySensorDelegate, ARSensorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ARReplaySensor : NSObject <ARSensor>
{
    NSMutableArray *_arImageData;
    NSMutableArray *_arAccelerometerData;
    NSMutableArray *_arGyroData;
    NSMutableArray *_arDeviceOrientationData;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    int _imageIndexForPreloading;
    int _imageIndex;
    int _accelDataIndex;
    int _gyroDataIndex;
    int _deviceOrientationDataIndex;
    BOOL _replayInProgress;
    BOOL _dataLoadedFromAsset;
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
    unsigned long long _sensorDataTypes;
    id<ARSensorDelegate> _delegate;
    id<ARReplaySensorDelegate> _replaySensorDelegate;
    NSString *_deviceModel;
    unsigned long long _recordedSensorTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly, nonatomic) unsigned long long recordedSensorTypes; // @synthesize recordedSensorTypes=_recordedSensorTypes;
@property (weak, nonatomic) id<ARReplaySensorDelegate> replaySensorDelegate; // @synthesize replaySensorDelegate=_replaySensorDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createAndAddMetadataAdaptorForTrack:(id)arg1;
- (void)dealloc;
- (void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)failWithError:(id)arg1;
- (id)getNextAccelerometerData;
- (id)getNextDeviceOrientationData;
- (id)getNextGyroData;
- (id)getNextImageData;
- (BOOL)hasAccelerometerDataForTime:(double)arg1;
- (BOOL)hasDeviceOrientationDataForTime:(double)arg1;
- (BOOL)hasGyroDataForTime:(double)arg1;
- (BOOL)hasImageDataForTime:(double)arg1;
- (BOOL)hasMoreData;
- (id)initWithDataFromFile:(id)arg1;
- (void)initializeAssetReaderWithAsset:(id)arg1;
- (void)preloadNextPixelBuffers:(int)arg1;
- (unsigned long long)providedDataTypes;
- (void)readFileMetadataFromAsset:(id)arg1;
- (void)readMetadataIntoArrays;
- (void)replayData;
- (struct __CVBuffer *)requestNextDepthPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer *)requestNextPixelBufferForTimestamp:(double)arg1;
- (void)start;
- (void)stop;
- (void)tick;
- (BOOL)track:(id)arg1 hasMetadataIdentifier:(id)arg2;
- (id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;

@end

