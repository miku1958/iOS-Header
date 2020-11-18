//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIAlertControllerContaining-Protocol.h>
#import <UIKit/_UIDocumentPickerRemoteViewControllerContaining-Protocol.h>

@class NSMutableArray, NSString, NSURL, UIAlertController, _UIDocumentPickerRemoteViewController, _UIResilientRemoteViewContainerViewController;
@protocol UIDocumentMenuDelegate;

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIAlertControllerContaining>
{
    id<UIDocumentMenuDelegate> _weak_delegate;
    BOOL _ignoreApplicationEntitlementForImport;
    BOOL _dismissDelegateCalled;
    id<UIDocumentMenuDelegate> _delegate;
    NSMutableArray *_auxiliaryOptions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    UIAlertController *_alertController;
    unsigned long long _documentPickerMode;
    NSURL *_uploadURL;
}

@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) BOOL _ignoreApplicationEntitlementForImport; // @synthesize _ignoreApplicationEntitlementForImport;
@property (strong, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (strong, nonatomic) NSMutableArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property (strong, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIDocumentMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissDelegateCalled; // @synthesize dismissDelegateCalled=_dismissDelegateCalled;
@property (nonatomic) unsigned long long documentPickerMode; // @synthesize documentPickerMode=_documentPickerMode;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic, getter=_remoteViewController) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;

- (void).cxx_destruct;
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;
- (id)_containedAlertController;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (BOOL)_requiresCustomPresentationController;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;

@end

