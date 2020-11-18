//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEOTileKeyMap, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLSessionDataDelegate>
{
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    GEOTileKeyMap *_keysToBaseOps;
    BOOL _cancelled;
    BOOL _subclassImplementsTileEdition;
    NSMutableArray *_errors;
    NSOperationQueue *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)eTagType;
- (void)_cancel;
- (void)_cancelKey:(struct _GEOTileKey)arg1;
- (void)_cleanup;
- (id)_delegateGCDQueue;
- (void)_doWorkOrFinish;
- (id)_nextPendingOperation;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_operationFinished:(id)arg1;
- (void)_releaseEverything;
- (void)_reprioritizeKey:(struct _GEOTileKey)arg1 newPriority:(unsigned int)arg2;
- (void)_startNextPendingOperation:(id)arg1;
- (BOOL)_verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;
- (BOOL)allowsCookies;
- (void)cancel;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg1;
- (void)dealloc;
- (id)editionHeader;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6;
- (BOOL)isRunning;
- (id)localizationURLForTileKey:(struct _GEOTileKey *)arg1;
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)start;
- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(struct _GEOTileKey *)arg1;

@end
