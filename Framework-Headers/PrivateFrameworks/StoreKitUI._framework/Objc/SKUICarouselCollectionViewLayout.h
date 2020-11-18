//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout
{
    NSIndexPath *_startScrollingIndexPath;
}

@property (strong, nonatomic) NSIndexPath *startScrollingIndexPath; // @synthesize startScrollingIndexPath=_startScrollingIndexPath;

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (struct CGPoint)_collectionViewBoundsCenter;
- (void)_panGestureRecognized:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

