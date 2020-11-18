//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSNumber, NSString, PHAssetCollection, UIViewController;
@protocol NSFastEnumeration, PXGridPresentationNavigationItemDelegate;

@protocol PXGridPresentation <NSObject>

@optional
- (void)createGridViewControllerWithAssets:(id<NSFastEnumeration>)arg1 withTitle:(NSString *)arg2 hideTabBar:(BOOL)arg3 hideSearch:(BOOL)arg4 containerViewController:(UIViewController *)arg5 navigationItemDelegate:(id<PXGridPresentationNavigationItemDelegate>)arg6 andCompletion:(void (^)(UIViewController *))arg7;
- (UIViewController *)createSceneDebugViewControllerWithAssetCollection:(PHAssetCollection *)arg1 sceneIdentifier:(NSNumber *)arg2 hideTabBar:(BOOL)arg3 hideSearch:(BOOL)arg4;
@end
