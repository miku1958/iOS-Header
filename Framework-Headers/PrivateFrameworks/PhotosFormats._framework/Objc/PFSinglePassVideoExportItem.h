//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVAssetWriter, AVAssetWriterInput, NSArray, NSFileHandle, NSProgress, NSString, NSURL, PFProportionalIntegralController, PFSinglePassVideoExportItemStatistics, PFVideoExportRangeCoordinator;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface PFSinglePassVideoExportItem : NSObject
{
    BOOL _shouldDeleteDestinationURLOnDeallocation;
    BOOL _needsCurrentEncodingBitRateUpdate;
    NSString *_identifier;
    unsigned long long _targetOutputFileSize;
    NSProgress *_progress;
    NSArray *_additionalMetadata;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_stateQueue;
    AVAsset *_inputAsset;
    AVAssetTrack *_videoTrack;
    NSArray *_additionalTracks;
    NSFileHandle *_conversionOutputFileHandle;
    NSURL *_destinationFileURL;
    unsigned long long _outputFileLastEndOffset;
    long long _targetOutputMediaDataSize;
    PFSinglePassVideoExportItemStatistics *_statistics;
    PFProportionalIntegralController *_bitRateController;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_videoReaderTrackOutput;
    NSArray *_additionalReaderTrackOutputs;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    NSArray *_additionalWriterInputs;
    NSObject<OS_dispatch_source> *_outputFileSizeChangeSource;
    unsigned long long _minimumChunkLength;
    NSObject<OS_dispatch_group> *_inputReadingCompletionGroup;
    PFVideoExportRangeCoordinator *_availableRangeCoordinator;
    struct OpaqueVTCompressionSession *_compressionSession;
    long long _currentEncodingBitRate;
}

@property (copy, nonatomic) NSArray *additionalMetadata; // @synthesize additionalMetadata=_additionalMetadata;
@property (strong) NSArray *additionalReaderTrackOutputs; // @synthesize additionalReaderTrackOutputs=_additionalReaderTrackOutputs;
@property (strong) NSArray *additionalTracks; // @synthesize additionalTracks=_additionalTracks;
@property (strong) NSArray *additionalWriterInputs; // @synthesize additionalWriterInputs=_additionalWriterInputs;
@property (strong) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property (strong) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property (strong) PFVideoExportRangeCoordinator *availableRangeCoordinator; // @synthesize availableRangeCoordinator=_availableRangeCoordinator;
@property (strong) PFProportionalIntegralController *bitRateController; // @synthesize bitRateController=_bitRateController;
@property struct OpaqueVTCompressionSession *compressionSession; // @synthesize compressionSession=_compressionSession;
@property (strong) NSFileHandle *conversionOutputFileHandle; // @synthesize conversionOutputFileHandle=_conversionOutputFileHandle;
@property long long currentEncodingBitRate; // @synthesize currentEncodingBitRate=_currentEncodingBitRate;
@property (strong) NSURL *destinationFileURL; // @synthesize destinationFileURL=_destinationFileURL;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong) AVAsset *inputAsset; // @synthesize inputAsset=_inputAsset;
@property (strong) NSObject<OS_dispatch_group> *inputReadingCompletionGroup; // @synthesize inputReadingCompletionGroup=_inputReadingCompletionGroup;
@property unsigned long long minimumChunkLength; // @synthesize minimumChunkLength=_minimumChunkLength;
@property BOOL needsCurrentEncodingBitRateUpdate; // @synthesize needsCurrentEncodingBitRateUpdate=_needsCurrentEncodingBitRateUpdate;
@property unsigned long long outputFileLastEndOffset; // @synthesize outputFileLastEndOffset=_outputFileLastEndOffset;
@property (strong) NSObject<OS_dispatch_source> *outputFileSizeChangeSource; // @synthesize outputFileSizeChangeSource=_outputFileSizeChangeSource;
@property (strong) NSProgress *progress; // @synthesize progress=_progress;
@property BOOL shouldDeleteDestinationURLOnDeallocation; // @synthesize shouldDeleteDestinationURLOnDeallocation=_shouldDeleteDestinationURLOnDeallocation;
@property unsigned long long state; // @synthesize state=_state;
@property (strong) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property (strong) PFSinglePassVideoExportItemStatistics *statistics; // @synthesize statistics=_statistics;
@property (nonatomic) unsigned long long targetOutputFileSize; // @synthesize targetOutputFileSize=_targetOutputFileSize;
@property long long targetOutputMediaDataSize; // @synthesize targetOutputMediaDataSize=_targetOutputMediaDataSize;
@property (strong) AVAssetReaderTrackOutput *videoReaderTrackOutput; // @synthesize videoReaderTrackOutput=_videoReaderTrackOutput;
@property (strong) AVAssetTrack *videoTrack; // @synthesize videoTrack=_videoTrack;
@property (strong) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;

- (void).cxx_destruct;
- (void)_cancel;
- (id)bitRateControllerForTargetEncodingBitRate:(long long)arg1;
- (void)dealloc;
- (long long)estimatedOutputBitRate;
- (id)init;
- (void)notifyDataAvailableToHandler:(CDUnknownBlockType)arg1 ignoreMinimumChunkLength:(BOOL)arg2;
- (id)outputDataInRange:(struct _NSRange)arg1 waitUntilAvailableWithTimeout:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)preflight;
- (void)processCompressedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (BOOL)setupConversionWithError:(id *)arg1;
- (void)setupOutputFileSourceWithOutputAvailableHandler:(CDUnknownBlockType)arg1;
- (BOOL)startConversionWithError:(id *)arg1 outputAvailableHandler:(CDUnknownBlockType)arg2;
- (void)startReadingInputAssetWithOutputAvailableHandler:(CDUnknownBlockType)arg1;

@end
