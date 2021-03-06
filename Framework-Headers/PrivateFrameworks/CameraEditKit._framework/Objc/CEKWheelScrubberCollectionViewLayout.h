//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;
@protocol CEKWheelScrubberCollectionViewLayoutDelegate;

@interface CEKWheelScrubberCollectionViewLayout : UICollectionViewLayout
{
    BOOL _useRoundedCorners;
    id<CEKWheelScrubberCollectionViewLayoutDelegate> _wheelScrubberDelegate;
    long long _layoutDirection;
    long long _layoutOrder;
    NSArray *__cachedLayoutAttributesCells;
    NSArray *__cachedLayoutAttributesDecorations;
    struct CGSize __cachedContentSize;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, setter=_setCachedContentSize:) struct CGSize _cachedContentSize; // @synthesize _cachedContentSize=__cachedContentSize;
@property (strong, nonatomic, setter=_setCachedLayoutAttributesCells:) NSArray *_cachedLayoutAttributesCells; // @synthesize _cachedLayoutAttributesCells=__cachedLayoutAttributesCells;
@property (strong, nonatomic, setter=_setCachedLayoutAttributesDecorations:) NSArray *_cachedLayoutAttributesDecorations; // @synthesize _cachedLayoutAttributesDecorations=__cachedLayoutAttributesDecorations;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property (nonatomic) long long layoutOrder; // @synthesize layoutOrder=_layoutOrder;
@property (nonatomic) BOOL useRoundedCorners; // @synthesize useRoundedCorners=_useRoundedCorners;
@property (weak, nonatomic) id<CEKWheelScrubberCollectionViewLayoutDelegate> wheelScrubberDelegate; // @synthesize wheelScrubberDelegate=_wheelScrubberDelegate;

- (void).cxx_destruct;
- (double)_circularlyWrapped:(double)arg1 forCenter:(double)arg2 radius:(double)arg3 scale:(double)arg4;
- (struct CGSize)collectionViewContentSize;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

