//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGLibraryChangeConsumer-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, PGGraphUpdateJetsamIndicator, PGGraphUpdateManagerTargetTokenState, PGLibraryChangeListener, PGManager, PGPhotoChangeToGraphChangeConverter;
@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;

@interface PGGraphUpdateManager : NSObject <PGLibraryChangeConsumer>
{
    unsigned char _processingState;
    BOOL _stopRequested;
    BOOL _listening;
    NSMutableSet *_listeners;
    PGLibraryChangeListener *_libraryChangeListener;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    PGPhotoChangeToGraphChangeConverter *_changeConverter;
    PGManager *_manager;
    NSMutableArray *_pendingChanges;
    PGGraphUpdateJetsamIndicator *_jetsamIndicator;
    PGGraphUpdateManagerTargetTokenState *_targetTokenState;
    long long _executionContext;
    id<PGGraphUpdateHealthRecording> _updateHealthRecorder;
}

@property (strong, nonatomic) PGPhotoChangeToGraphChangeConverter *changeConverter; // @synthesize changeConverter=_changeConverter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long executionContext; // @synthesize executionContext=_executionContext;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isConsistencyUpdate;
@property (readonly, nonatomic) PGGraphUpdateJetsamIndicator *jetsamIndicator; // @synthesize jetsamIndicator=_jetsamIndicator;
@property (strong, nonatomic) PGLibraryChangeListener *libraryChangeListener; // @synthesize libraryChangeListener=_libraryChangeListener;
@property (readonly, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property (nonatomic, getter=isListening) BOOL listening; // @synthesize listening=_listening;
@property (readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
@property (strong, nonatomic) NSMutableArray *pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property (nonatomic) unsigned char processingState; // @synthesize processingState=_processingState;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property (nonatomic) BOOL stopRequested; // @synthesize stopRequested=_stopRequested;
@property (readonly) Class superclass;
@property (strong, nonatomic) PGGraphUpdateManagerTargetTokenState *targetTokenState; // @synthesize targetTokenState=_targetTokenState;
@property (readonly, nonatomic) id<PGGraphUpdateHealthRecording> updateHealthRecorder; // @synthesize updateHealthRecorder=_updateHealthRecorder;

- (void).cxx_destruct;
- (id)_graphUpdateForPhotoChanges:(id)arg1;
- (void)_notifyListeners:(id)arg1 notificationType:(unsigned char)arg2;
- (void)_notifyProgress:(double)arg1;
- (void)_onEncounteredTargetToken;
- (void)_onFinishedProcessingChangesWithTokens:(id)arg1;
- (void)_onStopRequestedWasListening:(BOOL)arg1;
- (BOOL)_pauseListening;
- (BOOL)_performEnrichmentWithGraphUpdateInventory:(id)arg1 enrichmentContext:(long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)_performRebuildWithGraphIngestRecipe:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_processPendingChanges;
- (void)_processRebuild;
- (void)_recordInformationFromDatabaseChange:(id)arg1;
- (void)_recordInformationFromGraphChanges:(id)arg1;
- (void)_signalGraphIsConsistentWithTokens:(id)arg1;
- (void)_startListening;
- (id)_tokensForChanges:(id)arg1;
- (void)_triggerFullRebuildDuringLiveUpdate:(BOOL)arg1 graphIngestRecipe:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 keepExistingGraph:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_triggerUpdateForGraphUpdate:(id)arg1;
- (void)addListener:(id)arg1;
- (void)incrementalChangeNotAvailable;
- (id)initWithGraphManager:(id)arg1;
- (void)libraryChangesAvailable:(id)arg1;
- (void)performFullRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performLightWeightRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeListener:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end

