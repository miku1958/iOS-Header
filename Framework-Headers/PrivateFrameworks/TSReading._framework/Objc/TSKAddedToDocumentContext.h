//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSKAddedToDocumentContext : NSObject
{
}

+ (id)changeTrackingSubstorageForCopyContext;
+ (id)dragCopyContext;
+ (id)dragMoveContext;
+ (id)exportFootnoteContext;
+ (id)importingContextWithImporterID:(id)arg1;
+ (id)importingMasterTemplateContextWithImporterID:(id)arg1;
+ (id)insertingPrototypeContext;
+ (id)movingContext;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)unarchivingContext;
+ (id)undoDeleteContext;
+ (id)unhidingContext;
- (BOOL)autoUpdateSmartFields;
- (BOOL)changeTrackingSubstorage;
- (BOOL)exportingFootnotes;
- (id)importerID;
- (BOOL)invokeDOLC;
- (BOOL)matchStyle;
- (void)setTableIDMap:(struct __CFDictionary *)arg1;
- (BOOL)syncChanges;
- (struct __CFDictionary *)tableIDMap;
- (id)undoContext;
- (BOOL)uniqueBookmarks;
- (BOOL)wasDragMoved;
- (BOOL)wasDragOperation;
- (BOOL)wasImported;
- (BOOL)wasImportedFromMasterTemplate;
- (BOOL)wasMoved;
- (BOOL)wasPasted;
- (BOOL)wasUnarchived;
- (BOOL)wasUndoDelete;
- (BOOL)wasUnhidden;

@end
