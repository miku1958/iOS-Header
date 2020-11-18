//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <PhotosUICore/PXCMMCollectionViewLayoutProtocol-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PXCMMCollectionViewOverlappingLayout : UICollectionViewLayout <PXCMMCollectionViewLayoutProtocol>
{
    NSMutableDictionary *_layoutAttributesForIndexPath;
    struct CGSize _contentSize;
    double _relativeOverlap;
    double _relativeNegativeScale;
    struct CGSize _itemSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (nonatomic) double relativeNegativeScale; // @synthesize relativeNegativeScale=_relativeNegativeScale;
@property (nonatomic) double relativeOverlap; // @synthesize relativeOverlap=_relativeOverlap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (double)contentHeight;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

