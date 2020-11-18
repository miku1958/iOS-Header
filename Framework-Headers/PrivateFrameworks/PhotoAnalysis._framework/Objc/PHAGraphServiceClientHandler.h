//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>
#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>

@class NSString, PFDispatchQueue, PGManager, PHAServiceClientHandler;

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling>
{
    PHAServiceClientHandler *_serviceClientHandler;
    PGManager *_pgGraphManager;
    PFDispatchQueue *_requestQueue;
    unsigned long long _requestCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginGraphOperation;
- (void)_endGraphOperation;
- (id)currentlyUnavailableError;
- (id)fetchOptionsWithCurrentPhotoLibraryFromFetchOptions:(id)arg1;
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)handleOperation:(id)arg1;
- (id)initWithServiceClientHandler:(id)arg1;
- (id)libraryTemporarilyUnavailableError;
- (void)operationDidFinish:(id)arg1;
- (void)operationWillStart:(id)arg1;
- (id)phaGraphManager;
- (void)photoAnalysisGraphManager:(id)arg1 willShutdownGraph:(id)arg2;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSearchInformationForTripUUIDs:(id)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;

@end

