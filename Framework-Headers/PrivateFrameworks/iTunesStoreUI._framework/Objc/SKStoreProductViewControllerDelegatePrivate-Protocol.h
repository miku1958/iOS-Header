//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SKStoreProductViewControllerDelegate-Protocol.h>

@class SKStorePageRequest, SKStoreProductViewController;

@protocol SKStoreProductViewControllerDelegatePrivate <SKStoreProductViewControllerDelegate>

@optional
- (void)productViewController:(SKStoreProductViewController *)arg1 didFinishWithResult:(long long)arg2;
- (void)productViewController:(SKStoreProductViewController *)arg1 presentProductWithRequest:(SKStorePageRequest *)arg2 animated:(BOOL)arg3;
@end
