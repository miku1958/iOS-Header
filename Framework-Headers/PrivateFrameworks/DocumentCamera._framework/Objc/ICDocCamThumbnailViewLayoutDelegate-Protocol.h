//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentCamera/NSObject-Protocol.h>

@class UICollectionView, UIView;

@protocol ICDocCamThumbnailViewLayoutDelegate <NSObject>
- (struct CGSize)collectionView:(UICollectionView *)arg1 imageSizeAtIndex:(long long)arg2;
- (UIView *)rootView;
- (struct CGRect)targetViewRect;
@end
