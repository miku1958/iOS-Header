//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/CNUIObjectViewControllerDelegate-Protocol.h>
#import <PassKitUI/MFMessageComposeViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>

@class CNAvatarViewControllerSettings, NSArray, NSString, PKPeerPaymentContactResolver, UIRefreshControl;

@interface PKActivityViewController : PKSectionTableViewController <CNUIObjectViewControllerDelegate, MFMessageComposeViewControllerDelegate, PKPeerPaymentContactResolverDelegate>
{
    UIRefreshControl *_refreshControl;
    BOOL _refreshing;
    BOOL _visible;
    NSArray *_events;
    PKPeerPaymentContactResolver *_contactResolver;
    CNAvatarViewControllerSettings *_avatarViewControllerSettings;
}

@property (strong, nonatomic) CNAvatarViewControllerSettings *avatarViewControllerSettings; // @synthesize avatarViewControllerSettings=_avatarViewControllerSettings;
@property (strong, nonatomic) PKPeerPaymentContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *events; // @synthesize events=_events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canCreatePeerPaymentMessage;
- (id)_contactKeysToFetch;
- (id)_detailViewControllerForPeerPaymentTransactionEvent:(id)arg1;
- (void)_didSelectEvent:(id)arg1;
- (void)_displayPeerPaymentComposeSheet;
- (id)_fetchEventsAndIncludeAdditionalEvents:(BOOL)arg1;
- (void)_handleMessageComposeAvailabilityDidChangeNotification:(id)arg1;
- (double)_heightForRowWithEvent:(id)arg1;
- (void)_mergeEvents:(id)arg1;
- (id)_mockPeerPaymentTransactionWithIdentifier:(id)arg1 amount:(id)arg2 currency:(id)arg3 counterpartHandle:(id)arg4 memo:(id)arg5 date:(id)arg6;
- (id)_tableViewCellForEvent:(id)arg1;
- (id)_tableViewCellForPeerPaymentTransaction:(id)arg1;
- (void)_updateCell:(id)arg1 withHandle:(id)arg2 contact:(id)arg3;
- (void)_updateCreatePeerPaymentNavigationBarItem;
- (void)_updateRefreshControl;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)hostingViewControllerForController:(id)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;
- (void)loadView;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)refresh:(id)arg1;
- (BOOL)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)title;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

