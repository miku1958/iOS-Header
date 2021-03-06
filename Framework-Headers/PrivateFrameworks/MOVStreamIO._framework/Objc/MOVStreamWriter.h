//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MOVStreamIO/MOVStreamWriterDeprecated-Protocol.h>
#import <MOVStreamIO/MOVStreamWriterDeprecationNominates-Protocol.h>
#import <MOVStreamIO/MOVStreamWriterStateContext-Protocol.h>
#import <MOVStreamIO/VideoEncoderInterfaceDelegate-Protocol.h>

@class AVAssetWriter, NSArray, NSError, NSString, NSURL;
@protocol MOVStreamCustomEncoderConfigDelegate, MOVStreamWriterDelegate, MOVStreamWriterState, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MOVStreamWriter : NSObject <VideoEncoderInterfaceDelegate, MOVStreamWriterStateContext, MOVStreamWriterDeprecated, MOVStreamWriterDeprecationNominates>
{
    NSObject<OS_dispatch_queue> *m_delegateCallbackQueue;
    NSObject<OS_dispatch_queue> *m_writingQueue;
    NSObject<OS_dispatch_queue> *m_processingQueue;
    NSObject<OS_dispatch_semaphore> *m_finisDrainFifohWaitSemaphore;
    NSURL *m_writeURL;
    AVAssetWriter *m_assetWriter;
    double m_expectedFrameRate;
    BOOL m_realtime;
    BOOL m_haveStartedSession;
    struct CGAffineTransform m_videoTransform;
    map_d85c7ab5 m_streamDataMap;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> m_orderedStreamNames;
    map_e6e41a93 m_metadataDataMap;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> m_orderedMetadataStreamNames;
    struct map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>>> m_associatedMetadataDataMap;
    struct map<std::__1::basic_string<char>, CMTime, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CMTime>>> m_lastPtsForStream;
    BOOL m_observingIsReady;
    id<MOVStreamWriterState> _state;
    unsigned long long _defaultWritingBufferCapacity;
    unsigned long long _defaultAudioWritingBufferCapacity;
    unsigned long long _defaultMetadataWritingBufferCapacity;
    int _baseMediaTimeScale;
    NSArray *movMetadataItems;
    NSError *criticalError;
    double _finishingTimeout;
    id<MOVStreamCustomEncoderConfigDelegate> _customEncoderConfigDelegate;
    id<MOVStreamWriterDelegate> _delegate;
}

@property int baseMediaTimeScale; // @synthesize baseMediaTimeScale=_baseMediaTimeScale;
@property (strong) NSError *criticalError; // @synthesize criticalError;
@property (weak) id<MOVStreamCustomEncoderConfigDelegate> customEncoderConfigDelegate; // @synthesize customEncoderConfigDelegate=_customEncoderConfigDelegate;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long defaultAudioWritingBufferCapacity;
@property unsigned long long defaultMetadataWritingBufferCapacity;
@property unsigned long long defaultWritingBufferCapacity;
@property (weak) id<MOVStreamWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property unsigned long long fifoBufferCapacity;
@property double finishingTimeout; // @synthesize finishingTimeout=_finishingTimeout;
@property (readonly) unsigned long long hash;
@property (strong) NSArray *movMetadataItems; // @synthesize movMetadataItems;
@property (strong) id<MOVStreamWriterState> state; // @synthesize state=_state;
@property (readonly) long long status;
@property (readonly) Class superclass;

+ (id)getMOVStreamIOMetadataItem;
+ (unsigned int)getPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)activateNewState:(id)arg1 byEvent:(id)arg2;
- (void)addAudioTrackForStreamWithIdentifier:(id)arg1 audioFormat:(id)arg2 additionalSettings:(id)arg3;
- (void)addIsReadyObservers;
- (void)addMetadataTrack:(id)arg1;
- (void)addMetadataTrack:(id)arg1 formatDescription:(const struct opaqueCMFormatDescription *)arg2;
- (void)addMetadataTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 withFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 encoderConfig:(id)arg3;
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(const struct opaqueCMFormatDescription *)arg2 recordingConfiguration:(id)arg3;
- (void)appendAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 forStream:(id)arg2;
- (void)appendMetadata:(id)arg1 associatedWith:(id)arg2 toStream:(id)arg3;
- (void)appendMetadata:(id)arg1 withTimeStamp:(CDStruct_1b6d18a9)arg2 toStream:(id)arg3;
- (void)appendPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 toStreamId:(id)arg3;
- (void)appendTimeMetadataGroup:(id)arg1 toStream:(id)arg2;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachmentMetadata:(id)arg2 streamId:(id)arg3;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachments:(id)arg2 streamId:(id)arg3;
- (unsigned long long)applyBitrateModifiersTo:(unsigned long long)arg1;
- (void)asyncWriteAssociatedMetadata:(id)arg1 metadataKey:(basic_string_a1f69cfb)arg2 associatedStreamKey:(basic_string_a1f69cfb)arg3;
- (int)attachmentSerializationModeForStream:(basic_string_a1f69cfb)arg1 withDefaultMode:(int)arg2;
- (int)attachmentSerializationModeForStream:(basic_string_a1f69cfb)arg1 withDefaultMode:(int)arg2 fromMap:(map_d85c7ab5 *)arg3;
- (void)cancelRecording;
- (void)checkForFinishing;
- (BOOL)checkIfFifoAreEmpty;
- (void)clearAllFifoQueues;
- (void)consumeMetadatOfMetadataStream:(id)arg1;
- (void)consumeSamplesOfVideoAudioStream:(id)arg1;
- (const struct opaqueCMFormatDescription *)createMetadataFormatDescription:(id)arg1;
- (id)createRelatedToStreamMetadata:(id)arg1;
- (id)createRelationSpecifierMetadata:(id)arg1;
- (id)customMetadataTrackMetadataForStream:(id)arg1 fromMap:(map_e6e41a93 *)arg2;
- (id)customTrackMetadataForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (void)dealloc;
- (void)deleteFileOnCancel;
- (void)deleteMOVFile;
- (unsigned int)encoder:(id)arg1 codecTypeOverrideForstreamId:(id)arg2;
- (BOOL)encoder:(id)arg1 configureSessionOverride:(struct OpaqueVTCompressionSession *)arg2 streamId:(id)arg3;
- (void)encoder:(id)arg1 encodedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(id)arg3 presentationTime:(CDStruct_1b6d18a9)arg4 streamId:(id)arg5;
- (void)encoder:(id)arg1 encodingFailedForStream:(id)arg2;
- (id)encoder:(id)arg1 overrideVideoEncoderSpecificationForstreamId:(id)arg2;
- (int)encoderTypeForStream:(id)arg1;
- (void)executePrepareToRecordWithMovieMetadata:(id)arg1;
- (unsigned long long)fifoBufferSizeForStream:(id)arg1;
- (BOOL)fifoDropsEnabled:(struct StreamRecordingData *)arg1;
- (void)finishAVWriter;
- (void)finishAndDrainFifoFirst;
- (void)finishRecording;
- (void)forceFinishRecording;
- (id)getAudioMetadataForBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (unsigned long long)getBitsPerSecondForColorStream:(id)arg1 dimensions:(CDStruct_1ef3fb1f)arg2;
- (double)getExpectedFrameRateForStream:(id)arg1;
- (id)getMetadataGroupForBuffer:(struct __CVBuffer *)arg1 stream:(id)arg2 presentationTime:(CDStruct_1b6d18a9)arg3 serializationMode:(int)arg4;
- (unsigned int)getPixelFormatForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackEncodedPixelFormatMetadataForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackInputPixelFormatMetadataForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackMetadataForAttachmentsSerializationMode:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackMetadataForExactBytesPerRow:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackMetadataForRawBayerRearrangeType:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackMetadataForStream:(id)arg1;
- (id)getTrackMetadataForTrackTypeInfo:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (struct CGAffineTransform)getVideoTransformForStream:(id)arg1;
- (id)getWriterSettingsForStream:(id)arg1 description:(struct opaqueCMFormatDescription *)arg2;
- (void)informDelegateAboutError:(id)arg1;
- (void)informDelegateAboutFinishingTimeout;
- (void)informDelegateAboutIsReady:(BOOL)arg1 forStream:(id)arg2;
- (void)informDelegateAboutMediaWrittenForStream:(id)arg1 mediaType:(long long)arg2;
- (id)initWithURL:(id)arg1 andExpectedFrameRate:(double)arg2;
- (BOOL)isAudioStream:(struct StreamRecordingData *)arg1;
- (BOOL)isReadyForMoreDataForStreamId:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (BOOL)marksOutputTracksAsEnabledForStream:(basic_string_a1f69cfb)arg1;
- (BOOL)marksOutputTracksAsEnabledForStream:(basic_string_a1f69cfb)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (void)newSampleReady:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2 presentationTime:(CDStruct_1b6d18a9)arg3 streamKey:(basic_string_a1f69cfb)arg4 streamId:(id)arg5 isAudioSample:(BOOL)arg6;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareToRecord;
- (void)prepareToRecordWithMovieMetadata:(id)arg1;
- (void)processCancelRecording;
- (void)processFinishRecording;
- (void)processForceFinishRecording;
- (void)queueMetadataGroup:(id)arg1 stream:(id)arg2;
- (BOOL)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3;
- (BOOL)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3 error:(id *)arg4;
- (void)removeIsReadyObservers;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (BOOL)setExpectedFrameRate:(double)arg1;
- (BOOL)setRealTimeCapture:(BOOL)arg1;
- (BOOL)setTrackMetadata:(id)arg1 forMetadataStream:(id)arg2;
- (BOOL)setTrackMetadata:(id)arg1 forMetadataStream:(id)arg2 error:(id *)arg3;
- (BOOL)setTrackMetadata:(id)arg1 forStream:(id)arg2;
- (BOOL)setTrackMetadata:(id)arg1 forStream:(id)arg2 error:(id *)arg3;
- (BOOL)setVideoTransform:(struct CGAffineTransform)arg1;
- (BOOL)setVideoTransformFromOrientation:(int)arg1;
- (void)setWritingBufferCapacity:(unsigned long long)arg1 forAudioStream:(id)arg2;
- (void)setWritingBufferCapacity:(unsigned long long)arg1 forMetadataStream:(id)arg2;
- (void)setWritingBufferCapacity:(unsigned long long)arg1 forStream:(id)arg2;
- (void)setupAssetWriterStreamInputsWithError:(id *)arg1;
- (void)setupAssociatedMetadataInputsWithError:(id *)arg1;
- (void)setupMetadataInputsWithError:(id *)arg1;
- (void)writeMetadata:(id)arg1 forStreamId:(id)arg2;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 andMetadata:(id)arg2 forStreamId:(id)arg3;
- (BOOL)writeVideoFrameStreamAttachmentsData:(id)arg1 toMetadataAdaptor:(id)arg2 ofStream:(id)arg3;
- (void)writerStatusChanged:(long long)arg1 writerDelegate:(id)arg2 delegateCallbackQueue:(id)arg3;
- (unsigned long long)writingBufferCapacityForAudioStream:(id)arg1;
- (unsigned long long)writingBufferCapacityForMetadataStream:(id)arg1;
- (unsigned long long)writingBufferCapacityForStream:(id)arg1;
- (unsigned long long)writingBufferUsageForAudioStream:(id)arg1;
- (unsigned long long)writingBufferUsageForMetadataStream:(id)arg1;
- (unsigned long long)writingBufferUsageForStream:(id)arg1;
- (void)writingSessionDidStartAtTime:(CDStruct_1b6d18a9)arg1 streamId:(id)arg2 mediaType:(long long)arg3 writerDelegate:(id)arg4 delegateCallbackQueue:(id)arg5;

@end

