//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary, UICollectionLayoutGeometry, _UICollectionViewGeometricIndexer, _UIDataSourceSnapshotter;

@interface UICollectionViewDeclarativeLayout : UICollectionViewLayout
{
    long long _scrollDirection;
    NSArray *_sectionGeometries;
    UICollectionLayoutGeometry *_templateLayoutGeometry;
    NSArray *_sectionFrames;
    NSMutableDictionary *_cachedAttributes;
    _UICollectionViewGeometricIndexer *_sectionGeometricIndexer;
    _UIDataSourceSnapshotter *_dataSourceSnapshotter;
    struct CGSize _itemSize;
    struct CGRect _contentFrame;
}

@property (strong, nonatomic) NSMutableDictionary *cachedAttributes; // @synthesize cachedAttributes=_cachedAttributes;
@property (nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property (strong, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshotter; // @synthesize dataSourceSnapshotter=_dataSourceSnapshotter;
@property (nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property (strong, nonatomic) NSArray *sectionFrames; // @synthesize sectionFrames=_sectionFrames;
@property (strong, nonatomic) _UICollectionViewGeometricIndexer *sectionGeometricIndexer; // @synthesize sectionGeometricIndexer=_sectionGeometricIndexer;
@property (strong, nonatomic) NSArray *sectionGeometries; // @synthesize sectionGeometries=_sectionGeometries;
@property (strong, nonatomic) UICollectionLayoutGeometry *templateLayoutGeometry; // @synthesize templateLayoutGeometry=_templateLayoutGeometry;

- (void).cxx_destruct;
- (void)_configureSectionGeometries;
- (id)_layoutGeometryForSection:(long long)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)initWithLayoutGeometriesForSections:(id)arg1;
- (id)initWithLayoutGeometry:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

