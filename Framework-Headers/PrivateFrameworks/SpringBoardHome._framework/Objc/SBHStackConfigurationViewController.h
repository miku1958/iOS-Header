//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/SBHIconViewConfigurationInteractionDelegate-Protocol.h>
#import <SpringBoardHome/SBHWidgetSheetViewControlling-Protocol.h>
#import <SpringBoardHome/UITableViewDataSource-Protocol.h>
#import <SpringBoardHome/UITableViewDelegate-Protocol.h>

@class CHSAvocadoDescriptorProvider, NSString, SBHStackConfiguration, SBHWidgetConfigurationInteraction, SBIconView, UIButton, UITableView;
@protocol SBHStackConfigurationViewControllerAppearanceDelegate, SBHStackConfigurationViewControllerDelegate, SBHWidgetSheetViewControllerPresenter;

@interface SBHStackConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SBHIconViewConfigurationInteractionDelegate, SBHWidgetSheetViewControlling>
{
    UITableView *_tableView;
    UIButton *_closeButton;
    id<SBHStackConfigurationViewControllerAppearanceDelegate> _appearanceDelegate;
    id<SBHStackConfigurationViewControllerDelegate> _delegate;
    id<SBHWidgetSheetViewControllerPresenter> _presenter;
    SBHStackConfiguration *_configuration;
    SBIconView *_iconView;
    SBHWidgetConfigurationInteraction *_widgetConfigurationInteraction;
    CHSAvocadoDescriptorProvider *_descriptorProvider;
}

@property (weak, nonatomic) id<SBHStackConfigurationViewControllerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property (strong, nonatomic) SBHStackConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBHStackConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CHSAvocadoDescriptorProvider *descriptorProvider; // @synthesize descriptorProvider=_descriptorProvider;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property (weak, nonatomic) id<SBHWidgetSheetViewControllerPresenter> presenter; // @synthesize presenter=_presenter;
@property (readonly) Class superclass;
@property (strong, nonatomic) SBHWidgetConfigurationInteraction *widgetConfigurationInteraction; // @synthesize widgetConfigurationInteraction=_widgetConfigurationInteraction;

- (void).cxx_destruct;
- (void)_presentConfigurationForDataSource:(id)arg1;
- (void)_saveConfiguration;
- (void)_setupCloseButton;
- (void)_setupTableView;
- (void)closeButtonTapped:(id)arg1;
- (void)configurationInteractionDidCommit:(id)arg1;
- (void)configurationInteractionDidEnd:(id)arg1;
- (id)containerViewControllerForConfigurationInteraction:(id)arg1;
- (void)didToggleSmartRotation:(id)arg1;
- (id)initWithConfiguration:(id)arg1 iconView:(id)arg2 descriptorProvider:(id)arg3;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sourceIconViewForConfigurationInteraction:(id)arg1;
- (id)sourceViewForConfigurationInteraction:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

