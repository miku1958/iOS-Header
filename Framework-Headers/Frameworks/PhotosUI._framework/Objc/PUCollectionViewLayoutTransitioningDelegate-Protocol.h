//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, UICollectionViewLayout;

@protocol PUCollectionViewLayoutTransitioningDelegate <NSObject>
- (void)collectionViewLayout:(UICollectionViewLayout *)arg1 willSupplyLayoutAttributes:(NSArray *)arg2;
- (BOOL)collectionViewLayoutShouldProvideCustomAnimations:(UICollectionViewLayout *)arg1;
@end
