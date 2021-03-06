//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonTimelapseProtocol-Protocol.h>
#import <CameraUI/CAMPersistenceResultDelegate-Protocol.h>
#import <CameraUI/CAMVideoCaptureRequestDelegate-Protocol.h>

@class BKSApplicationStateMonitor, CAMNebulaKeepAliveController, CAMPersistenceController, CAMTimelapseState, NSMutableArray, NSMutableDictionary, NSString;
@protocol CAMTimelapseMovieWriterProtocol, OS_dispatch_queue;

@interface CAMTimelapseBackendController : NSObject <CAMVideoCaptureRequestDelegate, CAMNebulaDaemonTimelapseProtocol, CAMPersistenceResultDelegate>
{
    BOOL __writingMovie;
    BOOL __capturing;
    BOOL __oldMovieWriterEnabled;
    int __notifyRegisterTokenSuspendIO;
    int __notifyRegisterTokenResumeIO;
    NSMutableArray *__sessionContexts;
    NSObject<OS_dispatch_queue> *__workQueue;
    id<CAMTimelapseMovieWriterProtocol> __movieWriter;
    CAMTimelapseState *__currentState;
    CAMNebulaKeepAliveController *__keepAliveController;
    CAMPersistenceController *__persistenceController;
    NSMutableDictionary *__transactionForPersistenceUUID;
    BKSApplicationStateMonitor *__applicationStateMonitor;
}

@property (readonly, nonatomic) BKSApplicationStateMonitor *_applicationStateMonitor; // @synthesize _applicationStateMonitor=__applicationStateMonitor;
@property (nonatomic, getter=_isCapturing, setter=_setCapturing:) BOOL _capturing; // @synthesize _capturing=__capturing;
@property (strong, nonatomic, setter=_setCurrentState:) CAMTimelapseState *_currentState; // @synthesize _currentState=__currentState;
@property (readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController; // @synthesize _keepAliveController=__keepAliveController;
@property (readonly, nonatomic) id<CAMTimelapseMovieWriterProtocol> _movieWriter; // @synthesize _movieWriter=__movieWriter;
@property (readonly, nonatomic) int _notifyRegisterTokenResumeIO; // @synthesize _notifyRegisterTokenResumeIO=__notifyRegisterTokenResumeIO;
@property (readonly, nonatomic) int _notifyRegisterTokenSuspendIO; // @synthesize _notifyRegisterTokenSuspendIO=__notifyRegisterTokenSuspendIO;
@property (readonly, nonatomic) BOOL _oldMovieWriterEnabled; // @synthesize _oldMovieWriterEnabled=__oldMovieWriterEnabled;
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController; // @synthesize _persistenceController=__persistenceController;
@property (readonly, nonatomic) NSMutableArray *_sessionContexts; // @synthesize _sessionContexts=__sessionContexts;
@property (readonly, nonatomic) NSMutableDictionary *_transactionForPersistenceUUID; // @synthesize _transactionForPersistenceUUID=__transactionForPersistenceUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_workQueue; // @synthesize _workQueue=__workQueue;
@property (readonly, nonatomic) BOOL _writingMovie; // @synthesize _writingMovie=__writingMovie;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (BOOL)_deleteItemAtPath:(id)arg1;
- (void)_dispatchToMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_dispatchToWorkQueueWithBlock:(CDUnknownBlockType)arg1;
- (struct CGAffineTransform)_frameTransformForState:(id)arg1;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (BOOL)_isCameraRunning;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 state:(id)arg4;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 state:(id)arg4;
- (void)_performPendingWork;
- (void)_permanentlyFailTimelapseUUID:(id)arg1 withState:(id)arg2;
- (int)_pidForApplication:(id)arg1;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2 useHEVC:(BOOL)arg3;
- (void)_saveTimelapseDirectoryForDebuggingTimelapseUUID:(id)arg1;
- (BOOL)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (BOOL)_shouldSaveLastTimelapseDataForDebugging;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (void)_workQueue_destroyApplicationStateMonitor;
- (void)_workQueue_setupCameraProcessMonitoringIfNecessary;
- (void)_writeMovieForSessionContext:(id)arg1;
- (void)dealloc;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)handleClientConnection:(id)arg1;
- (void)handleClientDisconnection;
- (id)init;
- (id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

