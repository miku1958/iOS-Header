//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAsset, PHAssetCollection;

@protocol PXNavigableAssetContainerViewController <NSObject>
- (void)navigateToBottomAnimated:(BOOL)arg1;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(BOOL)arg3;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 refetchIfNeeded:(BOOL)arg3 animated:(BOOL)arg4;
- (void)navigateToRevealPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(BOOL)arg3;
@end

