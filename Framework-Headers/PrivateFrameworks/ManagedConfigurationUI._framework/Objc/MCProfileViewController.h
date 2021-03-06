//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCUITableViewController.h>

@class MCUIProfile;
@protocol MCProfileViewControllerDelegate;

@interface MCProfileViewController : MCUITableViewController
{
    BOOL _installComplete;
    BOOL _profileOffersReenroll;
    BOOL _profileRemovable;
    MCUIProfile *_UIProfile;
    long long _profileViewMode;
    unsigned long long _installProfileSource;
    id<MCProfileViewControllerDelegate> _profileViewControllerDelegate;
}

@property (readonly, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property (nonatomic) BOOL installComplete; // @synthesize installComplete=_installComplete;
@property (nonatomic) unsigned long long installProfileSource; // @synthesize installProfileSource=_installProfileSource;
@property (nonatomic) BOOL profileOffersReenroll; // @synthesize profileOffersReenroll=_profileOffersReenroll;
@property (nonatomic) BOOL profileRemovable; // @synthesize profileRemovable=_profileRemovable;
@property (weak, nonatomic) id<MCProfileViewControllerDelegate> profileViewControllerDelegate; // @synthesize profileViewControllerDelegate=_profileViewControllerDelegate;
@property (nonatomic) long long profileViewMode; // @synthesize profileViewMode=_profileViewMode;

- (void).cxx_destruct;
- (BOOL)_delegateCanRemove;
- (BOOL)_delegateCanUpdate;
- (void)_profileChanged:(id)arg1;
- (void)_removeProfile;
- (void)_setup;
- (BOOL)_shouldShowRemoveButton;
- (BOOL)_shouldShowUpdateButton;
- (BOOL)_showManagedPayloads;
- (void)_updateProfile;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setProfile:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end

