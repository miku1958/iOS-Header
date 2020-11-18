//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxy-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOABAssignmentRequest, GEOABAssignmentResponse, NSLock, NSString;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentServerProxy>
{
    id<GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    GEOABAssignmentRequest *_currentRequest;
    NSLock *_currentRequestLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_deleteExperimentInfoFromDisk;
- (void)_executeRefreshWithinTime:(double)arg1;
- (void)_invalidateTileCache:(BOOL)arg1 placesCache:(BOOL)arg2;
- (void)_loadExperimentsConfiguration:(CDUnknownBlockType)arg1;
- (BOOL)_removeOldExperimentsInfoIfNecessary;
- (void)_setupRefreshActivity;
- (void)_updateIfNecessary;
- (void)_writeExperimentInfoToDisk:(id)arg1;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)forceUpdate;
- (id)initWithDelegate:(id)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;

@end

