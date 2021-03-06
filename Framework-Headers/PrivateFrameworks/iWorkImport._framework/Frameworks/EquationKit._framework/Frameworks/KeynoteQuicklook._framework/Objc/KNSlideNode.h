//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <KeynoteQuicklook/TSCEResolverContainer-Protocol.h>
#import <KeynoteQuicklook/TSKDocumentObject-Protocol.h>
#import <KeynoteQuicklook/TSKModel-Protocol.h>

@class KNAbstractSlide, KNSlideTree, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, TSPLazyReference;

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSCEResolverContainer>
{
    TSPLazyReference *_slideReference;
    NSMutableDictionary *_thumbnails;
    BOOL _thumbnailsAreDirty;
    NSSet *_digestsForDatasThatNeedDownloadForThumbnail;
    BOOL _hidden;
    BOOL _collapsed;
    BOOL _collapsedInOutlineView;
    BOOL _hasBodyInOutlineView;
    BOOL _hasTransition;
    BOOL _hasNote;
    BOOL _slideNumberVisible;
    unsigned long long _depth;
    unsigned long long _slideSpecificHyperlinksCount;
    NSString *_classicUniqueID;
    NSString *_previousIdentifier;
    unsigned int _tableNameCounter;
    NSArray *_children;
    BOOL _hasBackgroundAlpha;
    NSMutableDictionary *_slideSpecificHyperlinkMap;
    BOOL _hasExplicitBuilds;
    BOOL _hasExplicitBuildsIsUpToDate;
    unsigned long long _buildEventCount;
    BOOL _buildEventCountIsUpToDate;
    NSMutableSet *_remappedTableNames;
    KNSlideTree *_slideTree;
}

@property (readonly, nonatomic) long long bodyParagraphCount;
@property (readonly, nonatomic) unsigned long long buildEventCount;
@property (readonly, nonatomic) NSArray *children;
@property (strong, nonatomic) NSString *classicUniqueID;
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property (nonatomic, getter=isCollapsedInOutlineView) BOOL collapsedInOutlineView; // @synthesize collapsedInOutlineView=_collapsedInOutlineView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *digestsForDatasThatNeedDownloadForThumbnail; // @synthesize digestsForDatasThatNeedDownloadForThumbnail=_digestsForDatasThatNeedDownloadForThumbnail;
@property (readonly, nonatomic) BOOL hasBackgroundAlpha; // @synthesize hasBackgroundAlpha=_hasBackgroundAlpha;
@property (nonatomic) BOOL hasBodyInOutlineView; // @synthesize hasBodyInOutlineView=_hasBodyInOutlineView;
@property (readonly, nonatomic) BOOL hasBuildEvents;
@property (readonly, nonatomic) BOOL hasChildren;
@property (readonly, nonatomic) BOOL hasExplicitBuilds;
@property (nonatomic) BOOL hasNote;
@property (nonatomic) BOOL hasTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) BOOL isSlideNumberVisible;
@property (readonly, nonatomic) KNSlideNode *next;
@property (readonly, nonatomic) KNSlideNode *nextSkippingCollapsed;
@property (readonly, nonatomic) KNSlideNode *nextSkippingHidden;
@property (readonly, nonatomic) KNSlideNode *previous;
@property (copy, nonatomic) NSString *previousIdentifier;
@property (readonly, nonatomic) KNSlideNode *previousSkippingCollapsed;
@property (readonly, nonatomic) KNSlideNode *previousSkippingHidden;
@property (readonly, nonatomic) unsigned long long safeBuildEventCount;
@property (strong, nonatomic) KNAbstractSlide *slide;
@property (readonly, nonatomic) KNAbstractSlide *slideIfLoaded;
@property (readonly, nonatomic) NSDictionary *slideSpecificHyperlinkMap; // @synthesize slideSpecificHyperlinkMap=_slideSpecificHyperlinkMap;
@property (weak, nonatomic) KNSlideTree *slideTree; // @synthesize slideTree=_slideTree;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *thumbnails; // @synthesize thumbnails=_thumbnails;
@property (nonatomic) BOOL thumbnailsAreDirty;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

+ (id)UUIDStringSetForSlideNodes:(id)arg1;
+ (BOOL)needsObjectUUID;
+ (id)parentSlideNodeForInfo:(id)arg1;
+ (id)slideNodeForSelectionPath:(id)arg1;
+ (id)slideNodeUUIDForObsoleteUniqueIDString:(id)arg1 inSlideNodes:(id)arg2;
- (void).cxx_destruct;
- (void)addHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)addHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)addHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)addOldModelDescendantsToSlideTree:(id)arg1;
- (void)addRemappedTableName:(id)arg1;
- (void)addThumbnail:(id)arg1 atSize:(struct CGSize)arg2;
- (id)childEnumerator;
- (void)cleanOutInvalidSlideSpecificInfoEntries;
- (void)clearRemappedTableNames;
- (void)clearSlideSpecificLinkMap;
- (id)descendants;
- (id)descendantsOmittingSkippedSlideNodes:(BOOL)arg1 omittingCollapsedSlideNodes:(BOOL)arg2;
- (void)didLoadSlide:(id)arg1;
- (BOOL)hasSlideSpecificHyperlinkToNode:(id)arg1;
- (BOOL)hasSlideSpecificHyperlinks;
- (id)initWithContext:(id)arg1;
- (void)invalidateBuildEventCountCaches;
- (void)loadFromArchive:(const struct SlideNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned int)nextUntitledResolverIndex;
- (unsigned long long)numberOfLinksToSlideNodeInStorage:(id)arg1 forSlideNodeUUIDString:(id)arg2;
- (id)objectUUIDPath;
- (void)p_addHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2;
- (void)p_addOldModelDescendantsToSlideTree:(id)arg1 atDepth:(unsigned long long)arg2;
- (unsigned long long)p_buildEventCount;
- (void)p_commonInit;
- (id)p_getSlideSpecificMappingForStorage:(id)arg1 forSlideNode:(id)arg2;
- (id)p_mappingFromString:(id)arg1;
- (void)p_removeHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2;
- (id)p_slideNodeWithUUIDString:(id)arg1 inSlideNodes:(id)arg2;
- (void)p_updateHasExplicitBuilds;
- (id)paragraphIndexesOfTopLevelBullets;
- (void)purgeU15ModelIfNeeded;
- (id)remappedTableNames;
- (void)removeAllThumbnails;
- (void)removeHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)removeHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)removeHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)removeInvalidSlideSpecificHyperlinksForStorage:(id)arg1 withSlideNodeUUIDStrings:(id)arg2;
- (void)removeInvalidSlideSpecificHyperlinksWithSlideNodeUUIDStrings:(id)arg1;
- (void)removeObsoleteFieldsFor20Upgrade;
- (void)removeSlideSpecificMappingsFromDrawablesInGroup:(id)arg1;
- (void)removeThumbnailAtSize:(struct CGSize)arg1;
- (id)resolverMatchingName:(id)arg1;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (BOOL)safeHasBuildEvents;
- (unsigned int)saveNextUntitledResolverIndex;
- (void)saveToArchive:(struct SlideNodeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)slideAndReturnError:(id *)arg1;
- (void)uniquifyTableNamesForUpgradeOrImport;
- (void)updateHasBackgroundAlpha;
- (void)upgradeSlideSpecificHyperlinksForSlideNodes:(id)arg1;
- (void)upgradeSlideSpecificStorageHyperlinksForStorage:(id)arg1 withSlideNodes:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

