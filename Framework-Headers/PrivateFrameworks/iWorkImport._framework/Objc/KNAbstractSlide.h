//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDCompatibilityAwareMediaContainer-Protocol.h>
#import <iWorkImport/TSDDrawableContainerInfo-Protocol.h>
#import <iWorkImport/TSDMutableContainerInfo-Protocol.h>
#import <iWorkImport/TSDReducibleImageContainer-Protocol.h>
#import <iWorkImport/TSDReplaceableMediaContainer-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSSPropertySource-Protocol.h>
#import <iWorkImport/TSSStyleClient-Protocol.h>

@class KNBodyPlaceholderInfo, KNObjectPlaceholderInfo, KNSlideBackgroundInfo, KNSlideNode, KNSlideNumberPlaceholderInfo, KNSlideStyle, KNTitlePlaceholderInfo, KNTransition, NSArray, NSDictionary, NSObject, NSOrderedSet, NSSet, NSString, TSDFill, TSDInfoGeometry, TSUMutablePointerSet, TSUPointerKeyDictionary;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface KNAbstractSlide : TSPObject <TSSPropertySource, TSKDocumentObject, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSKTransformableObject, TSSStyleClient, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer>
{
    KNSlideStyle *_style;
    KNSlideBackgroundInfo *_background;
    NSOrderedSet *_childInfos;
    NSSet *_builds;
    NSArray *_buildChunks;
    BOOL _needsSlideNodeEventCountUpdate;
    TSUPointerKeyDictionary *_drawableToGhostInfosMap;
    TSUMutablePointerSet *_drawablesWithInvalidatedGhosts;
    BOOL _shouldConsiderAllChunksActive;
    BOOL _inDocument;
    KNTransition *_transition;
    KNTitlePlaceholderInfo *_titlePlaceholder;
    KNBodyPlaceholderInfo *_bodyPlaceholder;
    KNObjectPlaceholderInfo *_objectPlaceholder;
    KNSlideNumberPlaceholderInfo *_slideNumberPlaceholder;
    KNSlideNode *_slideNode;
    struct NSDictionary *_placeholdersForTags;
}

@property (readonly, nonatomic) NSArray *activeBuildChunks;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) KNSlideBackgroundInfo *background;
@property (readonly, nonatomic) TSDFill *backgroundFill;
@property (strong, nonatomic) KNBodyPlaceholderInfo *bodyPlaceholder; // @synthesize bodyPlaceholder=_bodyPlaceholder;
@property (readonly, nonatomic, getter=isBodyVisible) BOOL bodyVisible;
@property (readonly, nonatomic) unsigned long long buildChunkCount;
@property (readonly, nonatomic) NSArray *buildChunks;
@property (readonly, nonatomic) unsigned long long buildCount;
@property (copy, nonatomic) NSSet *builds;
@property (readonly, nonatomic) NSArray *buildsGroupedByDeliveryGroup;
@property (readonly, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *containedModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long deliveryGroupCount;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSUPointerKeyDictionary *drawableToGhostInfosMap;
@property (readonly, nonatomic) TSUMutablePointerSet *drawablesWithInvalidatedGhosts;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) BOOL hasFreeformTextPlaceholders;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inDocument; // @synthesize inDocument=_inDocument;
@property (readonly, nonatomic) NSArray *infosToDisplay;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic) BOOL isMasterSlide;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (strong, nonatomic) KNObjectPlaceholderInfo *objectPlaceholder; // @synthesize objectPlaceholder=_objectPlaceholder;
@property (readonly, nonatomic, getter=isObjectVisible) BOOL objectVisible;
@property (readonly, nonatomic) NSArray *ownedChildInfos;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (copy, nonatomic) NSDictionary *placeholdersForTags; // @synthesize placeholdersForTags=_placeholdersForTags;
@property (readonly, weak, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=_slideNode;
@property (strong, nonatomic) KNSlideNumberPlaceholderInfo *slideNumberPlaceholder; // @synthesize slideNumberPlaceholder=_slideNumberPlaceholder;
@property (readonly, nonatomic, getter=isSlideNumberVisible) BOOL slideNumberVisible;
@property (strong, nonatomic) KNSlideStyle *style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBuilds;
@property (readonly, nonatomic) BOOL supportsCollaborativeEditing;
@property (strong, nonatomic) KNTitlePlaceholderInfo *titlePlaceholder; // @synthesize titlePlaceholder=_titlePlaceholder;
@property (readonly, nonatomic, getter=isTitleVisible) BOOL titleVisible;
@property (strong, nonatomic) KNTransition *transition; // @synthesize transition=_transition;

+ (id)buildChunksInDeliveryGroupAtIndex:(unsigned long long)arg1 inBuildChunks:(id)arg2;
+ (BOOL)chunk:(id)arg1 isFirstInDeliveryGroupForChunks:(id)arg2;
+ (Class)classForUnarchiver:(id)arg1;
+ (unsigned long long)deliveryGroupCountForBuildChunks:(id)arg1;
+ (unsigned long long)deliveryGroupIndexForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
+ (BOOL)needsObjectUUID;
+ (id)p_firstActiveChunkInChunks:(id)arg1;
+ (id)parentSlideForInfo:(id)arg1;
- (void).cxx_destruct;
- (double)CGFloatValueForProperty:(int)arg1;
- (id)activeChunksForDrawable:(id)arg1;
- (id)activeChunksForDrawable:(id)arg1 animationType:(long long)arg2;
- (void)addBuild:(id)arg1;
- (void)addChildInfo:(id)arg1;
- (void)addDrawable:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)areBuildChunksInValidOrderIgnoringInactiveChunks:(id)arg1;
- (id)availableEventTriggersForBuildChunks:(id)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (id)buildChunksForActiveBuildChunkIndexes:(id)arg1;
- (id)buildChunksInDeliveryGroupAtIndex:(unsigned long long)arg1;
- (id)buildsForDrawable:(id)arg1;
- (id)buildsForDrawable:(id)arg1 type:(long long)arg2;
- (id)buildsForDrawables:(id)arg1;
- (long long)canMoveBuildChunk:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)canMoveDeliveryGroupFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)canMoveDrawables:(id)arg1 toIndexes:(id)arg2;
- (BOOL)canSetChunksToAutomaticWith:(id)arg1;
- (id)childEnumerator;
- (id)chunksForDrawable:(id)arg1 animationType:(long long)arg2;
- (id)chunksWhichPlayWithChunk:(id)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)contentBuildForDrawable:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)defaultBodyPlaceholder;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultSlideNumberPlaceholder;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholder;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (unsigned long long)deliveryGroupIndexForBuildChunk:(id)arg1;
- (id)deliveryGroupIndexesForBuilds:(id)arg1;
- (void)didInitFromSOS;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (BOOL)hasComplementForBuildChunk:(id)arg1;
- (BOOL)hasComplementForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
- (double)highestScaleFactorForRenderingDrawableInfo:(id)arg1;
- (void)i_invalidateActiveChunkCache;
- (void)i_primitiveAddBuild:(id)arg1;
- (void)i_primitiveInsertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(BOOL)arg3;
- (void)i_primitiveSetBuildChunks:(id)arg1;
- (void)i_primitiveSetBuilds:(id)arg1;
- (id)imageUsingDocumentRoot:(id)arg1;
- (id)inBuildForDrawable:(id)arg1;
- (id)infoCorrespondingToInfo:(id)arg1;
- (BOOL)infoExistsForTag:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)infoForTag:(id)arg1;
- (BOOL)infoIsPlaceholder:(id)arg1;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
- (void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(BOOL)arg3;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertDrawable:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct SlideArchive *)arg1 unarchiver:(id)arg2;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)objectForProperty:(int)arg1;
- (id)objectUUIDPath;
- (id)outBuildForDrawable:(id)arg1;
- (id)p_ChunksForDrawable:(id)arg1 animationType:(long long)arg2 onlyActiveChunks:(BOOL)arg3;
- (struct _NSRange)p_activeChunkRangeForBuild:(id)arg1 inActiveChunks:(id)arg2;
- (BOOL)p_activeChunks:(id)arg1 areInOrderForBuild:(id)arg2;
- (BOOL)p_activeChunks:(id)arg1 interleaveChunksForComplementOfBuild:(id)arg2;
- (BOOL)p_areActiveBuildChunksInValidOrder:(id)arg1;
- (void)p_assertChunksInSequenceForBuild:(id)arg1;
- (id)p_calculateActiveBuildChunks;
- (BOOL)p_canMoveDeliveryGroupBuildChunks:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)p_canMoveDeliveryGroupBuildChunksFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)p_checkChildInfosForDuplicates:(id)arg1;
- (id)p_chunksWhichWillPlayWithChunksToSetToWith:(id)arg1;
- (id)p_complementForBuild:(id)arg1;
- (id)p_firstActiveChunkInChunksForBuild:(id)arg1;
- (void)p_insertChildInfos:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (id)p_invalidBuildsOnDrawable:(id)arg1;
- (void)p_invalidateAllChunkAndBuildCaches;
- (void)p_invalidateCachesForBuildUpdate:(id)arg1 isForRemoval:(BOOL)arg2;
- (void)p_invalidateCachesForChunkUpdate:(id)arg1 isForRemoval:(BOOL)arg2;
- (void)p_invalidateSlideNodeBuildEventCountCaches;
- (BOOL)p_isChildPlaceholderInfo:(id)arg1;
- (BOOL)p_isValidToMoveChunk:(id)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1;
- (id)p_lastActiveChunkInChunksForBuild:(id)arg1;
- (void)p_setChildInfosAsOrderedSet:(id)arg1 usingDOLC:(BOOL)arg2 dolcContext:(id)arg3;
- (void)p_updateBuildEffects:(BOOL)arg1 version:(unsigned long long)arg2;
- (void)p_updateBuildsReplacingPlaceholder:(id)arg1 withPlaceholder:(id)arg2;
- (void)p_updateChartBuildChunksImmediatelyWithoutUndoHistory;
- (void)p_updateChunkCount;
- (void)p_updateOverlappingBuildEventTriggers;
- (void)p_updateStartAndEndOffsetsIfNecessaryForFileVersion:(unsigned long long)arg1;
- (id)pdfDataUsingDocumentRoot:(id)arg1;
- (void)performBlockOnInfos:(CDUnknownBlockType)arg1;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetIndex:(long long)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetStyle:(id)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetStyle:(id)arg5 listStyle:(id)arg6 layoutPropertyMap:(id)arg7 paragraphPropertyMap:(id)arg8 listPropertyMap:(id)arg9 context:(id)arg10;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2 placeholderClass:(Class)arg3;
- (id)referencedStyles;
- (void)removeBuild:(id)arg1;
- (void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(BOOL)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)removeContainedModel:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeInvalidBuildsOnDrawable:(id)arg1 usingParentCommand:(id)arg2;
- (void)removeTagForDrawable:(id)arg1;
- (Class)repClass;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)saveToArchive:(struct SlideArchive *)arg1 archiver:(id)arg2;
- (void)setBuildChunks:(id)arg1 generateIdentifiers:(BOOL)arg2;
- (void)setChildInfos:(id)arg1;
- (void)setChildInfosWithoutDOLC:(id)arg1;
- (void)setInfo:(id)arg1 forSageTag:(id)arg2;
- (void)setPrimitiveGeometry:(id)arg1;
- (void)setSlideNode:(id)arg1;
- (id)tagForInfo:(id)arg1;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (long long)validateMoveActiveBuildChunks:(id)arg1 toActiveIndex:(unsigned long long)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

