//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput
{
    AVCaptureMovieFileOutputInternal *_internal;
}

@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;

+ (BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (id)new;
+ (long long)nextMovieFileSettingsID;
+ (BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3;
- (BOOL)_recordingInProgress;
- (void)_removeRecordingDelegateWrapper:(id)arg1;
- (void)_startRecording:(id)arg1;
- (int)_stopRecording;
- (void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)bravoCameraSelectionBehaviorForRecording;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (BOOL)isRecording;
- (BOOL)isRecordingPaused;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)outputFileURL;
- (id)outputSettingsForConnection:(id)arg1;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (void)pauseRecording;
- (BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)resumeRecording;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (BOOL)sendsLastVideoPreviewFrame;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)arg1;
- (void)setOutputSettings:(id)arg1 forConnection:(id)arg2;
- (void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)arg1 asMetadataTrackForConnection:(id)arg2;
- (void)setSendsLastVideoPreviewFrame:(BOOL)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (id)supportedOutputSettingsKeysForConnection:(id)arg1;

@end

