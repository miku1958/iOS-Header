//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGDisplayAssetSource-Protocol.h>

@class NSMutableIndexSet, NSString, PXAssetsDataSource, PXCuratedLibraryCardSectionBodyLayoutSpec, PXCuratedLibrarySectionGeometryDescriptor, PXGLayoutGuide, PXIndexPathSet;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource>
{
    unsigned short _assetVersion;
    id<PXDisplayAsset> _keyAsset;
    CDStruct_d97c9657 _updateFlags;
    CDStruct_d97c9657 _postUpdateFlags;
    struct _PXGSpriteIndexRange _assetSpriteIndexRange;
    NSMutableIndexSet *_axSpriteIndexes;
    BOOL _isSelected;
    BOOL _isSkimming;
    long long _section;
    PXAssetsDataSource *_dataSource;
    long long _zoomLevel;
    PXCuratedLibraryCardSectionBodyLayoutSpec *_spec;
    PXIndexPathSet *_skimmingIndexPaths;
    long long _maxSkimmingIndex;
    long long _currentSkimmingIndex;
    PXGLayoutGuide *_assetLayoutGuide;
    id<PXDisplayAssetFetchResult> _keyAssetsFetchResult;
    struct PXSimpleIndexPath _sectionIndexPath;
}

@property (readonly, nonatomic) struct CGRect assetFrame;
@property (readonly, nonatomic) PXGLayoutGuide *assetLayoutGuide; // @synthesize assetLayoutGuide=_assetLayoutGuide;
@property (nonatomic) long long currentSkimmingIndex; // @synthesize currentSkimmingIndex=_currentSkimmingIndex;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property (nonatomic) BOOL isSkimming; // @synthesize isSkimming=_isSkimming;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property (nonatomic) long long maxSkimmingIndex; // @synthesize maxSkimmingIndex=_maxSkimmingIndex;
@property (readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
@property (readonly, nonatomic) long long section; // @synthesize section=_section;
@property (readonly, nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property (strong, nonatomic) PXIndexPathSet *skimmingIndexPaths; // @synthesize skimmingIndexPaths=_skimmingIndexPaths;
@property (strong, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;
@property (nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;

- (void).cxx_destruct;
- (void)_updateAXSprites;
- (void)_updateKeyAssetFetchResultWithDataSource:(id)arg1 section:(long long)arg2;
- (void)_updateSprites;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;
- (id)axSelectedSpriteIndexes;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;
- (id)axVisibleSpriteIndexes;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)layoutForItemChanges;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (void)update;

@end

