//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class ISDialog, SUClientInterface, SUPreviewOverlayViewController, SUScriptInterface, SUTabBarController, UIViewController;

@protocol SUClientInterfaceDelegate <NSObject>

@optional
- (void)clientInterface:(SUClientInterface *)arg1 exitStoreWithReason:(long long)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 financeInterruptionResolved:(BOOL)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 overrideCreditCardPresentationFromViewController:(UIViewController *)arg2 completion:(void (^)(SUCreditCardReaderOutput *))arg3;
- (void)clientInterface:(SUClientInterface *)arg1 presentDialog:(ISDialog *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarStyle:(long long)arg2 animated:(BOOL)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterfaceDidFinishLoading:(SUClientInterface *)arg1;
- (SUPreviewOverlayViewController *)previewOverlayForClientInterface:(SUClientInterface *)arg1;
- (void)returnToLibraryForClientInterface:(SUClientInterface *)arg1;
- (SUScriptInterface *)scriptInterfaceForClientInterface:(SUClientInterface *)arg1;
- (SUTabBarController *)tabBarControllerForClientInterface:(SUClientInterface *)arg1;
@end

