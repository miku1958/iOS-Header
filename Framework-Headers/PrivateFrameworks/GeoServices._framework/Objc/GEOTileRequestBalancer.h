//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing>
{
    void *_requesters;
    void *_randomIndexGenerator;
    unsigned long long _maxRunningOperationsCount;
    unsigned long long _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
+ (unsigned long long)maxRunningOperationsCount;
+ (void)setMaxRunningOperationsCount:(unsigned long long)arg1;
- (void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
- (id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1;
- (__wrap_iter_9a08789a)_next_requester;
- (void)_pruneEmptyRequesters;
- (void)_removeRequester:(id)arg1;
- (void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned long long)arg2;
- (void)_requester:(id)arg1 removeTileKey:(struct _GEOTileKey)arg2;
- (void)_requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(struct _GEOTileKey)arg3;
- (void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)_startOperations;
- (void)_startOperationsWithAvailableCount:(unsigned long long)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)dealloc;
- (id)init;
- (void)removeRequester:(id)arg1;
- (void)requester:(id)arg1 removeTileKey:(const struct _GEOTileKey *)arg2;
- (void)requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (vector_49336e52 *)requesters;

@end

