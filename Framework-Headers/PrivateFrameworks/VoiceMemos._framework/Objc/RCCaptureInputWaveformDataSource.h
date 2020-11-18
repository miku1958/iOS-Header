//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCWaveformDataSource.h>

#import <VoiceMemos/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>

@class NSArray, NSString, RCComposition, RCCompositionFragment, RCMutableComposition, RCMutableCompositionFragment, RCWaveform;

@interface RCCaptureInputWaveformDataSource : RCWaveformDataSource <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    BOOL _overdub;
    BOOL _canUpdateCaptureComposition;
    RCMutableComposition *_capturedComposition;
    RCMutableCompositionFragment *_capturedFragment;
    RCComposition *_destinationComposition;
    RCCompositionFragment *_destinationFragment;
    RCWaveform *_baseWaveform;
    double _updatedCapturedFragmentDuration;
    double _finalCapturedFragmentDuration;
    double _captureInsertionTimeInComposition;
    double _captureInsertionDurationInComposition;
    NSArray *_captureInitialDecomposedFragments;
}

@property (readonly, nonatomic) RCWaveform *baseWaveform; // @synthesize baseWaveform=_baseWaveform;
@property (readonly, nonatomic) BOOL canUpdateCaptureComposition; // @synthesize canUpdateCaptureComposition=_canUpdateCaptureComposition;
@property (readonly, nonatomic) NSArray *captureInitialDecomposedFragments; // @synthesize captureInitialDecomposedFragments=_captureInitialDecomposedFragments;
@property (readonly, nonatomic) double captureInsertionDurationInComposition; // @synthesize captureInsertionDurationInComposition=_captureInsertionDurationInComposition;
@property (readonly, nonatomic) double captureInsertionTimeInComposition; // @synthesize captureInsertionTimeInComposition=_captureInsertionTimeInComposition;
@property (readonly, nonatomic) RCMutableComposition *capturedComposition; // @synthesize capturedComposition=_capturedComposition;
@property (readonly, nonatomic) RCMutableCompositionFragment *capturedFragment; // @synthesize capturedFragment=_capturedFragment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCComposition *destinationComposition; // @synthesize destinationComposition=_destinationComposition;
@property (readonly, nonatomic) RCCompositionFragment *destinationFragment; // @synthesize destinationFragment=_destinationFragment;
@property (readonly, nonatomic) double finalCapturedFragmentDuration; // @synthesize finalCapturedFragmentDuration=_finalCapturedFragmentDuration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isOverdub) BOOL overdub; // @synthesize overdub=_overdub;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double updatedCapturedFragmentDuration; // @synthesize updatedCapturedFragmentDuration=_updatedCapturedFragmentDuration;

- (void).cxx_destruct;
- (id)_captureSegmentsInComponentWaveform:(id)arg1 captureTimeRange:(CDStruct_73a5d3ca)arg2 componentWaveformSegmentOffset:(double)arg3;
- (void)_captureSesionCompletedWithFinalizedDuration:(double)arg1;
- (void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (double)_fragmentDuration;
- (void)_initializeCaptureComposition;
- (void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (void)_truncateAccumulatedWaveformSegmentsToEndTime:(double)arg1;
- (void)_updateCapturedComposition:(BOOL)arg1;
- (BOOL)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)arg1;
- (double)duration;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 finalizedFragmentDuration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)flushPendingCapturedSampleBuffers;
- (id)initWithDestinationComposition:(id)arg1 destinationFragment:(id)arg2 isOverdub:(BOOL)arg3;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (BOOL)setPaused:(BOOL)arg1;
- (void)startLoading;
- (CDStruct_73a5d3ca)timeRangeToHighlight;
- (void)undoCapture;
- (BOOL)waitUntilFinished;
- (BOOL)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(double)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (id)waveformSegmentsInTimeRange:(CDStruct_73a5d3ca)arg1;

@end
