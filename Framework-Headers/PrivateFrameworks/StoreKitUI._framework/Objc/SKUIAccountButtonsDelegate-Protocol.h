//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIAccountButtonsViewController;

@protocol SKUIAccountButtonsDelegate <NSObject>

@optional
- (void)accountButtonsViewControllerDidSignIn:(SKUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidSignOut:(SKUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidTapECommerceLink:(SKUIAccountButtonsViewController *)arg1;
@end

