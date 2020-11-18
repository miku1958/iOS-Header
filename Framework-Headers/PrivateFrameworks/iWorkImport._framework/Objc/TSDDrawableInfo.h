//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDChangeableInfo-Protocol.h>
#import <iWorkImport/TSDScrollingAwareChangeSource-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKSearchable-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class NSData, NSObject, NSString, NSURL, TSDDefaultPartitioner, TSDDrawableComment, TSDExteriorTextWrap, TSDInfoGeometry, TSPLazyReference, TSSPropertySetChangeDetails;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable, TSDScrollingAwareChangeSource>
{
    TSDInfoGeometry *mGeometry;
    NSObject<TSDContainerInfo> *mParentInfo;
    TSPLazyReference *mParentInfoReference;
    BOOL mLocked;
    BOOL mAspectRatioLocked;
    TSSPropertySetChangeDetails *mChanges;
    TSDExteriorTextWrap *mExteriorTextWrap;
    TSPObject<TSDOwningAttachment> *mOwningAttachment;
    TSDDefaultPartitioner *mDefaultPartitioner;
    NSURL *mHyperlinkURL;
    TSDDrawableComment *mComment;
    NSString *mAccessibilityDescription;
}

@property (copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=mAccessibilityDescription;
@property (readonly, nonatomic) BOOL allowsParentGroupToBeResizedWithoutAspectRatioLock;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (nonatomic) BOOL aspectRatioLocked; // @synthesize aspectRatioLocked=mAspectRatioLocked;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL canAspectRatioLockBeChangedByUser;
@property (readonly, nonatomic) BOOL canSizeBeChangedIncrementally;
@property (strong, nonatomic) TSDDrawableComment *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int elementKind;
@property (copy, nonatomic) TSDExteriorTextWrap *exteriorTextWrap;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) BOOL hasPDFDataForCopy;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *hyperlinkURL; // @synthesize hyperlinkURL=mHyperlinkURL;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic) BOOL isUserModifiable;
@property (readonly, nonatomic, getter=isLockable) BOOL lockable;
@property (nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=mLocked;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) NSData *originalPDFDataForCopy;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment=mOwningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAttachedComments;
@property (readonly, nonatomic) BOOL supportsHyperlinks;
@property (readonly, nonatomic) BOOL supportsParentRotation;

+ (BOOL)canPartition;
+ (Class)classForUnarchiver:(id)arg1;
+ (BOOL)needsObjectUUID;
+ (void)setShouldPartitionByDefault:(BOOL)arg1;
- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)animationFilters;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 dynamicallyDraggedLayout:(id)arg2;
- (void)beginCollectingChanges;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)coalesceChanges:(id)arg1;
- (struct CGAffineTransform)computeFullTransform;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (id)containingGroup;
- (id)copyWithContext:(id)arg1;
- (id)descriptionForPasteboard;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (void)didCopy;
- (id)endCollectingChanges;
- (id)exteriorTextWrapForMovingToFloating;
- (struct CGAffineTransform)fullTransformInRoot;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (BOOL)isLockedForSpecificInfo;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct DrawableArchive *)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)objectUUIDPath;
- (id)partitioner;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (id)presetKind;
- (id)promisedDataForType:(id)arg1;
- (Class)repClass;
- (BOOL)requiresStagesBuildingInReverse;
- (void)saveToArchive:(struct DrawableArchive *)arg1 archiver:(id)arg2;
- (void)setInsertionCenterPosition:(struct CGPoint)arg1;
- (void)setParentInfoDuringUnarchiving:(id)arg1 inDocument:(BOOL)arg2;
- (void)setPrimitiveGeometry:(id)arg1;
- (BOOL)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (BOOL)suppliesFinalTextures;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (double)transformGeometryRatioForTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transformInRoot;
- (struct CGPoint)transformableObjectAnchorPoint;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform)arg1 inBounds:(struct CGRect)arg2;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (id)uuidPathPrefixComponentsProvider;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willChangeProperties:(id)arg1;
- (void)willChangeProperty:(int)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end

