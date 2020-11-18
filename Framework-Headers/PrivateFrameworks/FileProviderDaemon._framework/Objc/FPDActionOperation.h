//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class FPActionOperationInfo, FPDExtensionManager, FPDRequest, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress;

@interface FPDActionOperation : FPOperation
{
    BOOL _hasFinishedPreflight;
    NSProgress *_progress;
    FPDExtensionManager *_manager;
    FPDRequest *_request;
    FPActionOperationInfo *_info;
    NSMutableArray *_clients;
    NSMutableArray *_clientCompletions;
    NSMutableDictionary *_progressByRoot;
    NSMutableDictionary *_errorsByRoot;
    NSMutableSet *_completedRoots;
    NSMutableDictionary *_createdItemByRoot;
    NSMutableDictionary *_progressCompletionsByRoot;
    NSError *_error;
    unsigned long long _logSection;
}

@property (strong, nonatomic) NSMutableArray *clientCompletions; // @synthesize clientCompletions=_clientCompletions;
@property (strong, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property (strong, nonatomic) NSMutableSet *completedRoots; // @synthesize completedRoots=_completedRoots;
@property (strong, nonatomic) NSMutableDictionary *createdItemByRoot; // @synthesize createdItemByRoot=_createdItemByRoot;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSMutableDictionary *errorsByRoot; // @synthesize errorsByRoot=_errorsByRoot;
@property (nonatomic) BOOL hasFinishedPreflight; // @synthesize hasFinishedPreflight=_hasFinishedPreflight;
@property (readonly, nonatomic) FPActionOperationInfo *info; // @synthesize info=_info;
@property (nonatomic) unsigned long long logSection; // @synthesize logSection=_logSection;
@property (readonly, weak, nonatomic) FPDExtensionManager *manager; // @synthesize manager=_manager;
@property (readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic) NSMutableDictionary *progressByRoot; // @synthesize progressByRoot=_progressByRoot;
@property (strong, nonatomic) NSMutableDictionary *progressCompletionsByRoot; // @synthesize progressCompletionsByRoot=_progressCompletionsByRoot;
@property (readonly, nonatomic) FPDRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)forAllClients:(CDUnknownBlockType)arg1;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (id)progressForRoot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerFrameworkClient:(id)arg1 operationCompletion:(CDUnknownBlockType)arg2;
- (void)sendPastUpdatesToClient:(id)arg1;
- (void)unregisterClientsAfterCompletion;

@end
