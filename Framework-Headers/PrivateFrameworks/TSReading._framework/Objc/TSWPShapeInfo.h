//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDShapeInfo.h>

#import <TSReading/TSDContainerInfo-Protocol.h>
#import <TSReading/TSDSelectionStatisticsContributor-Protocol.h>
#import <TSReading/TSWPStorageParent-Protocol.h>

@class NSObject, NSString, TSDInfoGeometry, TSPObject, TSWPColumns, TSWPLineHintCollection, TSWPPadding, TSWPShapeStyle, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>
{
    TSWPStorage *_containedStorage;
    BOOL _textUserEditable;
    TSWPLineHintCollection *mLineHints;
}

@property (nonatomic) BOOL allowsLastLineTruncation;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (strong, nonatomic) TSWPColumns *columns;
@property (strong, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;
@property (nonatomic) long long contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displaysInstructionalText;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property (readonly, nonatomic) NSString *instructionalText;
@property (strong, nonatomic) TSWPLineHintCollection *lineHints; // @synthesize lineHints=mLineHints;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) unsigned int maxLineCount;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property (strong, nonatomic) TSWPPadding *padding;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property (nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (nonatomic) BOOL textIsVertical;
@property (nonatomic, getter=isTextUserEditable) BOOL textUserEditable;
@property (readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property (nonatomic) unsigned int verticalAlignment;

+ (void)setDefaultInstructionalText:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (struct CGPoint)autosizePositionOffset;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize)arg2;
- (id)childEnumerator;
- (id)childInfos;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (Class)editorClass;
- (void)fixPositionOfImportedAutosizedShape;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (Class)layoutClass;
- (double)pOffsetForParagraphAlignment:(struct CGSize)arg1;
- (double)pOffsetForVerticalAlignment:(struct CGSize)arg1;
- (unsigned long long)p_chunkCountForByBullet;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (BOOL)p_hasContentForRange:(struct _NSRange)arg1;
- (BOOL)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)arg1;
- (id)presetKind;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)propertyMapForNewPreset;
- (Class)repClass;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylesForCopyStyle;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsTextInset;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (struct CGPoint)transformableObjectAnchorPoint;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

