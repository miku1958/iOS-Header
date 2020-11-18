//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class CNContact, CNContactStore, NSLayoutConstraint, OBBoldTrayButton;

@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController
{
    OBBoldTrayButton *_confirmButton;
    CNContactStore *_contactStore;
    CNContact *_contact;
    NSLayoutConstraint *_tableViewHeightConstraint;
}

@property (strong, nonatomic) OBBoldTrayButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;

+ (id)headerText;
- (void).cxx_destruct;
- (id)confirmButtonTitle;
- (void)didTapDoneButton:(id)arg1;
- (void)handleConfirmButtonTapped;
- (void)updateForContentSizeCategoryChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
