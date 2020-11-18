//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;
@protocol PUSharingStackCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout
{
    id<PUSharingStackCollectionViewLayoutDelegate> _delegate;
    NSArray *_stackedItemsLayoutAttributes;
}

@property (weak, nonatomic) id<PUSharingStackCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSArray *stackedItemsLayoutAttributes; // @synthesize stackedItemsLayoutAttributes=_stackedItemsLayoutAttributes;

- (void).cxx_destruct;
- (id)_layoutItemInputAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;

@end
