//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <VoiceShortcutsUI/VCUICreateVoiceShortcutViewControllerDelegate-Protocol.h>

@class NSArray, NSString, VCUIActionDonationCell;
@protocol VCUIAppGalleryViewControllerDelegate;

@interface VCUIAppGalleryViewController : UITableViewController <VCUICreateVoiceShortcutViewControllerDelegate>
{
    id<VCUIAppGalleryViewControllerDelegate> _delegate;
    NSString *_applicationBundleIdentifier;
    NSString *_query;
    NSArray *_suggestedDonations;
    NSArray *_recentDonations;
    VCUIActionDonationCell *_prototypeCell;
    double _donationCellHeight;
    double _donationWithSubtitleCellHeight;
}

@property (copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VCUIAppGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double donationCellHeight; // @synthesize donationCellHeight=_donationCellHeight;
@property (readonly, nonatomic) double donationWithSubtitleCellHeight; // @synthesize donationWithSubtitleCellHeight=_donationWithSubtitleCellHeight;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VCUIActionDonationCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property (readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property (copy, nonatomic) NSArray *recentDonations; // @synthesize recentDonations=_recentDonations;
@property (copy, nonatomic) NSArray *suggestedDonations; // @synthesize suggestedDonations=_suggestedDonations;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_setSeparatorInsets;
- (double)cellHeightForDonation:(id)arg1;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (id)donationAtIndexPath:(id)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1 query:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setNeedsToComputeDonationCellHeights;
- (void)setupActionDonationCellReuseIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateRecommendedShortcuts;
- (void)viewDidLoad;

@end

