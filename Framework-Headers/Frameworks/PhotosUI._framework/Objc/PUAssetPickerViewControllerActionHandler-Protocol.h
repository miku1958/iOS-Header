//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAsset, PHAssetCollection, UIViewController;

@protocol PUAssetPickerViewControllerActionHandler <NSObject>
- (BOOL)viewController:(UIViewController *)arg1 didSelectAsset:(PHAsset *)arg2;
- (void)viewController:(UIViewController *)arg1 didSelectAssetCollection:(PHAssetCollection *)arg2;
@end
