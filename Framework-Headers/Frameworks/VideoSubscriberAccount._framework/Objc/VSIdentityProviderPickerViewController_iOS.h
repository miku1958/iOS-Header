//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <VideoSubscriberAccount/VSIdentityProviderPickerViewController-Protocol.h>
#import <VideoSubscriberAccount/VSTableHeaderFooterViewDelegate-Protocol.h>

@class NSArray, NSString;
@protocol VSIdentityProviderPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController>
{
    BOOL _cancellationAllowed;
    id<VSIdentityProviderPickerViewControllerDelegate> _delegate;
    NSArray *_identityProviders;
    unsigned long long _additionalProvidersMode;
    NSString *_requestingAppDisplayName;
    NSString *_resourceTitle;
}

@property (nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSIdentityProviderPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property (copy, nonatomic) NSString *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property (copy, nonatomic) NSString *resourceTitle; // @synthesize resourceTitle=_resourceTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_accessoryTypeForRowAtIndexPath:(id)arg1;
- (id)_additionalProvidersRowTitle;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;
- (void)_didPickAdditionalIdentityProviders;
- (void)_didPickIdentityProvider:(id)arg1;
- (void)_dismissAboutPrivacy:(id)arg1;
- (id)_identityProviderAtIndex:(unsigned long long)arg1;
- (unsigned long long)_sectionForIndexPath:(id)arg1;
- (void)_showAboutPrivacy:(id)arg1;
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForTableFooterView;
- (id)titleForTableHeaderView;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end
