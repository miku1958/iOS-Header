//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <PhotosUICore/PXCMMCollectionViewLayoutProtocol-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PXCMMCollectionViewStaggeredLayout : UICollectionViewLayout <PXCMMCollectionViewLayoutProtocol>
{
    CDStruct_f0658562 _relativeStaggerOffset;
    long long _staggerDirection;
    NSMutableDictionary *_layoutAttributesForIndexPath;
    struct CGSize _contentSize;
    struct CGSize _itemSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (nonatomic) CDStruct_f0658562 relativeStaggerOffset; // @synthesize relativeStaggerOffset=_relativeStaggerOffset;
@property (nonatomic) long long staggerDirection; // @synthesize staggerDirection=_staggerDirection;
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

