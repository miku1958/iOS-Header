//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <VideoSubscriberAccountUI/UISearchControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderPickerViewController-Protocol.h>
#import <VideoSubscriberAccountUI/VSTableHeaderFooterViewDelegate-Protocol.h>

@class NSArray, NSString, UISearchController, VSFontCenter, VSIdentityProvider, VSIdentityProviderFilter, VSIdentityProviderTableViewDataSource, VSOnboardingInfoCenter, VSSearchBarDelegate;
@protocol VSIdentityProviderPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <UISearchControllerDelegate, VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController>
{
    BOOL _cancellationAllowed;
    BOOL _dismissingSearchDueToSelection;
    id<VSIdentityProviderPickerViewControllerDelegate> _delegate;
    NSArray *_identityProviders;
    unsigned long long _additionalProvidersMode;
    NSString *_requestingAppDisplayName;
    NSString *_resourceTitle;
    UISearchController *_searchController;
    VSOnboardingInfoCenter *_onboardingInfoCenter;
    VSIdentityProviderFilter *_filter;
    VSSearchBarDelegate *_searchBarDelegate;
    VSIdentityProviderTableViewDataSource *_unfilteredDataSource;
    VSIdentityProviderTableViewDataSource *_filteredDataSource;
    VSFontCenter *_fontCenter;
    VSIdentityProvider *_selectedIdentityProvider;
}

@property (nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSIdentityProviderPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDismissingSearchDueToSelection) BOOL dismissingSearchDueToSelection; // @synthesize dismissingSearchDueToSelection=_dismissingSearchDueToSelection;
@property (strong, nonatomic) VSIdentityProviderFilter *filter; // @synthesize filter=_filter;
@property (strong, nonatomic) VSIdentityProviderTableViewDataSource *filteredDataSource; // @synthesize filteredDataSource=_filteredDataSource;
@property (strong, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property (strong, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter; // @synthesize onboardingInfoCenter=_onboardingInfoCenter;
@property (copy, nonatomic) NSString *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property (copy, nonatomic) NSString *resourceTitle; // @synthesize resourceTitle=_resourceTitle;
@property (strong, nonatomic) VSSearchBarDelegate *searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
@property (strong, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property (strong, nonatomic) VSIdentityProvider *selectedIdentityProvider; // @synthesize selectedIdentityProvider=_selectedIdentityProvider;
@property (readonly) Class superclass;
@property (strong, nonatomic) VSIdentityProviderTableViewDataSource *unfilteredDataSource; // @synthesize unfilteredDataSource=_unfilteredDataSource;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_didPickAdditionalIdentityProviders;
- (void)_didPickIdentityProvider:(id)arg1;
- (void)_performSelectionForIdentityProvider:(id)arg1;
- (void)_showAboutPrivacy:(id)arg1;
- (id)_titleForTableHeaderView;
- (void)_updateTableHeaderTitle;
- (void)deselectSelectedProviderAnimated:(BOOL)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)titleForTableFooterView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end

