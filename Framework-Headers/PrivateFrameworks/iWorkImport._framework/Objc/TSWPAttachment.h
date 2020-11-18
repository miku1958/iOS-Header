//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDOwningAttachment-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSWPStorageActionObjectProtocol-Protocol.h>

@class NSString, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPAttachment : TSPObject <TSWPStorageActionObjectProtocol, TSKDocumentObject, TSDOwningAttachment, TSPCopying, TSKModel>
{
    TSWPStorage *_parentStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL isAttachedToBodyText;
@property (readonly, nonatomic) BOOL isDrawable;
@property (readonly, nonatomic) BOOL isPartitioned;
@property (readonly, nonatomic) BOOL isSearchable;
@property (weak, nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
@property (readonly, nonatomic) Class positionerClass;
@property (readonly, nonatomic) BOOL specifiesEnabledKnobMask;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (int)attributeArrayKind;
- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)changesWithPageCount;
- (BOOL)changesWithPageNumber;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (void)infoChanged;
- (id)initWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)migrateStyleWithDocumentRoot:(id)arg1;
- (id)objectsForStyleMigrating;
- (void)performTemplateLocalization:(id)arg1;
- (BOOL)preserveAttributesOverSelectionWhenInserting;
- (BOOL)shouldInvalidateWhenTextPropertiesChange;
- (BOOL)supportsUUID;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

