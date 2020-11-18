//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalContainer.h>

@class BRCPrivateServerZone, BRCRelativePath, BRContainer, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCPrivateLocalContainer : BRCLocalContainer
{
    NSMutableArray *_syncBarriers;
    BOOL _containerMetadataNeedsSyncUp;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property (readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property (strong, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property (nonatomic) BOOL containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property (readonly, nonatomic) BRCRelativePath *documentsPath;
@property (readonly, nonatomic) BOOL isPrivateContainer;
@property (readonly, nonatomic) BOOL isSharedContainer;
@property (readonly, nonatomic) BRCPrivateServerZone *privateZone;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(BOOL *)arg4;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(BOOL)arg2;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (id)asPrivateContainer;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 error:(id *)arg3;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id *)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (BOOL)existsByParentID:(id)arg1 andName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)initWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (BOOL)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (id)pathRelativeToRoot;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (id)plist;
- (BOOL)recomputeSyncBlockState;
- (BOOL)removeSyncDownForAliasData:(id)arg1;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (void)resume;
- (void)scheduleContainerMetadataSyncUp;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (void)setServerZone:(id)arg1;
- (void)signalFaultingWatchers:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;

@end

