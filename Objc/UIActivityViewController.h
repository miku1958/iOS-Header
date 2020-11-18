//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKit/UIAlertControllerContaining-Protocol.h>
#import <UIKit/UIAlertControllerVisualStyleProviding-Protocol.h>
#import <UIKit/UIViewControllerRestoration-Protocol.h>
#import <UIKit/_UIActivityHelperDelegate-Protocol.h>
#import <UIKit/_UIActivityViewControllerContentControllerDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, UIActivity, UIAlertAction, UIAlertController, _UIActivityHelper, _UIActivityViewControllerContentController, _UIAlertControllerShimPresenter;
@protocol UIActivityViewControllerDelegate;

@interface UIActivityViewController : UIViewController <UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIViewControllerRestoration, UIActionSheetPresentationControllerDelegate, _UIActivityViewControllerContentControllerDelegate, _UIActivityHelperDelegate>
{
    BOOL _willDismissActivityViewController;
    BOOL _performActivityForStateRestoration;
    BOOL _shouldMatchOnlyUserElectedExtensions;
    BOOL _useBlackPopoverStyle;
    BOOL _showKeyboardAutomatically;
    BOOL _allowsEmbedding;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _completionWithItemsHandler;
    NSArray *_excludedActivityTypes;
    long long _originalPopoverBackgroundStyle;
    Class _originalPopoverBackgroundViewClass;
    UIAlertController *_activityAlertController;
    _UIAlertControllerShimPresenter *_activityAlertControllerShimPresenter;
    UIAlertAction *_activityAlertCancelAction;
    CDUnknownBlockType __popoverDismissalAction;
    _UIActivityViewControllerContentController *_contentController;
    _UIActivityHelper *_activityHelper;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    NSOperationQueue *_activityItemProviderOperationQueue;
    NSArray *_activityItemProviderOperations;
    long long _totalProviderCount;
    long long _completedProviderCount;
    unsigned long long _backgroundTaskIdentifier;
    NSString *_subject;
    UIActivity *_activity;
    NSArray *_includedActivityTypes;
    long long _excludedActivityCategories;
    NSArray *_activityTypeOrder;
    NSString *_mailAutosaveIdentifier;
    CDUnknownBlockType _preCompletionHandler;
    id<UIActivityViewControllerDelegate> _airDropDelegate;
    UIViewController *_activityViewController;
}

@property (copy, nonatomic) CDUnknownBlockType _popoverDismissalAction; // @synthesize _popoverDismissalAction=__popoverDismissalAction;
@property (strong, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property (strong, nonatomic) UIAlertAction *activityAlertCancelAction; // @synthesize activityAlertCancelAction=_activityAlertCancelAction;
@property (strong, nonatomic) UIAlertController *activityAlertController; // @synthesize activityAlertController=_activityAlertController;
@property (strong, nonatomic) _UIAlertControllerShimPresenter *activityAlertControllerShimPresenter; // @synthesize activityAlertControllerShimPresenter=_activityAlertControllerShimPresenter;
@property (strong, nonatomic) _UIActivityHelper *activityHelper; // @synthesize activityHelper=_activityHelper;
@property (strong, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // @synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue;
@property (strong, nonatomic) NSArray *activityItemProviderOperations; // @synthesize activityItemProviderOperations=_activityItemProviderOperations;
@property (copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property (copy, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property (strong, nonatomic) UIViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property (weak, nonatomic) id<UIActivityViewControllerDelegate> airDropDelegate; // @synthesize airDropDelegate=_airDropDelegate;
@property (nonatomic) BOOL allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property (copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property (nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property (nonatomic) long long completedProviderCount; // @synthesize completedProviderCount=_completedProviderCount;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy, nonatomic) CDUnknownBlockType completionWithItemsHandler; // @synthesize completionWithItemsHandler=_completionWithItemsHandler;
@property (strong, nonatomic) _UIActivityViewControllerContentController *contentController; // @synthesize contentController=_contentController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissCompletionHandler;
@property (nonatomic) long long excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property (copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property (strong, nonatomic) NSString *mailAutosaveIdentifier; // @synthesize mailAutosaveIdentifier=_mailAutosaveIdentifier;
@property (nonatomic) long long originalPopoverBackgroundStyle; // @synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle;
@property (strong, nonatomic) Class originalPopoverBackgroundViewClass; // @synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass;
@property (nonatomic) BOOL performActivityForStateRestoration; // @synthesize performActivityForStateRestoration=_performActivityForStateRestoration;
@property (copy, nonatomic) CDUnknownBlockType preCompletionHandler; // @synthesize preCompletionHandler=_preCompletionHandler;
@property (nonatomic) BOOL shouldMatchOnlyUserElectedExtensions; // @synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) BOOL showKeyboardAutomatically; // @synthesize showKeyboardAutomatically=_showKeyboardAutomatically;
@property (readonly, nonatomic) BOOL sourceIsManaged;
@property (copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (readonly) Class superclass;
@property (nonatomic) long long totalProviderCount; // @synthesize totalProviderCount=_totalProviderCount;
@property (nonatomic) BOOL useBlackPopoverStyle; // @synthesize useBlackPopoverStyle=_useBlackPopoverStyle;
@property (nonatomic) BOOL willDismissActivityViewController; // @synthesize willDismissActivityViewController=_willDismissActivityViewController;

+ (BOOL)_popoverPresentationUsesModernPresentation;
+ (void)_reloadImageForActivity:(id)arg1;
+ (BOOL)_usesActionSheetPresentationController;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (id)_activityItemValues;
- (id)_availableActivities;
- (id)_availableActivitiesForItems:(id)arg1;
- (id)_availableActivitiesForItems:(id)arg1 applicationExtensionActivities:(id)arg2;
- (id)_availableActivitiesMatchingOnlyUserElectedExtensions:(BOOL)arg1;
- (void)_beginPresentedViewControllerActivityForcedStrongReference;
- (void)_cancel;
- (void)_changeActionButtonToDone;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1 items:(id)arg2 error:(id)arg3;
- (id)_containedAlertController;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (double)_displayHeight;
- (void)_endPresentedViewControllerActivityForcedStrongReference;
- (void)_executeActivity;
- (void)_mailAutosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)_notifyReloadImageForActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_performActivityOfType:(id)arg1;
- (void)_performDismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_placeholderActivityItemValues;
- (void)_prepareActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentUserDefaultsController:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_reloadImageForActivity:(id)arg1;
- (BOOL)_requiresCustomPresentationController;
- (void)_resetAfterActivity:(BOOL)arg1;
- (void)_setDarkStyleOnLegacyApp;
- (void)_setPopoverController:(id)arg1;
- (void)_setupLegacyAlertPresentationControllers;
- (BOOL)_shouldExcludeActivityType:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_updateActivityItems:(id)arg1;
- (void)_updateActivityItems:(id)arg1 animated:(BOOL)arg2;
- (void)_updatePreferredContentSizes;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)didDismissViewController:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setModalPresentationStyle:(long long)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)updateActivities:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

