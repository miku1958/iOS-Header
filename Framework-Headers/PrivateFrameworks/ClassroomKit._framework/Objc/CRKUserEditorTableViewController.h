//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ClassroomKit/CRKSwitchTableViewCellDelegate-Protocol.h>

@class CRKUser, NSString;
@protocol CRKUserEditorTableViewControllerDelegate;

@interface CRKUserEditorTableViewController : UITableViewController <CRKSwitchTableViewCellDelegate>
{
    CRKUser *mMeCardUser;
    BOOL mUseMeCardUser;
    long long mNumberOfSections;
    long long mMeCardSwitchCellSection;
    long long mUserCellSection;
    BOOL _showsPhoneticName;
    BOOL _showsFamilyNameName;
    id<CRKUserEditorTableViewControllerDelegate> _delegate;
    CRKUser *_user;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKUserEditorTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL showsFamilyNameName; // @synthesize showsFamilyNameName=_showsFamilyNameName;
@property (nonatomic) BOOL showsPhoneticName; // @synthesize showsPhoneticName=_showsPhoneticName;
@property (readonly) Class superclass;
@property (strong, nonatomic) CRKUser *user; // @synthesize user=_user;

- (void).cxx_destruct;
- (void)editorTextFieldDidChange:(id)arg1;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchCellValueDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTableView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

