//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMBurstSession, CAMPersistenceController, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, NSCountedSet, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CAMBurstController : NSObject
{
    NSObject<OS_dispatch_queue> *__mutexQueue;
    NSMutableDictionary *__sessionsByIdentifier;
    NSCountedSet *__inflightRequestsByIdentifier;
    NSCountedSet *__requestsPendingPersistenceByIdentifier;
    NSMutableDictionary *__faceResultsByIdentifier;
    CAMBurstSession *__activeSession;
    NSObject<OS_dispatch_queue> *__analysisQueue;
    CAMPersistenceController *__persistenceController;
    CAMProtectionController *__protectionController;
    CAMPowerController *__powerController;
    CAMRemoteShutterController *__remoteShutterController;
}

@property (strong, nonatomic, setter=_setActiveSession:) CAMBurstSession *_activeSession; // @synthesize _activeSession=__activeSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_analysisQueue; // @synthesize _analysisQueue=__analysisQueue;
@property (readonly, nonatomic) NSMutableDictionary *_faceResultsByIdentifier; // @synthesize _faceResultsByIdentifier=__faceResultsByIdentifier;
@property (readonly, nonatomic) NSCountedSet *_inflightRequestsByIdentifier; // @synthesize _inflightRequestsByIdentifier=__inflightRequestsByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // @synthesize _mutexQueue=__mutexQueue;
@property (readonly, weak, nonatomic) CAMPersistenceController *_persistenceController; // @synthesize _persistenceController=__persistenceController;
@property (readonly, nonatomic) CAMPowerController *_powerController; // @synthesize _powerController=__powerController;
@property (readonly, nonatomic) CAMProtectionController *_protectionController; // @synthesize _protectionController=__protectionController;
@property (readonly, nonatomic) CAMRemoteShutterController *_remoteShutterController; // @synthesize _remoteShutterController=__remoteShutterController;
@property (readonly, nonatomic) NSCountedSet *_requestsPendingPersistenceByIdentifier; // @synthesize _requestsPendingPersistenceByIdentifier=__requestsPendingPersistenceByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_sessionsByIdentifier; // @synthesize _sessionsByIdentifier=__sessionsByIdentifier;
@property (readonly, nonatomic) unsigned long long currentBurstCount;
@property (readonly, copy, nonatomic) NSString *currentBurstIdentifier;

- (void).cxx_destruct;
- (void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg1 device:(long long)arg2;
- (void)cancelBurstCapture;
- (unsigned long long)estimatedCountForIdentifier:(id)arg1;
- (void)finishBurstCaptureForDevice:(long long)arg1;
- (unsigned long long)inflightCountForIdentifier:(id)arg1;
- (id)init;
- (id)initWithProtectionController:(id)arg1 powerController:(id)arg2 remoteShutterController:(id)arg3;
- (void)processCapturedRequest:(id)arg1 withResult:(id)arg2;
- (void)processEnqueuedRequest:(id)arg1;
- (void)processFaceResults:(id)arg1;
- (void)processPersistedRequest:(id)arg1 withResult:(id)arg2;
- (void)setPersistenceController:(id)arg1;
- (id)startBurstCapture;

@end

