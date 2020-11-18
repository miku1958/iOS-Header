//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureSessionConfiguration, AVRunLoopCondition, AVWeakReference, FigCaptureSessionConfiguration, NSError, NSHashTable, NSMutableArray, NSString;

@interface AVCaptureSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    AVCaptureDevice *adjustingDeviceActiveFormat;
    int beginConfigRefCount;
    FigCaptureSessionConfiguration *sessionConfig;
    struct OpaqueFigCaptureSession *figCaptureSession;
    BOOL figCaptureSessionRunning;
    BOOL figCaptureSessionStarted;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSHashTable *videoPreviewLayers;
    NSMutableArray *connections;
    NSMutableArray *committedAVCaptureSessionConfigurations;
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;
    NSError *stopError;
    BOOL running;
    BOOL interrupted;
    BOOL usesApplicationAudioSession;
    BOOL automaticallyConfiguresApplicationAudioSession;
    AVRunLoopCondition *runLoopCondition;
    BOOL waitingForFigCaptureSessionToStart;
    BOOL waitingForFigCaptureSessionToStop;
    BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
    BOOL waitingForFigCaptureSessionToStopDueToEmptyConfig;
    struct OpaqueCMClock *masterClock;
    BOOL notifiesOnMainThread;
    BOOL adjustingVideoDeviceHDREnabled;
    BOOL resetVideoZoomFactorAndMinMaxFrameDurations;
    BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
}

@end
