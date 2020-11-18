//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactViewHostProtocol-Protocol.h>

@class CNContact, CNContactContentViewController, CNContactFormatter, CNContactStore, CNContainer, CNGroup, CNPolicy, NSArray, NSString, UIView, _UIAccessDeniedView;
@protocol CNContactContentViewController, CNContactViewControllerDelegate, CNContactViewControllerPPTDelegate, CNContactViewControllerPrivateDelegate;

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol>
{
    void *_addressBook;
    long long _mode;
    BOOL _ignoreViewWillBePresented;
    BOOL _shouldShowLinkedContacts;
    BOOL _highlightedPropertyImportant;
    BOOL _requiresSetup;
    BOOL _showingMeContact;
    CNContact *_contact;
    NSArray *_displayedPropertyKeys;
    id<CNContactViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNGroup *_parentGroup;
    CNContainer *_parentContainer;
    NSString *_alternateName;
    NSString *_message;
    CNContact *_contentContact;
    CNContactContentViewController *_contentViewController;
    _UIAccessDeniedView *_accessDeniedView;
    NSString *_highlightedPropertyKey;
    NSString *_highlightedPropertyIdentifier;
    NSArray *_extraBarButtonItems;
    NSArray *_preEditLeftBarButtonItems;
    UIViewController<CNContactContentViewController> *_viewController;
    CNPolicy *_policy;
    CNContact *_additionalContact;
    id<CNContactViewControllerPPTDelegate> _pptDelegate;
    long long _displayMode;
    long long _editMode;
    long long _actions;
    CNContactFormatter *_contactFormatter;
    NSString *_primaryPropertyKey;
    UIView *_contactHeaderView;
    UIViewController *_contactHeaderViewController;
}

@property (readonly, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property (nonatomic) long long actions; // @synthesize actions=_actions;
@property (strong, nonatomic) CNContact *additionalContact; // @synthesize additionalContact=_additionalContact;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic) BOOL allowsEditing;
@property (copy, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (strong, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property (strong, nonatomic) UIView *contactHeaderView; // @synthesize contactHeaderView=_contactHeaderView;
@property (strong, nonatomic) UIViewController *contactHeaderViewController; // @synthesize contactHeaderViewController=_contactHeaderViewController;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) CNContact *contentContact; // @synthesize contentContact=_contentContact;
@property (strong, nonatomic) CNContactContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property (copy, nonatomic) NSArray *displayedPropertyKeys; // @synthesize displayedPropertyKeys=_displayedPropertyKeys;
@property (nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property (strong, nonatomic) NSArray *extraBarButtonItems; // @synthesize extraBarButtonItems=_extraBarButtonItems;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *highlightedPropertyIdentifier; // @synthesize highlightedPropertyIdentifier=_highlightedPropertyIdentifier;
@property (nonatomic) BOOL highlightedPropertyImportant; // @synthesize highlightedPropertyImportant=_highlightedPropertyImportant;
@property (strong, nonatomic) NSString *highlightedPropertyKey; // @synthesize highlightedPropertyKey=_highlightedPropertyKey;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) CNContainer *parentContainer; // @synthesize parentContainer=_parentContainer;
@property (strong, nonatomic) CNGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property (readonly, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property (weak, nonatomic) id<CNContactViewControllerPPTDelegate> pptDelegate; // @synthesize pptDelegate=_pptDelegate;
@property (strong, nonatomic) NSArray *preEditLeftBarButtonItems; // @synthesize preEditLeftBarButtonItems=_preEditLeftBarButtonItems;
@property (strong, nonatomic) NSString *primaryPropertyKey; // @synthesize primaryPropertyKey=_primaryPropertyKey;
@property (readonly, nonatomic) id<CNContactViewControllerPrivateDelegate> privateDelegate;
@property (nonatomic) BOOL requiresSetup; // @synthesize requiresSetup=_requiresSetup;
@property (nonatomic) BOOL shouldShowLinkedContacts; // @synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts;
@property (nonatomic) BOOL showingMeContact; // @synthesize showingMeContact=_showingMeContact;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIViewController<CNContactContentViewController> *viewController; // @synthesize viewController=_viewController;

+ (id)descriptorForRequiredKeys;
+ (id)viewControllerForContact:(id)arg1;
+ (id)viewControllerForNewContact:(id)arg1;
+ (id)viewControllerForUnknownContact:(id)arg1;
+ (id)viewControllerForUpdatingContact:(id)arg1 withPropertiesFromContact:(id)arg2;
- (void).cxx_destruct;
- (id)_contactPresentedViewController;
- (void)_endDelayingPresentation;
- (BOOL)_isDelayingPresentation;
- (void)_prepareViewController;
- (id)_primaryPropertyStringForContact:(id)arg1;
- (void)_setViewController:(id)arg1;
- (void)_setupViewController;
- (BOOL)_shouldBeOutOfProcess;
- (void)_viewWillBePresented;
- (void)configureNavigationItem:(id)arg1;
- (void)dealloc;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)editCancel:(id)arg1;
- (void)enableCancelKeyboardShortcut;
- (void)enableSaveKeyboardShortcut;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(BOOL)arg3;
- (id)initWithMode:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)isPresentingEditingController:(BOOL)arg1;
- (void)isPresentingFullscreen:(BOOL)arg1;
- (void)loadView;
- (id)navigationItemController;
- (void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3;
- (void)setDoneButtonText:(id)arg1 enabled:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)toggleEditing:(id)arg1;
- (void)updateEditNavigationItemsAnimated:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3;
- (void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3;
- (void)viewDidAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

