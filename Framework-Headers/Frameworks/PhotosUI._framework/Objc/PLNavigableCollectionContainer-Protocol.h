//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PHAssetCollection, PHCollection;

@protocol PLNavigableCollectionContainer <NSObject>
- (BOOL)canNavigateToCollection:(PHCollection *)arg1;
- (void)navigateToCollection:(PHCollection *)arg1 animated:(BOOL)arg2 completion:(void (^)(UIViewController *))arg3;

@optional
- (void)navigateToRevealAssetCollection:(PHAssetCollection *)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
@end

