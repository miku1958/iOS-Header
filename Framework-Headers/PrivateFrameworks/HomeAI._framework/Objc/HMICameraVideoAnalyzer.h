//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMFUnfairLock, HMIAnalysisService, HMICameraVideoAnalyzerConfiguration, HMICameraVideoAnalyzerHistory, HMICameraVideoAnalyzerRequest, HMICameraVideoAnalyzerScheduler, HMIHomePersonManager, HMIVideoAnalyzer, NSArray, NSDate, NSMutableArray, NSObject, NSSet, NSString, NSUUID;
@protocol HMICameraVideoAnalyzerDelegate, OS_dispatch_queue;

@interface HMICameraVideoAnalyzer : HMFObject <HMFLogging>
{
    int _flagCounts[7];
    int _outcomeCounts[3];
    BOOL _skipSequentialMediaIntegrityCheck;
    BOOL _analysisInProgress;
    BOOL _inErrorState;
    BOOL _inBypassMode;
    BOOL _sessionEnded;
    BOOL _uploadVideoAnalysisEvent;
    BOOL _saveVideoFramesToDisk;
    BOOL _transcodeFragment;
    id<HMICameraVideoAnalyzerDelegate> _delegate;
    NSUUID *_identifier;
    HMIHomePersonManager *_homePersonManager;
    NSSet *_externalPersonManagers;
    HMFUnfairLock *_lock;
    NSMutableArray *_internalPendingRequests;
    NSDate *_lastRequestSubmissionTime;
    HMICameraVideoAnalyzerHistory *_history;
    HMIVideoAnalyzer *_streamAnalyzer;
    HMICameraVideoAnalyzerRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMICameraVideoAnalyzerScheduler *_scheduler;
    unsigned long long _mediaIntegritySequenceNumber;
    HMICameraVideoAnalyzerConfiguration *_configuration;
    HMIAnalysisService *_remoteAnalysisService;
    CDStruct_1b6d18a9 _currentSessionDuration;
}

@property BOOL analysisInProgress; // @synthesize analysisInProgress=_analysisInProgress;
@property (strong) HMICameraVideoAnalyzerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong) HMICameraVideoAnalyzerRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property CDStruct_1b6d18a9 currentSessionDuration; // @synthesize currentSessionDuration=_currentSessionDuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMICameraVideoAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong) NSSet *externalPersonManagers; // @synthesize externalPersonManagers=_externalPersonManagers;
@property (readonly) unsigned long long hash;
@property (readonly) HMICameraVideoAnalyzerHistory *history; // @synthesize history=_history;
@property (strong) HMIHomePersonManager *homePersonManager; // @synthesize homePersonManager=_homePersonManager;
@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property BOOL inBypassMode; // @synthesize inBypassMode=_inBypassMode;
@property BOOL inErrorState; // @synthesize inErrorState=_inErrorState;
@property (readonly) NSMutableArray *internalPendingRequests; // @synthesize internalPendingRequests=_internalPendingRequests;
@property (readonly) BOOL isActive;
@property (strong) NSDate *lastRequestSubmissionTime; // @synthesize lastRequestSubmissionTime=_lastRequestSubmissionTime;
@property (readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property unsigned long long mediaIntegritySequenceNumber; // @synthesize mediaIntegritySequenceNumber=_mediaIntegritySequenceNumber;
@property (readonly) NSArray *pendingRequests;
@property (strong, nonatomic) HMIAnalysisService *remoteAnalysisService; // @synthesize remoteAnalysisService=_remoteAnalysisService;
@property (getter=shouldSaveVideoFramesToDisk) BOOL saveVideoFramesToDisk; // @synthesize saveVideoFramesToDisk=_saveVideoFramesToDisk;
@property (readonly) HMICameraVideoAnalyzerScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property BOOL sessionEnded; // @synthesize sessionEnded=_sessionEnded;
@property (readonly) BOOL skipSequentialMediaIntegrityCheck; // @synthesize skipSequentialMediaIntegrityCheck=_skipSequentialMediaIntegrityCheck;
@property (readonly) HMIVideoAnalyzer *streamAnalyzer; // @synthesize streamAnalyzer=_streamAnalyzer;
@property (readonly) Class superclass;
@property (readonly) BOOL transcodeFragment; // @synthesize transcodeFragment=_transcodeFragment;
@property (readonly, getter=shouldUploadVideoAnalysisEvent) BOOL uploadVideoAnalysisEvent; // @synthesize uploadVideoAnalysisEvent=_uploadVideoAnalysisEvent;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)classHierarchyMap;
+ (long long)confidenceThatEventOccurred:(long long)arg1 events:(long long)arg2 annotationScores:(id)arg3;
+ (id)logCategory;
+ (id)queryVersionInformation;
- (void).cxx_destruct;
- (id)_analyzeFrame:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)_analyzeRequest:(id)arg1;
- (BOOL)_analyzeRequestFrames:(id)arg1;
- (void)_analyzeRequestFramesLocally:(id)arg1;
- (void)_analyzeRequestLocally:(id)arg1;
- (void)_analyzeRequestRemotely:(id)arg1 retryOnConnectionInterruption:(BOOL)arg2;
- (BOOL)_analyzeVideoFrame:(id)arg1 request:(id)arg2 result:(id *)arg3 error:(id *)arg4;
- (BOOL)_checkRequest:(id)arg1;
- (void)_enterErrorState;
- (void)_finishEncodingSessionForRequest:(id)arg1 withResult:(id)arg2;
- (id)_flagCountsAsString;
- (void)_handleDidAnalyzeRequest:(id)arg1;
- (void)_handleDidAnalyzeRequest:(id)arg1 withResult:(id)arg2;
- (void)_handleDidNotAnalyzeRequest:(id)arg1 resultCode:(long long)arg2;
- (void)_handleDidNotAnalyzeRequest:(id)arg1 resultCode:(long long)arg2 error:(id)arg3;
- (void)_handleDidNotAnalyzeRequest:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)_handleError:(long long)arg1 request:(id)arg2;
- (void)_handleError:(long long)arg1 request:(id)arg2 description:(id)arg3;
- (void)_handleError:(long long)arg1 request:(id)arg2 description:(id)arg3 underlyingError:(id)arg4;
- (void)_handleError:(long long)arg1 request:(id)arg2 underlyingError:(id)arg3;
- (void)_markPendingRequestsWithFlag:(long long)arg1;
- (void)_notifyDidAnalyzeRequest:(id)arg1 withResult:(id)arg2;
- (void)_notifyDidFailAnalysisForRequest:(id)arg1 withError:(id)arg2;
- (void)_notifyDidNotAnalyzeRequest:(id)arg1 withResult:(id)arg2;
- (id)_outcomeCountsAsString;
- (void)_predictRequest:(id)arg1;
- (void)_requestDidEnd:(id)arg1 outcome:(long long)arg2;
- (void)_scheduleRequest:(id)arg1;
- (void)_sendAnalyticsEventForRequest:(id)arg1 outcome:(long long)arg2 result:(id)arg3 error:(id)arg4;
- (BOOL)_shouldContinueAnalyzingRequest:(id)arg1 resultCode:(long long *)arg2;
- (void)_willAnalyzeRequest:(id)arg1;
- (void)analyzeFragment:(id)arg1;
- (void)clearPendingFragments;
- (id)filterDetectedObjects:(id)arg1 request:(id)arg2 result:(id)arg3;
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2;
- (id)logIdentifier;
- (unsigned long long)pendingRequestsCount;
- (void)processPendingRequests;
- (void)saveActivityZoneresultsInJSON:(id)arg1 result:(id)arg2 videoFrame:(id)arg3 motionDetection:(id)arg4;

@end

