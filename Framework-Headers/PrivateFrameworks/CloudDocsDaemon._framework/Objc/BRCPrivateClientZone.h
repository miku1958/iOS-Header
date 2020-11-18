//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCClientZone.h>

@class BRCAppLibrary, BRCItemID, BRCPrivateAppLibrary, BRCPrivateServerZone, BRCProblemReport, BRCServerZoneHealthState, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCPrivateClientZone : BRCClientZone
{
    NSMutableArray *_syncBarriers;
    BRCServerZoneHealthState *_zoneHealthState;
    BRCProblemReport *_problemReport;
    NSMutableArray *_faultsLiveBarriers;
}

@property (readonly, nonatomic) BRCAppLibrary *defaultAppLibrary; // @dynamic defaultAppLibrary;
@property (readonly, nonatomic) BRCPrivateAppLibrary *defaultPrivateAppLibrary;
@property (readonly, nonatomic) BOOL isDocumentScopePublic;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone; // @dynamic isSharedZone;
@property (readonly, nonatomic) BRCPrivateServerZone *privateServerZone;
@property (readonly, nonatomic) BOOL zoneHealthNeedsSyncUp;
@property (readonly, nonatomic) BRCServerZoneHealthState *zoneHealthState; // @synthesize zoneHealthState=_zoneHealthState;
@property (readonly, nonatomic) BRCItemID *zoneRootItemID;

- (void).cxx_destruct;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(BOOL *)arg4;
- (id)asPrivateClientZone;
- (void)clearProblemReport;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id *)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (BOOL)existsByParentID:(id)arg1 andName:(id)arg2;
- (BOOL)existsByParentID:(id)arg1 andName:(id)arg2 db:(id)arg3;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2 db:(id)arg3;
- (void)fixupItemsOnInitialZoneCreation;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (id)itemByParentID:(id)arg1 andName:(id)arg2 db:(id)arg3;
- (BOOL)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (id)plist;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (BOOL)recomputeAppSyncBlockState;
- (BOOL)removeSyncDownForAliasData:(id)arg1;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2 db:(id)arg3;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (void)resume;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2 db:(id)arg3;
- (void)setServerZone:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (void)syncedDownZoneHealthState:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)zoneHealthWasReset;

@end

