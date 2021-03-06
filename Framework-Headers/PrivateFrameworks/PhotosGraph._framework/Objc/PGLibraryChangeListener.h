//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGLibraryChangeProducer-Protocol.h>
#import <PhotosGraph/PHPhotoLibraryAvailabilityObserver-Protocol.h>
#import <PhotosGraph/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSCountedSet, NSHashTable, NSMapTable, NSMutableOrderedSet, NSString, PGLibraryChangeListenerStateStore, PHPersistentChangeToken, PHPhotoLibrary;
@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;

@interface PGLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver, PHPhotoLibraryAvailabilityObserver, PGLibraryChangeProducer>
{
    NSObject<OS_dispatch_queue> *_changeObservationQueue;
    BOOL _libraryBecameUnavailable;
    NSString *_clientIdentifier;
    PHPhotoLibrary *_photoLibrary;
    PGLibraryChangeListenerStateStore *_stateStore;
    NSHashTable *_changeConsumers;
    NSMutableOrderedSet *_outstandingChangeTokens;
    NSMapTable *_outstandingChangeTokensByConsumer;
    NSCountedSet *_outstandingChangeTokenCounts;
    unsigned long long _outstandingTokensHighWaterMark;
    unsigned long long _outstandingTokensLowWaterMark;
    unsigned long long _maximumNumberOfMutationsToFetch;
    unsigned long long _mode;
    PHPersistentChangeToken *_lastReadToken;
    id<PGGraphUpdateHealthRecording> _updateHealthRecorder;
}

@property (readonly, nonatomic) NSHashTable *changeConsumers; // @synthesize changeConsumers=_changeConsumers;
@property (readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (readonly, nonatomic) PHPersistentChangeToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PHPersistentChangeToken *lastReadToken; // @synthesize lastReadToken=_lastReadToken;
@property BOOL libraryBecameUnavailable; // @synthesize libraryBecameUnavailable=_libraryBecameUnavailable;
@property (readonly, nonatomic) unsigned long long maximumNumberOfMutationsToFetch; // @synthesize maximumNumberOfMutationsToFetch=_maximumNumberOfMutationsToFetch;
@property unsigned long long mode; // @synthesize mode=_mode;
@property (readonly, nonatomic) NSCountedSet *outstandingChangeTokenCounts; // @synthesize outstandingChangeTokenCounts=_outstandingChangeTokenCounts;
@property (readonly, nonatomic) NSMutableOrderedSet *outstandingChangeTokens; // @synthesize outstandingChangeTokens=_outstandingChangeTokens;
@property (readonly, nonatomic) NSMapTable *outstandingChangeTokensByConsumer; // @synthesize outstandingChangeTokensByConsumer=_outstandingChangeTokensByConsumer;
@property (readonly, nonatomic) unsigned long long outstandingTokensHighWaterMark; // @synthesize outstandingTokensHighWaterMark=_outstandingTokensHighWaterMark;
@property (readonly, nonatomic) unsigned long long outstandingTokensLowWaterMark; // @synthesize outstandingTokensLowWaterMark=_outstandingTokensLowWaterMark;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (readonly, nonatomic) PGLibraryChangeListenerStateStore *stateStore; // @synthesize stateStore=_stateStore;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PGGraphUpdateHealthRecording> updateHealthRecorder; // @synthesize updateHealthRecorder=_updateHealthRecorder;

- (void).cxx_destruct;
- (void)_clearConsumerTokenState;
- (id)_consumer:(id)arg1 withChangeTokens:(id)arg2 processedChangeTokens:(id)arg3 consumedTokens:(BOOL)arg4;
- (BOOL)_distributeChangesInFetchResult:(id)arg1;
- (void)_notifyConsumersWithChangesFromFromChangeToken:(id)arg1;
- (void)consumer:(id)arg1 didConsumeChangeTokens:(id)arg2;
- (void)consumer:(id)arg1 didIgnoreChangeTokens:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 clientIdentifier:(id)arg2;
- (void)persistToken:(id)arg1;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeConsumer:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (void)unregisterChangeConsumer:(id)arg1;

@end

