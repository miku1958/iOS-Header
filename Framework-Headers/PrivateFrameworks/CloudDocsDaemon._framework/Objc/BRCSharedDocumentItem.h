//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCDocumentItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCSharedDocumentItem : BRCDocumentItem
{
}

@property (readonly, nonatomic) NSString *enclosurePathRelativeToRoot;
@property (readonly, nonatomic) BOOL isShareAcceptationFault;

- (id)aliasItemID;
- (id)asSharedDocument;
- (void)deleteShareAcceptationFault;
- (BOOL)getPrivateAppLibraryAliasURL:(id *)arg1 aliasContainer:(id *)arg2;
- (id)initAsShareAcceptationFaultWithFilename:(id)arg1 itemID:(id)arg2 appLibrary:(id)arg3;
- (BOOL)isSharedDocument;
- (void)markLiveFromStageAsShareAcceptationFault;
- (id)parentFileID;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (void)stageShareAcceptationFaultWithName:(id)arg1;

@end

