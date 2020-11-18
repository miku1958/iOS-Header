//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDDrawableInfo.h>

#import <TSReading/TSDContainerInfo-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSKModel-Protocol.h>
#import <TSReading/TSKSearchable-Protocol.h>
#import <TSReading/TSSPresetSource-Protocol.h>
#import <TSReading/TSSStyleClient-Protocol.h>
#import <TSReading/TSSThemedObject-Protocol.h>
#import <TSReading/TSWPStorageParent-Protocol.h>

@class NSObject, NSString, TSDInfoGeometry, TSKDocumentRoot, TSPObject, TSTEditingState, TSTMasterLayout, TSTTableModel, TSTTablePartitioner;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSTTableInfo : TSDDrawableInfo <TSKModel, TSKSearchable, TSSThemedObject, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent>
{
    TSTTableModel *mTableModel;
    BOOL mIsFormulaEditing;
    BOOL mHasReference;
    CDStruct_0441cfb5 mEditingCellID;
    CDStruct_0441cfb5 mPreviousEditingCellID;
    TSTTablePartitioner *mPartitioner;
    TSTMasterLayout *mMasterLayout;
    TSTEditingState *mEditingState;
}

@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) long long contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (nonatomic) CDStruct_0441cfb5 editingCellID; // @synthesize editingCellID=mEditingCellID;
@property (readonly, nonatomic) CDStruct_5f1f7aa9 editingCellRange;
@property (strong, nonatomic) TSTEditingState *editingState; // @synthesize editingState=mEditingState;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property (nonatomic, getter=isFormulaEditing) BOOL formulaEditing; // @synthesize formulaEditing=mIsFormulaEditing;
@property (copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
@property (nonatomic) BOOL hasReference; // @synthesize hasReference=mHasReference;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property (readonly, nonatomic) TSTMasterLayout *masterLayout;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property (readonly, nonatomic) TSTTablePartitioner *partitioner;
@property (readonly, nonatomic) CDStruct_0441cfb5 previousEditingCellID; // @synthesize previousEditingCellID=mPreviousEditingCellID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableModel *tableModel;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (BOOL)canPartition;
+ (id)geometryForPrototypeIndex:(long long)arg1 withCanvasPoint:(struct CGPoint)arg2;
+ (unsigned short)numberOfColumnsForProtoIndex:(unsigned long long)arg1;
+ (unsigned short)numberOfRowsForProtoIndex:(unsigned long long)arg1;
+ (id)presetKinds;
+ (id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allWPStorages;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (id)childEnumerator;
- (id)childInfos;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (void)clearPartitioner;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)debugDump;
- (id)descriptionForExactCopy;
- (id)descriptionForPasteboard;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (void)didCopy;
- (void)didReplaceTextsInStoragesWithPlaceHolderString;
- (Class)editorClass;
- (int)elementKind;
- (id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 carrySelection:(BOOL)arg3;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 carrySelection:(BOOL)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3;
- (id)initWithContext:(id)arg1 otherTableInfo:(id)arg2;
- (BOOL)isSafeToConvertToAttributedString;
- (BOOL)isSafeToConvertToImage;
- (BOOL)isSafeToConvertToText;
- (Class)layoutClass;
- (double)masterLayoutEffectiveTableNameHeight;
- (id)mergedContainedStorages;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_didLoadRichTextPayloadTable:(id)arg1;
- (void)performBlockWithStylesheetForAddingStyles:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (Class)repClass;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)reverseChunkingIsSupported;
- (void)scaleInfoGeometry:(struct CGSize)arg1;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(CDUnknownBlockType)arg3;
- (void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2;
- (void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2 scaleFactor:(struct CGSize)arg3;
- (void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2 scaleFactor:(struct CGSize)arg3 shouldClearObjectPlaceholderFlag:(BOOL)arg4;
- (void)setupTableModelForPrototypeIndex:(long long)arg1;
- (void)shiftGeometryToExcludeTableNameHeight;
- (void)shiftGeometryToIncludeTableNameHeight;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (id)tabularTextRepresentation;
- (BOOL)textIsVertical;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (void)validate;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
