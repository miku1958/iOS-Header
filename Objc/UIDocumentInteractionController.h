//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/QLPreviewControllerDelegate-Protocol.h>
#import <UIKit/UIActionSheetDelegate-Protocol.h>
#import <UIKit/_UIDICActivityViewControllerDelegate-Protocol.h>

@class NSArray, NSString, NSURL, QLPreviewController, UIBarButtonItem, UIPopoverController, UIView, UIViewController, _UIDICActivityViewController, _UIDICPreviewItem;
@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <QLPreviewControllerDelegate, _UIDICActivityViewControllerDelegate, UIActionSheetDelegate>
{
    NSArray *_gestureRecognizers;
    NSArray *_icons;
    QLPreviewController *_previewController;
    UIViewController *_presentingViewController;
    struct CGRect _presentRect;
    UIView *_presentView;
    UIBarButtonItem *_presentItem;
    NSURL *_tmpURLToDeleteOnDealloc;
    NSURL *_decompressedArchiveDocumentURL;
    BOOL _shouldDecompressArchiveIfNecessary;
    struct {
        unsigned int delegateViewControllerForPreview:1;
        unsigned int delegateRectForPreview:1;
        unsigned int delegateViewForPreview:1;
        unsigned int delegateWillBeginPreview:1;
        unsigned int delegateDidEndPreviewPreview:1;
        unsigned int delegateWillPresentOptionsMenu:1;
        unsigned int delegateDidDismissOptionsMenu:1;
        unsigned int delegateWillPresentOpenInMenu:1;
        unsigned int delegateDidDismissOpenInMenu:1;
        unsigned int delegateWillBeginSendingToApplication:1;
        unsigned int delegateDidEndSendingToApplication:1;
        unsigned int delegateCanPerformAction:1;
        unsigned int delegatePerformAction:1;
        unsigned int delegateArchiveDecompressionRootURL:1;
        unsigned int delegateExcludesActivities:1;
        unsigned int delegateAddsActivities:1;
        unsigned int delegateProvidesActivityItem:1;
        unsigned int delegateProvidesPrintInfo:1;
        unsigned int transitionImageForPreview:1;
        unsigned int documentProxyForPreview:1;
        unsigned int showingOptionsMenu:1;
        unsigned int showingOpenInMenu:1;
    } _documentInteractionControllerFlags;
    BOOL _sourceIsManaged;
    BOOL _previewsPresentWithMarkup;
    BOOL _excludeDotFilesFromArchiveListings;
    id<UIDocumentInteractionControllerDelegate> _delegate;
    _UIDICPreviewItem *_previewControllerItem;
    id _annotation;
    CDUnknownBlockType _completionWithItemsHandler;
    _UIDICActivityViewController *_activityViewController;
    UIPopoverController *_popoverController;
    NSString *_uniqueIdentifier;
}

@property (strong) NSURL *URL;
@property (copy, nonatomic) NSString *UTI;
@property (copy, nonatomic, getter=_completionWithItemsHandler, setter=_setCompletionWithItemsHandler:) CDUnknownBlockType _completionWithItemsHandler; // @synthesize _completionWithItemsHandler;
@property (strong, nonatomic) _UIDICActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property (strong, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property (readonly, nonatomic, getter=isArchive) BOOL archive;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL excludeDotFilesFromArchiveListings; // @synthesize excludeDotFilesFromArchiveListings=_excludeDotFilesFromArchiveListings;
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *icons;
@property (copy) NSString *name;
@property (strong, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property (readonly, nonatomic) QLPreviewController *previewController;
@property (readonly, nonatomic) _UIDICPreviewItem *previewControllerItem; // @synthesize previewControllerItem=_previewControllerItem;
@property (nonatomic) BOOL previewsPresentWithMarkup; // @synthesize previewsPresentWithMarkup=_previewsPresentWithMarkup;
@property (nonatomic) BOOL shouldUnzipDocument;
@property (nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)_UTIForFileURL:(id)arg1;
+ (id)_archiveDecompressQueue;
+ (id)interactionControllerWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)__decompressArchiveAndSetupPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)__openUsingDefaultCopyMechanismToTransferDocumentToApplication:(id)arg1;
- (void)__openUsingInPlaceMechanismToTransferDocumentToApplication:(id)arg1;
- (void)__performLaunchServiceDocumentOpenWithApplication:(id)arg1 launchServiceOptions:(id)arg2;
- (BOOL)__presentPreviewAnimated:(BOOL)arg1;
- (unsigned long long)_archiveExtractionOptions;
- (BOOL)_canPreviewDecompressedArchive;
- (BOOL)_canSaveToCameraRollForType;
- (void)_clearPreviousPresentationContext;
- (void)_decompressArchiveAndSetupPayload:(CDUnknownBlockType)arg1;
- (id)_decompressedArchiveDocumentURL;
- (id)_defaultApplication;
- (BOOL)_delegateCanPerformAction:(SEL)arg1;
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id *)arg1;
- (BOOL)_delegateImplementsLegacyActions;
- (BOOL)_delegatePerformAction:(SEL)arg1;
- (void)_dismissEverythingWithExtremePrejudiceAnimated:(BOOL)arg1;
- (BOOL)_documentNeedsHelpDecompressingArchiveForPreview;
- (id)_documentProxy;
- (id)_documentProxySourceIsManaged:(BOOL)arg1;
- (void)_fixupFileExtensionIfNeeded;
- (void)_invalidate;
- (void)_invokeDelegateDidFinishOpenWithApplicationIdentifier:(id)arg1;
- (void)_invokeDelegateWillBeginOpenWithApplicationIdentifier:(id)arg1;
- (BOOL)_isFilenameValidForDecompressing:(id)arg1 allowsPreviewingArchive:(BOOL)arg2;
- (BOOL)_isImage;
- (BOOL)_isPackageArchive:(id)arg1;
- (BOOL)_isValidURL:(id)arg1;
- (id)_newActivityIfNecessaryForLegacyActionDelegatingWithAction:(SEL)arg1;
- (id)_newPreviewActivity;
- (void)_openDocumentInPlaceWithApplication:(id)arg1;
- (void)_openDocumentWithApplication:(id)arg1;
- (id)_pathsInArchive:(CDUnknownBlockType)arg1;
- (id)_preferredApplicationForDocumentOpening;
- (id)_preparedActivityViewControllerWithItems:(id)arg1 activities:(id)arg2 options:(unsigned long long)arg3;
- (BOOL)_presentOpenInMenuAnimated:(BOOL)arg1 willPresentBlock:(CDUnknownBlockType)arg2;
- (void)_presentOptionsMenu:(id)arg1;
- (BOOL)_presentOptionsMenuAnimated:(BOOL)arg1 willPresentBlock:(CDUnknownBlockType)arg2;
- (void)_presentPreview:(id)arg1;
- (void)_setDecompressedArchiveDocumentURL:(id)arg1;
- (BOOL)_setupForOpenInMenu;
- (BOOL)_setupForOptionsMenu;
- (BOOL)_setupPreviewController;
- (BOOL)_shouldAutoDecompressIfArchive;
- (BOOL)_shouldAutoDecompressIfArchiveForPreview;
- (BOOL)_shouldIncludeActivityForLegacyDelegatingWithAction:(SEL)arg1;
- (BOOL)_shouldIncludePreviewActivity;
- (BOOL)_shouldReturnDefaultApplication;
- (void)_updateURLSourceIsManaged;
- (void)activityViewController:(id)arg1 didFinishPerformingActivityType:(id)arg2 completed:(BOOL)arg3 items:(id)arg4 error:(id)arg5;
- (void)activityViewController:(id)arg1 didFinishPresentingActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 mailSubjectForActivityType:(id)arg2;
- (void)activityViewController:(id)arg1 openActivityDidEndSendingToApplication:(id)arg2;
- (void)activityViewController:(id)arg1 openActivityWillBeginSendingToApplication:(id)arg2;
- (void)dealloc;
- (id)dismissActionsForPreviewController:(id)arg1;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (void)dismissPreviewAnimated:(BOOL)arg1;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (id)extractSubitemFromArchive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1;
- (void)markupAction:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)openDocumentWithDefaultApplication;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentOpenInMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentOptionsMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentPreviewAnimated:(BOOL)arg1;
- (id)presentingNavigationController;
- (BOOL)previewController:(id)arg1 canEditItem:(id)arg2;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (BOOL)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)setPreviewURLOverride:(id)arg1;
- (id)subitemsInArchive:(CDUnknownBlockType)arg1;

@end

