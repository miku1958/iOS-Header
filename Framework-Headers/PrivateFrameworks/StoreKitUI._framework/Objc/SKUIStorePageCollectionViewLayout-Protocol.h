//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionViewLayoutAttributes;

@protocol SKUIStorePageCollectionViewLayout <NSObject>

@property (copy, nonatomic) NSString *backdropGroupName;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems;
@property (readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property (nonatomic) BOOL rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective;

- (UICollectionViewLayoutAttributes *)layoutAttributesForUnpinnedItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
@end

