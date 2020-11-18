//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/AVCapturePhotoCaptureDelegate-Protocol.h>

@class AVCapturePhotoSettings, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ICDocCamPhotoCaptureDelegate : NSObject <AVCapturePhotoCaptureDelegate>
{
    AVCapturePhotoSettings *_requestedPhotoSettings;
    NSDictionary *_metaData;
    struct __CVBuffer *_pbRef;
    CDUnknownBlockType _willCapturePhotoAnimation;
    CDUnknownBlockType _completed;
}

@property (copy, nonatomic) CDUnknownBlockType completed; // @synthesize completed=_completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property (nonatomic) struct __CVBuffer *pbRef; // @synthesize pbRef=_pbRef;
@property (strong, nonatomic) AVCapturePhotoSettings *requestedPhotoSettings; // @synthesize requestedPhotoSettings=_requestedPhotoSettings;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType willCapturePhotoAnimation; // @synthesize willCapturePhotoAnimation=_willCapturePhotoAnimation;

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(CDStruct_198678f7)arg3 photoDisplayTime:(CDStruct_198678f7)arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)dealloc;
- (void)didFinish;
- (id)initWithRequestedPhotoSettings:(id)arg1 willCapturePhotoAnimation:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;

@end

