//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class APUILongLookViewController, NSArray, NSString, UIImage;

@protocol APUILongLookViewControllerDataSource
- (UIImage *)appIconImageForLongLook:(APUILongLookViewController *)arg1;
- (NSString *)bundleIdentifierForAppIconInLongLook:(APUILongLookViewController *)arg1;
- (BOOL)fetchViewControllerForContentViewInLongLook:(APUILongLookViewController *)arg1 completion:(void (^)(UIViewController *))arg2;
- (NSArray *)interfaceActionsForLongLook:(APUILongLookViewController *)arg1;
- (double)preferredContentHeightForLongLook:(APUILongLookViewController *)arg1;
- (NSString *)titleForLongLookHeaderInLongLook:(APUILongLookViewController *)arg1;
@end

