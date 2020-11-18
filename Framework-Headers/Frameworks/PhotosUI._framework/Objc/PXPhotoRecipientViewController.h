//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/CNContactPickerDelegate-Protocol.h>
#import <PhotosUICore/PXComposeRecipientViewDelegate-Protocol.h>
#import <PhotosUICore/PXSearchRecipientControllerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CNContactPickerViewController, NSArray, NSLayoutConstraint, NSString, PXComposeRecipientView, PXRecipientSearchDataSourceManager, PXSearchRecipientController, UIBarButtonItem;
@protocol PXPhotoRecipientViewControllerDelegate;

@interface PXPhotoRecipientViewController : UIViewController <PXSearchRecipientControllerDelegate, PXComposeRecipientViewDelegate, UIPopoverPresentationControllerDelegate, CNContactPickerDelegate>
{
    NSLayoutConstraint *_recipientViewHeightConstraint;
    UIBarButtonItem *_addButton;
    id<PXPhotoRecipientViewControllerDelegate> _delegate;
    NSString *_fieldLabel;
    long long _maxRecipients;
    NSString *_initialLocalizedNameToQuery;
    CNContactPickerViewController *_contactPickerViewController;
    PXSearchRecipientController *_searchRecipientController;
    PXRecipientSearchDataSourceManager *_searchDataSourceManager;
    PXComposeRecipientView *_composeRecipientView;
    NSArray *_layoutConstraints;
}

@property (strong, nonatomic) PXComposeRecipientView *composeRecipientView; // @synthesize composeRecipientView=_composeRecipientView;
@property (strong, nonatomic) CNContactPickerViewController *contactPickerViewController; // @synthesize contactPickerViewController=_contactPickerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotoRecipientViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *initialLocalizedNameToQuery; // @synthesize initialLocalizedNameToQuery=_initialLocalizedNameToQuery;
@property (strong, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property (readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager; // @synthesize searchDataSourceManager=_searchDataSourceManager;
@property (strong, nonatomic) PXSearchRecipientController *searchRecipientController; // @synthesize searchRecipientController=_searchRecipientController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInitialization;
- (void)_contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)_dismissContactPickerViewController;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_presentContactPickerViewController:(id)arg1;
- (void)_updateAddButton;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialLocalizedNameToQuery:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)searchRecipientController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
