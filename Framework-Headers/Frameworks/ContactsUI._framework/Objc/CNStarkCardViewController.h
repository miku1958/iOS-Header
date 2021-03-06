//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactContentViewControllerDelegate-Protocol.h>

@class CNAvatarViewController, CNContact, CNStarkActionsController, CNStarkContactInfoViewController, NSArray, NSString, UILayoutGuide;

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate>
{
    CNAvatarViewController *_avatarViewController;
    CNStarkContactInfoViewController *_contactInfoViewController;
    CNStarkActionsController *_actionsController;
    CNContact *_contact;
    NSArray *_displayedContactProperties;
    NSArray *_layoutConstraints;
    UILayoutGuide *_centeringLayoutGuide;
    UILayoutGuide *_avatarAndDetailsLayoutGuide;
}

@property (readonly, nonatomic) CNStarkActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property (strong, nonatomic) UILayoutGuide *avatarAndDetailsLayoutGuide; // @synthesize avatarAndDetailsLayoutGuide=_avatarAndDetailsLayoutGuide;
@property (readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property (strong, nonatomic) UILayoutGuide *centeringLayoutGuide; // @synthesize centeringLayoutGuide=_centeringLayoutGuide;
@property (readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) CNStarkContactInfoViewController *contactInfoViewController; // @synthesize contactInfoViewController=_contactInfoViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedContactProperties; // @synthesize displayedContactProperties=_displayedContactProperties;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (id)starkCardControllerForCalendarEventWithContact:(id)arg1;
- (void).cxx_destruct;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupLayoutGuides;
- (void)setupViewControllers;
- (void)showMore:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateNavigationItems;
- (void)updateViewConstraints;
- (void)updateViewControllers;
- (void)viewDidLoad;

@end

