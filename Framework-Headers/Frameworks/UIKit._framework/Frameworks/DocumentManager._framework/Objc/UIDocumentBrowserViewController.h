//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentManager/DOCAppearanceProtocol-Protocol.h>
#import <DocumentManager/DOCHostDocumentBrowserViewControllerInterface-Protocol.h>
#import <DocumentManager/DOCKeyCommandResponder-Protocol.h>
#import <DocumentManager/DOCRemoteViewControllerDelegate-Protocol.h>
#import <DocumentManager/DOCViewServiceErrorViewControllerDelegate-Protocol.h>
#import <DocumentManager/NSCoding-Protocol.h>

@class DOCAppearance, DOCConfiguration, DOCDocBrowserVC_UIActivityViewController, NSArray, NSOperationQueue, NSString, UIColor, UIView, _UIResilientRemoteViewContainerViewController;
@protocol DOCServiceBrowserViewControllerProxy, DOCServiceDocumentBrowserViewControllerInterface, UIDocumentBrowserViewControllerDelegate;

@interface UIDocumentBrowserViewController : UIViewController <DOCHostDocumentBrowserViewControllerInterface, DOCRemoteViewControllerDelegate, DOCViewServiceErrorViewControllerDelegate, DOCKeyCommandResponder, DOCAppearanceProtocol, NSCoding>
{
    _UIResilientRemoteViewContainerViewController *_remoteViewController;
    DOCDocBrowserVC_UIActivityViewController *_activityViewController;
    id<DOCServiceBrowserViewControllerProxy> _serviceBrowserProxy;
    id<DOCServiceDocumentBrowserViewControllerInterface> _serviceProxy;
    NSOperationQueue *_serviceQueue;
    BOOL _isDisplayingRemoteViewController;
    UIView *_trackingViewsContainer;
    BOOL _allowsDocumentCreation;
    BOOL _allowsPickingMultipleItems;
    BOOL _shouldDelayRemoteViewController;
    id<UIDocumentBrowserViewControllerDelegate> _delegate;
    NSArray *_additionalLeadingNavigationBarButtonItems;
    NSArray *_additionalTrailingNavigationBarButtonItems;
    NSArray *_customActions;
    NSArray *_leadingBarButtonTrackingViews;
    NSArray *_trailingBarButtonTrackingViews;
    NSArray *_remoteAdditionalLeadingNavigationBarButtonItems;
    NSArray *_remoteAdditionalTrailingNavigationBarButtonItems;
    DOCConfiguration *_configuration;
    DOCAppearance *_appearance;
    UIColor *_createButtonColor;
    UIColor *_badgeTintColor;
    UIColor *_inBrowserTintColor;
    UIColor *_sortingBackgroundColor;
    UIColor *_backgroundColor;
    UIColor *_itemTitleColor;
    UIColor *_itemSubtitleColor;
}

@property (strong, nonatomic) NSArray *additionalLeadingNavigationBarButtonItems; // @synthesize additionalLeadingNavigationBarButtonItems=_additionalLeadingNavigationBarButtonItems;
@property (strong, nonatomic) NSArray *additionalToolbarButtonItems; // @dynamic additionalToolbarButtonItems;
@property (strong, nonatomic) NSArray *additionalTrailingNavigationBarButtonItems; // @synthesize additionalTrailingNavigationBarButtonItems=_additionalTrailingNavigationBarButtonItems;
@property (readonly, copy, nonatomic) NSArray *allowedContentTypes;
@property (nonatomic) BOOL allowsDocumentCreation; // @synthesize allowsDocumentCreation=_allowsDocumentCreation;
@property (nonatomic) BOOL allowsPickingMultipleItems; // @synthesize allowsPickingMultipleItems=_allowsPickingMultipleItems;
@property (readonly, nonatomic) DOCAppearance *appearance; // @synthesize appearance=_appearance;
@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (copy, nonatomic) UIColor *badgeTintColor; // @synthesize badgeTintColor=_badgeTintColor;
@property (nonatomic) unsigned long long browserUserInterfaceStyle; // @dynamic browserUserInterfaceStyle;
@property (strong, nonatomic) DOCConfiguration *configuration; // @synthesize configuration=_configuration;
@property (nonatomic) double createButtonAspectRatio;
@property (copy, nonatomic) UIColor *createButtonColor; // @synthesize createButtonColor=_createButtonColor;
@property (copy, nonatomic) NSString *createButtonTitle;
@property (strong, nonatomic) NSArray *customActions; // @synthesize customActions=_customActions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIDocumentBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) UIColor *inBrowserTintColor; // @synthesize inBrowserTintColor=_inBrowserTintColor;
@property (copy, nonatomic) UIColor *itemSubtitleColor; // @synthesize itemSubtitleColor=_itemSubtitleColor;
@property (copy, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property (strong, nonatomic) NSArray *leadingBarButtonTrackingViews; // @synthesize leadingBarButtonTrackingViews=_leadingBarButtonTrackingViews;
@property (strong, nonatomic) NSArray *remoteAdditionalLeadingNavigationBarButtonItems; // @synthesize remoteAdditionalLeadingNavigationBarButtonItems=_remoteAdditionalLeadingNavigationBarButtonItems;
@property (strong, nonatomic) NSArray *remoteAdditionalTrailingNavigationBarButtonItems; // @synthesize remoteAdditionalTrailingNavigationBarButtonItems=_remoteAdditionalTrailingNavigationBarButtonItems;
@property (nonatomic) BOOL shouldDelayRemoteViewController; // @synthesize shouldDelayRemoteViewController=_shouldDelayRemoteViewController;
@property (copy, nonatomic) UIColor *sortingBackgroundColor; // @synthesize sortingBackgroundColor=_sortingBackgroundColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *trailingBarButtonTrackingViews; // @synthesize trailingBarButtonTrackingViews=_trailingBarButtonTrackingViews;

- (void).cxx_destruct;
- (void)__commonInit;
- (void)_clearShownViewControllers;
- (void)_commitDocumentURLPreview:(id)arg1;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_didImportDocumentAtURL:(id)arg1 toDestinationItem:(id)arg2;
- (void)_didPickItems:(id)arg1;
- (void)_didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg1;
- (void)_didTriggerActionWithIdentifier:(id)arg1 onItems:(id)arg2;
- (void)_didTriggerBarButtonWithUUID:(id)arg1;
- (void)_displayActivityControllerWithItems:(id)arg1 popoverTracker:(id)arg2 barButtonItem:(id)arg3;
- (void)_displayRemoteControllerIfNeeded;
- (void)_embedDocumentBrowserViewController;
- (void)_embedViewController:(id)arg1;
- (void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
- (void)_importDocumentAtURL:(id)arg1 neighbourURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_presentActivityViewControllerForItems:(id)arg1 withPopoverTracker:(id)arg2;
- (id)_sandboxingURLWrapperForURL:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
- (void)_showDocumentBrowserViewController:(BOOL)arg1;
- (void)_showErrorViewController;
- (void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2;
- (void)addOperationToServiceQueue:(CDUnknownBlockType)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)clearCurrentOpenInteraction;
- (void)didTapTryAgainInErrorViewController:(id)arg1;
- (void)dismissAllPresentedViewControllers:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)getTrackingViews:(id *)arg1 remoteButtons:(id *)arg2 fromBarButtons:(id)arg3;
- (void)importDocumentAtURL:(id)arg1 byMoving:(BOOL)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)keyCommandWasPerformed:(id)arg1;
- (id)keyCommands;
- (long long)preferredStatusBarStyle;
- (void)prepareDocumentFromURL:(id)arg1 byMoving:(BOOL)arg2 toLocation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)prepareItems:(id)arg1 forMode:(unsigned long long)arg2 usingBookmark:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareItems:(id)arg1 usingBookmark:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)remoteBarButtonForUUID:(id)arg1;
- (void)remoteViewController:(id)arg1 didTerminateViewServiceWithError:(id)arg2;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revealDocumentAtURL:(id)arg1 shouldImport:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)trackingViewForUUID:(id)arg1;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (void)updateAppearance:(id)arg1;
- (void)updateBrowserProxyWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

