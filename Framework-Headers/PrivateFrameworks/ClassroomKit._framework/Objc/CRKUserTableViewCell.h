//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

#import <ClassroomKit/CRKUserEditorTableViewControllerDelegate-Protocol.h>
#import <ClassroomKit/UIImagePickerControllerDelegate-Protocol.h>
#import <ClassroomKit/UINavigationControllerDelegate-Protocol.h>
#import <ClassroomKit/UITableViewDataSource-Protocol.h>
#import <ClassroomKit/UITableViewDelegate-Protocol.h>
#import <ClassroomKit/UITextFieldDelegate-Protocol.h>

@class CNAvatarViewController, CNMutableContact, CRKUser, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UITableView, UITextField, UIViewController;
@protocol CRKUserTableViewCellDelegate;

@interface CRKUserTableViewCell : PSTableCell <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CRKUserEditorTableViewControllerDelegate>
{
    long long mGivenNameCellIndex;
    long long mPhoneticGivenNameCellIndex;
    long long mFamilyNameCellIndex;
    long long mPhoneticFamilyNameCellIndex;
    BOOL _showsFamilyNameFirst;
    BOOL _showsPhoneticName;
    BOOL _editingUser;
    BOOL _isObserving;
    BOOL _isPresentingFullScreenView;
    UIViewController *_presentingViewController;
    id<CRKUserTableViewCellDelegate> _delegate;
    CRKUser *_user;
    CNMutableContact *_contact;
    UIImageView *_userImageView;
    CNAvatarViewController *_avatarViewController;
    UILabel *_fullNameLabel;
    UITableView *_editorTableView;
    UIButton *_editButton;
    UIImageView *_screenObservationImageView;
    UITextField *_givenNameTextField;
    UITextField *_phoneticGivenNameTextField;
    UITextField *_familyNameTextField;
    UITextField *_phoneticFamilyNameTextField;
    NSLayoutConstraint *_heightConstraint;
}

@property (strong, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property (strong, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKUserTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property (nonatomic) BOOL editingUser; // @synthesize editingUser=_editingUser;
@property (strong, nonatomic) UITableView *editorTableView; // @synthesize editorTableView=_editorTableView;
@property (weak, nonatomic) UITextField *familyNameTextField; // @synthesize familyNameTextField=_familyNameTextField;
@property (strong, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property (weak, nonatomic) UITextField *givenNameTextField; // @synthesize givenNameTextField=_givenNameTextField;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (nonatomic) BOOL isObserving; // @synthesize isObserving=_isObserving;
@property (nonatomic) BOOL isPresentingFullScreenView; // @synthesize isPresentingFullScreenView=_isPresentingFullScreenView;
@property (weak, nonatomic) UITextField *phoneticFamilyNameTextField; // @synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField;
@property (weak, nonatomic) UITextField *phoneticGivenNameTextField; // @synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong, nonatomic) UIImageView *screenObservationImageView; // @synthesize screenObservationImageView=_screenObservationImageView;
@property (nonatomic) BOOL showsFamilyNameFirst; // @synthesize showsFamilyNameFirst=_showsFamilyNameFirst;
@property (nonatomic) BOOL showsPhoneticName; // @synthesize showsPhoneticName=_showsPhoneticName;
@property (readonly) Class superclass;
@property (strong, nonatomic) CRKUser *user; // @synthesize user=_user;
@property (strong, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;

- (void).cxx_destruct;
- (void)_didPressEditButton:(id)arg1;
- (void)_didTapUserImage:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (id)accessibilityLabel;
- (struct CGRect)aspectFillFrameForViewOfSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (BOOL)becomeFirstResponder;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (long long)indexForTextField:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)makeImagePickerController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)resignFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)textFieldAtIndex:(long long)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateCellAccessory;
- (void)updateCellIndexes;
- (void)updateHeightConstraint;
- (void)updateShouldShowFamilyNameFirstForNameComponents:(id)arg1;
- (void)updateUserImageView;
- (void)userDidChange;
- (void)userEditorTableViewControllerDidFinishEditingUser:(id)arg1;

@end

