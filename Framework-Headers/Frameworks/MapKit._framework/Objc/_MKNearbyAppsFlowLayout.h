//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface _MKNearbyAppsFlowLayout : UICollectionViewFlowLayout
{
    BOOL _snapsToItemBoundaries;
    BOOL _snapsToItemCenters;
}

@property (nonatomic) BOOL snapsToItemBoundaries; // @synthesize snapsToItemBoundaries=_snapsToItemBoundaries;
@property (nonatomic) BOOL snapsToItemCenters; // @synthesize snapsToItemCenters=_snapsToItemCenters;

+ (double)snapToBoundariesDecelerationRate;
- (id)init;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

