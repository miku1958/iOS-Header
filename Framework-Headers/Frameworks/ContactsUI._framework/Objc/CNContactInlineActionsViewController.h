//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNActionsViewProtocol-Protocol.h>
#import <ContactsUI/CNContactActionsControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIObjectViewController-Protocol.h>
#import <ContactsUI/CNUIUserActionListConsumer-Protocol.h>

@class CNActionsView, CNContact, CNContactActionsController, CNUIContactsEnvironment, CNUIUserActionListDataSource, NSArray, NSDictionary, NSString, UIView;
@protocol CNContactInlineActionsViewControllerDelegate, CNCustomPresentation, CNSchedulerProvider, CNUIObjectViewControllerDelegate;

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNUIObjectViewController>
{
    BOOL _displaysUnavailableActionTypes;
    BOOL _displaysTitles;
    id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
    NSArray *_supportedActionTypes;
    double _actionTypesInterspace;
    long long _viewStyle;
    id<CNContactInlineActionsViewControllerDelegate> _delegate;
    NSArray *_actionItems;
    NSArray *_tokens;
    NSDictionary *_defaultActionPerType;
    id<CNCustomPresentation> _actionsControllerPresentation;
    id<CNSchedulerProvider> _schedulerProvider;
    CNContactActionsController *_actionsController;
    CNUIContactsEnvironment *_environment;
    CNUIUserActionListDataSource *_actionListDataSource;
    NSArray *_contacts;
    CNActionsView *_actionsView;
}

@property (copy, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property (strong, nonatomic) CNUIUserActionListDataSource *actionListDataSource; // @synthesize actionListDataSource=_actionListDataSource;
@property (nonatomic) double actionTypesInterspace; // @synthesize actionTypesInterspace=_actionTypesInterspace;
@property (strong, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property (strong, nonatomic) id<CNCustomPresentation> actionsControllerPresentation; // @synthesize actionsControllerPresentation=_actionsControllerPresentation;
@property (weak, nonatomic) CNActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property (strong, nonatomic) CNContact *contact;
@property (strong, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *defaultActionPerType; // @synthesize defaultActionPerType=_defaultActionPerType;
@property (weak, nonatomic) id<CNContactInlineActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysTitles; // @synthesize displaysTitles=_displaysTitles;
@property (nonatomic) BOOL displaysUnavailableActionTypes; // @synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes;
@property (strong, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; // @synthesize objectViewControllerDelegate;
@property (strong, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedActionTypes; // @synthesize supportedActionTypes=_supportedActionTypes;
@property (readonly, nonatomic) double throttleDelay;
@property (copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) long long viewStyle; // @synthesize viewStyle=_viewStyle;

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)actionImageTextStyleForViewStyle:(long long)arg1;
- (BOOL)actionsView:(id)arg1 shouldPresentDisambiguationUIForAction:(id)arg2;
- (id)allModelsObservable;
- (void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)arg1;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (void)dealloc;
- (void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3;
- (void)discoverAvailableActionTypes;
- (void)displayActionForType:(id)arg1 withDefaultAction:(id)arg2 enabled:(BOOL)arg3;
- (void)displayAdditionalActionItems:(id)arg1;
- (void)displayAllSupportedTypesDisabled;
- (id)existingActionItemForType:(id)arg1;
- (void)generateActionsControllerForActionType:(id)arg1;
- (id)initWithActionListDataSource:(id)arg1 environment:(id)arg2;
- (id)initWithContactActionsContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isGroupActionsView;
- (void)loadCachedActions;
- (void)loadView;
- (id)makeActionItemForType:(id)arg1;
- (void)performAction:(id)arg1;
- (void)performGroupActionForType:(id)arg1;
- (void)processModels:(id)arg1;
- (void)removeActionForType:(id)arg1;
- (void)removeVisibleActionItems:(id)arg1;
- (void)reset;
- (void)setupGroupActions;
- (void)setupSingleContactActions;
- (BOOL)shouldShowDisambiguationForAction:(id)arg1;
- (void)updateActionItem:(id)arg1 withDefaultAction:(id)arg2;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)updateVisibleActionItems:(id)arg1;
- (void)viewDidLoad;

@end
