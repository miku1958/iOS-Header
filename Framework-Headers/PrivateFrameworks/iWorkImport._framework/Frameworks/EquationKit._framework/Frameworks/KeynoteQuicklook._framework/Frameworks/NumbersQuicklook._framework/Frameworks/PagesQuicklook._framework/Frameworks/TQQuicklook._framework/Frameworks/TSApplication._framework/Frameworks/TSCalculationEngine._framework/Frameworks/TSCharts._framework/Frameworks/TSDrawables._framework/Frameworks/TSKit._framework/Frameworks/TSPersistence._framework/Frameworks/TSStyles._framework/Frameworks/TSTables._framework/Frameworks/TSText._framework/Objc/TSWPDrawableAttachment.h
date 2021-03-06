//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment
{
    TSDDrawableInfo *_drawableInfo;
    int _hOffsetType;
    double _hOffset;
    int _vOffsetType;
    double _vOffset;
}

@property (readonly, nonatomic) TSDDrawableInfo *drawable; // @synthesize drawable=_drawableInfo;
@property (nonatomic) double hOffset; // @synthesize hOffset=_hOffset;
@property (nonatomic) int hOffsetType; // @synthesize hOffsetType=_hOffsetType;
@property (nonatomic) double vOffset; // @synthesize vOffset=_vOffset;
@property (nonatomic) int vOffsetType; // @synthesize vOffsetType=_vOffsetType;

+ (void)setPositionerClass:(Class)arg1;
- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)attachDrawable:(id)arg1;
- (id)childEnumerator;
- (void)clearParentStorageForDealloc;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)detachDrawable;
- (void)didFinalizeUnarchivingFromWPStorage:(id)arg1;
- (unsigned int)elementKind;
- (unsigned long long)hash;
- (void)infoChanged;
- (id)initWithContext:(id)arg1 drawable:(id)arg2;
- (void)invalidate;
- (BOOL)isAnchored;
- (BOOL)isDrawable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHTMLWrap;
- (BOOL)isHorizontallyCentered;
- (BOOL)isPartitioned;
- (BOOL)isSearchable;
- (BOOL)isVerticallyCentered;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadMessage:(const struct DrawableAttachmentArchive *)arg1 fromUnarchiver:(id)arg2;
- (BOOL)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (id)objectsForStyleMigrating;
- (Class)positionerClass;
- (BOOL)preserveAttributesOverSelectionWhenInserting;
- (void)saveMessage:(struct DrawableAttachmentArchive *)arg1 toArchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (BOOL)shouldInvalidateWhenTextPropertiesChange;
- (BOOL)specifiesEnabledKnobMask;
- (BOOL)supportsUUID;
- (void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1 storage:(id)arg2;

@end

