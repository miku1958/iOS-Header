//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/TVInterfaceCreating-Protocol.h>

@class IKViewElement, NSString, NSURL, TVImageLayout, TVImageProxy, TVViewElement, UINavigationController, UIView, UIViewController;

@protocol _TVInterfaceCreatingPrivate <TVInterfaceCreating>

@optional
- (Class)_collectionViewCellClassForIKElement:(IKViewElement *)arg1;
- (TVImageProxy *)_imageProxyForElement:(TVViewElement *)arg1;
- (TVImageProxy *)_imageProxyForIKElement:(IKViewElement *)arg1 withLayout:(TVImageLayout *)arg2;
- (UINavigationController *)_navigationControllerForTabIdentifier:(NSString *)arg1;
- (void)_parseAppConfigurationForElement:(TVViewElement *)arg1;
- (void)_parseAppConfigurationForIKElement:(IKViewElement *)arg1;
- (NSURL *)_styleSheetURLForTemplate:(NSString *)arg1;
- (UIViewController *)_viewControllerForIKElement:(IKViewElement *)arg1 existingViewController:(UIViewController *)arg2;
- (UIView *)_viewForIKElement:(IKViewElement *)arg1 existingView:(UIView *)arg2;
@end

