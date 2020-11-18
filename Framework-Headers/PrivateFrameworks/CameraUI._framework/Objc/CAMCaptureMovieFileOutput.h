//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureMovieFileOutput.h>

#import <CameraUI/AVCaptureFileOutputRecordingDelegate-Protocol.h>

@class CAMCaptureEngine, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol AVCaptureFileOutputRecordingDelegate, OS_dispatch_queue;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate>
{
    CAMCaptureEngine *__captureEngine;
    NSObject<OS_dispatch_queue> *__userInfoQueue;
    NSMutableDictionary *__userInfoBySettingsID;
    NSMutableArray *__removeOnCompletionSettingsIDs;
    NSDictionary *_currentUserInfo;
    NSDictionary *_userInfoForNextCapture;
    id<AVCaptureFileOutputRecordingDelegate> _wrappedDelegate;
}

@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
@property (readonly, nonatomic) NSMutableArray *_removeOnCompletionSettingsIDs; // @synthesize _removeOnCompletionSettingsIDs=__removeOnCompletionSettingsIDs;
@property (readonly, nonatomic) NSMutableDictionary *_userInfoBySettingsID; // @synthesize _userInfoBySettingsID=__userInfoBySettingsID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_userInfoQueue; // @synthesize _userInfoQueue=__userInfoQueue;
@property (copy, nonatomic) NSDictionary *currentUserInfo; // @synthesize currentUserInfo=_currentUserInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *userInfoForNextCapture; // @synthesize userInfoForNextCapture=_userInfoForNextCapture;
@property (weak, nonatomic) id<AVCaptureFileOutputRecordingDelegate> wrappedDelegate; // @synthesize wrappedDelegate=_wrappedDelegate;

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)initWithEngine:(id)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;

@end

