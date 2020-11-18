//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCAppLibrary.h>

@class BRCRelativePath, BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface BRCPrivateAppLibrary : BRCAppLibrary
{
    BOOL _containerMetadataNeedsSyncUp;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property (readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property (strong, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property (nonatomic) BOOL containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property (readonly, nonatomic) BRCRelativePath *documentsPath;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (BOOL)_isInCloudDocsZone;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(BOOL)arg2;
- (void)_updateIsInCloudDocsZone;
- (id)asPrivateAppLibrary;
- (void)associateWithClientZone:(id)arg1;
- (id)containerMetadataFilledWithTCCInfo;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(BOOL)arg3 error:(id *)arg4;
- (id)fetchRootItem;
- (id)fetchRootItemInDB:(id)arg1;
- (id)initWithName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 zoneRowID:(id)arg4 db:(id)arg5 plist:(id)arg6 session:(id)arg7 initialCreation:(BOOL)arg8 createdRootOnDisk:(BOOL)arg9 createdCZMMoved:(BOOL)arg10 rootFileID:(id)arg11;
- (BOOL)isPrivateAppLibrary;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (id)pathRelativeToRoot;
- (id)plist;
- (id)privateClientZone;
- (id)rootItemID;
- (void)scheduleContainerMetadataSyncUp;
- (void)setIsOverQuota:(BOOL)arg1;
- (BOOL)shouldSaveContainerMetadataServerside;
- (void)updateWithPlist:(id)arg1;
- (BOOL)wasMovedToCloudDocs;
- (void)zoneDidChangeMovedToCloudDocsState;

@end

