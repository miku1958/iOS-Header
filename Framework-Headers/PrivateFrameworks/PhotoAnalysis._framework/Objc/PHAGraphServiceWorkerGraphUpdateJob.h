//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>

@class NSDate, NSObject, NSString, PHAGraphManager;
@protocol OS_os_transaction;

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob <PHAGraphRegistration>
{
    BOOL _finished;
    BOOL _isChangeProcessingJob;
    float _completionScore;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completionBlock;
    NSString *_label;
    NSDate *_creationDate;
    NSObject<OS_os_transaction> *_transaction;
    PHAGraphManager *_graphManager;
}

@property (copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (nonatomic) float completionScore; // @synthesize completionScore=_completionScore;
@property (strong) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finished; // @synthesize finished=_finished;
@property (strong, nonatomic) PHAGraphManager *graphManager; // @synthesize graphManager=_graphManager;
@property (readonly) unsigned long long hash;
@property BOOL isChangeProcessingJob; // @synthesize isChangeProcessingJob=_isChangeProcessingJob;
@property (copy) NSString *label; // @synthesize label=_label;
@property (readonly) Class superclass;
@property (strong) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property (copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4;
- (void)markAsFinishedWithCompletionScore:(float)arg1;
- (void)onGraphUpdateComplete;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (void)updateCompletionScore:(float)arg1;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;

@end

