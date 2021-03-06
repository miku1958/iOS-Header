//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxy-Protocol.h>

@class GEOABAssignmentResponse, NSString;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy>
{
    id<GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s _experimentsInfoLock;
    int _experimentsChangedToken;
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
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)abAssignUUIDWithSyncCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)forceUpdate;
- (id)initWithDelegate:(id)arg1;
- (void)refreshDatasetABStatus:(id)arg1;

@end

