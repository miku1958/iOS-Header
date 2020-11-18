//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/AAUIFamilySetupDelegate-Protocol.h>
#import <StoreKitUI/SKUIComposeReviewDelegate-Protocol.h>
#import <StoreKitUI/SKUIGiftViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIModalDocumentController-Protocol.h>
#import <StoreKitUI/SKUIOverlayContainerDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIOverlayContainerViewController, SKUIReportAConcernViewController, SKUIStoreDialogController, UINavigationController, UIPopoverController, UIViewController;
@protocol SKUIModalDocumentDataSource, SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, UINavigationControllerDelegate;

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKUIComposeReviewDelegate, SKUIGiftViewControllerDelegate, SKUIModalDocumentController, SKUIOverlayContainerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    SKUIClientContext *_clientContext;
    NSMutableArray *_composeReviewViewControllers;
    id<SKUIModalDocumentDelegate> _delegate;
    SKUIStoreDialogController *_dialogController;
    SKUIReportAConcernViewController *_reportAConcernViewController;
    NSMutableArray *_giftViewControllers;
    id<SKUIModalSourceViewProvider> _modalSourceViewProvider;
    UINavigationController *_overlayNavigationController;
    SKUIOverlayContainerViewController *_overlayViewController;
    id<UINavigationControllerDelegate> _navigationControllerDelegate;
    UIPopoverController *_popoverController;
    UIViewController *_rootViewController;
    NSMutableArray *_stackItems;
    id<SKUIModalDocumentDataSource> _dataSource;
}

@property (readonly, nonatomic) UINavigationController *_overlayNavigationController;
@property (readonly, nonatomic) SKUIOverlayContainerViewController *_overlayViewController;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (weak, nonatomic) id<SKUIModalDocumentDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIModalDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *documents;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<SKUIModalSourceViewProvider> modalSourceViewProvider; // @synthesize modalSourceViewProvider=_modalSourceViewProvider;
@property (weak, nonatomic) id<UINavigationControllerDelegate> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
@property (strong, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect)_centerRect:(id)arg1 adjust:(BOOL)arg2;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (void)_dismissOverlayControllerWithStackItem:(id)arg1 animated:(BOOL)arg2;
- (void)_garbageCollectActivityViewController:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1;
- (id)_modalSourceViewProviderFromStackItems;
- (void)_overlayControllerBackstopAction:(id)arg1;
- (id)_overlayStackItems;
- (void)_popDocument:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_popDocumentSkippingUserInterfaceUpdates;
- (void)_popOverlayStackItem:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_popPopoverStackItem:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_popoverController:(id)arg1 containsStackItem:(id)arg2;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_presentOverlayViewControllersFromNavigationController:(id)arg1;
- (id)_presenterViewController;
- (void)_presetPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3;
- (void)_promptForStarRating:(id)arg1;
- (void)_pushCharityDocument:(id)arg1 options:(id)arg2;
- (void)_pushDialogDocument:(id)arg1 options:(id)arg2;
- (void)_pushFamilySetupDocument:(id)arg1 options:(id)arg2;
- (void)_pushGiftDocument:(id)arg1 options:(id)arg2;
- (void)_pushOverlayStackItem:(id)arg1;
- (void)_pushPlaylistDocument:(id)arg1 options:(id)arg2;
- (void)_pushPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3 options:(id)arg4;
- (void)_pushPopoverStackItem:(id)arg1;
- (void)_pushRedeemDocument:(id)arg1 options:(id)arg2;
- (void)_pushSheetDocument:(id)arg1 viewController:(id)arg2;
- (void)_pushSheetStackItem:(id)arg1;
- (void)_sendDidFinishIfApplicable;
- (id)_showOverlayContainerViewController;
- (void)_unloadDocumentForPopoverController:(id)arg1;
- (void)_unloadDocumentForViewController:(id)arg1;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didSubmitWithEdit:(BOOL)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (BOOL)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)ensureOverlayNavigationControllerStackConsistencyForNavigationController:(id)arg1;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (id)init;
- (id)navigationDocumentForDocument:(id)arg1;
- (id)navigationDocumentForNavigationController:(id)arg1;
- (void)overlayContainerViewController:(id)arg1 willPopViewController:(id)arg2;
- (void)popAllDocuments;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentOverlayViewControllersFromNavigationController:(id)arg1;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setOverlayNavigationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)unloadDocumentForViewController:(id)arg1;

@end

