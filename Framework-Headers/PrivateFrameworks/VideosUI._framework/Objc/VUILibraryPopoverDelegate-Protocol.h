//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, UICollectionView;

@protocol VUILibraryPopoverDelegate <NSObject>
- (void)popoverView:(UICollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)popoverView:(UICollectionView *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
@end
