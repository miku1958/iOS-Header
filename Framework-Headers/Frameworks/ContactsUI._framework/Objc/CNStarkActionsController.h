//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactQuickActionViewContainer-Protocol.h>
#import <ContactsUI/CNContactQuickActionsControllerDelegate-Protocol.h>
#import <ContactsUI/CNStarkActionViewDelegate-Protocol.h>
#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNContact, CNContactQuickActionsController, CNStarkActionView, NSArray, NSString, UITraitCollection;
@protocol UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkActionsController : UIViewController <CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNStarkActionViewDelegate, UINavigationControllerDelegate>
{
    CNContact *_contact;
    CNContactQuickActionsController *_quickActionsController;
    UIViewController *_disambiguationViewController;
    id<UINavigationControllerDelegate> _phoneNavigationControllerDelegate;
    CNStarkActionView *_messageActionView;
    CNStarkActionView *_callActionView;
    CNStarkActionView *_directionsActionView;
    double _willTransitionToBoundsWidth;
    NSArray *_layoutConstraints;
}

@property (readonly, nonatomic) CNStarkActionView *callActionView; // @synthesize callActionView=_callActionView;
@property (readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNStarkActionView *directionsActionView; // @synthesize directionsActionView=_directionsActionView;
@property (weak, nonatomic) UIViewController *disambiguationViewController; // @synthesize disambiguationViewController=_disambiguationViewController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (readonly, nonatomic) CNStarkActionView *messageActionView; // @synthesize messageActionView=_messageActionView;
@property (weak, nonatomic) id<UINavigationControllerDelegate> phoneNavigationControllerDelegate; // @synthesize phoneNavigationControllerDelegate=_phoneNavigationControllerDelegate;
@property (readonly, nonatomic) CNContactQuickActionsController *quickActionsController; // @synthesize quickActionsController=_quickActionsController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) double willTransitionToBoundsWidth; // @synthesize willTransitionToBoundsWidth=_willTransitionToBoundsWidth;

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (void)actionViewTapped:(id)arg1;
- (void)addForwardingDelegate;
- (void)contactQuickActionsController:(id)arg1 dismissDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (void)contactQuickActionsController:(id)arg1 presentDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (void)forwardDelegateForNavigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)initWithContact:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)removeForwardingDelegate;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViews;
- (void)viewDidLoad;
- (id)viewForActionType:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

