//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMMotionController;
@protocol CAMRemoteShutterDelegate;

@interface CAMRemoteShutterController : NSObject
{
    BOOL _showingPreview;
    BOOL _capturingVideo;
    BOOL _capturingTimelapse;
    long long _captureMode;
    long long _captureDevice;
    long long _flashMode;
    double _zoomAmount;
    id<CAMRemoteShutterDelegate> _delegate;
    CAMMotionController *__motionController;
}

@property (readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property (nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property (nonatomic) long long captureMode; // @synthesize captureMode=_captureMode;
@property (nonatomic, getter=isCapturingTimelapse) BOOL capturingTimelapse; // @synthesize capturingTimelapse=_capturingTimelapse;
@property (nonatomic, getter=isCapturingVideo) BOOL capturingVideo; // @synthesize capturingVideo=_capturingVideo;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (weak, nonatomic) id<CAMRemoteShutterDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property (nonatomic, getter=isShowingPreview) BOOL showingPreview; // @synthesize showingPreview=_showingPreview;
@property (nonatomic) double zoomAmount; // @synthesize zoomAmount=_zoomAmount;

- (void).cxx_destruct;
- (void)_captureOrientationDidChange:(id)arg1;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)_sendMode;
- (void)applyCaptureConfiguration:(id)arg1;
- (void)closeConnection;
- (void)countdownCanceled;
- (void)dealloc;
- (id)initWithCaptureConfiguration:(id)arg1 motionController:(id)arg2;
- (void)openConnection;
- (void)sendThumbnailData:(id)arg1;
- (void)sendThumbnailImage:(id)arg1;

@end

