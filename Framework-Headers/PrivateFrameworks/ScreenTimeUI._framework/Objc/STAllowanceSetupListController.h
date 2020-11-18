//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;
@protocol STAllowanceSetupListControllerDelegate;

@interface STAllowanceSetupListController : PSListController
{
    BOOL _creatingNewAllowance;
    NSArray *_initialSelectedIdentifiers;
    id<STAllowanceSetupListControllerDelegate> _delegate;
    PSSpecifier *_categoriesGroupSpecifier;
    PSSpecifier *_allAppsAndCategoriesSpecifier;
}

@property (strong, nonatomic) PSSpecifier *allAppsAndCategoriesSpecifier; // @synthesize allAppsAndCategoriesSpecifier=_allAppsAndCategoriesSpecifier;
@property (strong, nonatomic) PSSpecifier *categoriesGroupSpecifier; // @synthesize categoriesGroupSpecifier=_categoriesGroupSpecifier;
@property (readonly, nonatomic) BOOL creatingNewAllowance; // @synthesize creatingNewAllowance=_creatingNewAllowance;
@property (weak) id<STAllowanceSetupListControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSArray *initialSelectedIdentifiers; // @synthesize initialSelectedIdentifiers=_initialSelectedIdentifiers;

- (void).cxx_destruct;
- (void)addButtonTapped:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)cancelButtonTapped:(id)arg1;
- (id)initWithSelectedIdentifiers:(id)arg1 creatingNewAllowance:(BOOL)arg2;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end

