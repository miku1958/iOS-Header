//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UINavigationControllerDelegate-Protocol.h>
#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/UITextFieldDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowViewControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, OBTrayButton, OBWelcomeController, UIBarButtonItem, UINavigationController, UITableView, UIView, WFAutomationSuggestion, WFDatabase, WFTrigger, WFWorkflow, WFWorkflowIcon, WFWorkflowViewController;
@protocol VCUIShortcutViewControllerDelegate;

@interface VCUIShortcutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UINavigationControllerDelegate, WFWorkflowViewControllerDelegate>
{
    BOOL _hasAppeared;
    id<VCUIShortcutViewControllerDelegate> _delegate;
    OBWelcomeController *_welcomeController;
    UINavigationController *_navigationController;
    UIBarButtonItem *_rightBarButtonItem;
    WFWorkflow *_workflow;
    WFTrigger *_trigger;
    WFAutomationSuggestion *_suggestion;
    NSString *_shortcutName;
    NSString *_shortcutDescription;
    WFWorkflowIcon *_shortcutIcon;
    unsigned long long _mode;
    NSLayoutConstraint *_tableViewHeightConstraint;
    UITableView *_tableView;
    NSLayoutConstraint *_customViewContainerHeightConstraint;
    UIView *_customViewContainer;
    UIView *_customView;
    OBTrayButton *_primaryButton;
    OBTrayButton *_secondaryButton;
    WFDatabase *_database;
    WFWorkflowViewController *_inlineWorkflowViewController;
}

@property (strong, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property (readonly, nonatomic) UIView *customViewContainer; // @synthesize customViewContainer=_customViewContainer;
@property (readonly, nonatomic) NSLayoutConstraint *customViewContainerHeightConstraint; // @synthesize customViewContainerHeightConstraint=_customViewContainerHeightConstraint;
@property (readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VCUIShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFWorkflowViewController *inlineWorkflowViewController; // @synthesize inlineWorkflowViewController=_inlineWorkflowViewController;
@property (readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (strong, nonatomic) OBTrayButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property (strong, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property (strong, nonatomic) OBTrayButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property (copy, nonatomic) NSString *shortcutDescription; // @synthesize shortcutDescription=_shortcutDescription;
@property (copy, nonatomic) WFWorkflowIcon *shortcutIcon; // @synthesize shortcutIcon=_shortcutIcon;
@property (copy, nonatomic) NSString *shortcutName; // @synthesize shortcutName=_shortcutName;
@property (strong, nonatomic) WFAutomationSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (readonly, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;
@property (strong, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
@property (readonly, nonatomic) OBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;
@property (strong, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;

+ (BOOL)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)captionText;
- (void)createNewAutomationSuggestion;
- (id)createdSecondaryButton;
- (unsigned long long)currentPreviewMode;
- (void)dealloc;
- (void)didTapCancel;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (int)eventSource;
- (id)headerImage;
- (id)initWithAutomationSuggestion:(id)arg1 workflow:(id)arg2 database:(id)arg3;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 mode:(unsigned long long)arg3;
- (BOOL)isUpdatingExistingShortcut;
- (void)keyboardWillChange:(id)arg1;
- (id)nameCell;
- (id)nameSectionTitle;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)primaryButtonTintColor;
- (id)primaryButtonTitle;
- (id)secondaryButtonTintColor;
- (id)secondaryButtonTitle;
- (void)setCustomView:(id)arg1 withHeight:(double)arg2;
- (id)shortcutPreview;
- (id)shortcutPreviewImage;
- (BOOL)shouldShowActionCell;
- (id)subtitle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)title;
- (void)trackAddEvent;
- (void)updateCustomView;
- (void)updatePrimaryButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)workflowViewController:(id)arg1 didChangeContentSize:(struct CGSize)arg2;

@end
