//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PXCMMCollectionViewCollageLayout : UICollectionViewLayout
{
    NSMutableDictionary *_layoutAttributesForIndexPath;
    struct CGSize _contentSize;
    BOOL _portraitBias;
    double _interitemSpacing;
}

@property (nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (nonatomic) BOOL portraitBias; // @synthesize portraitBias=_portraitBias;

- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

