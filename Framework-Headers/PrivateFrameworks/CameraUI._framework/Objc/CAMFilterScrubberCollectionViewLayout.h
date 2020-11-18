//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;
@protocol CAMFilterScrubberCollectionViewLayoutDelegate;

@interface CAMFilterScrubberCollectionViewLayout : UICollectionViewLayout
{
    id<CAMFilterScrubberCollectionViewLayoutDelegate> _filterScrubberDelegate;
    NSArray *__cachedLayoutAttributesCells;
    NSArray *__cachedLayoutAttributesDecorations;
    struct CGSize __cachedContentSize;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, setter=_setCachedContentSize:) struct CGSize _cachedContentSize; // @synthesize _cachedContentSize=__cachedContentSize;
@property (strong, nonatomic, setter=_setCachedLayoutAttributesCells:) NSArray *_cachedLayoutAttributesCells; // @synthesize _cachedLayoutAttributesCells=__cachedLayoutAttributesCells;
@property (strong, nonatomic, setter=_setCachedLayoutAttributesDecorations:) NSArray *_cachedLayoutAttributesDecorations; // @synthesize _cachedLayoutAttributesDecorations=__cachedLayoutAttributesDecorations;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (weak, nonatomic) id<CAMFilterScrubberCollectionViewLayoutDelegate> filterScrubberDelegate; // @synthesize filterScrubberDelegate=_filterScrubberDelegate;

- (void).cxx_destruct;
- (double)_circularlyWrappedX:(double)arg1 forCenterX:(double)arg2 radius:(double)arg3 scale:(double)arg4;
- (struct CGSize)collectionViewContentSize;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
