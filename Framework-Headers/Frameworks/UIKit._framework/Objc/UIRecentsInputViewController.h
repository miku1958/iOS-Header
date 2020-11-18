//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSLayoutConstraint, NSString, UILexicon, UIView, UIViewController;
@protocol UIRecentsInputViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIRecentsInputViewController : UITableViewController
{
    BOOL _canManageList;
    id<UIRecentsInputViewControllerDelegate> _recentInputDelegate;
    UILexicon *_recentInputs;
    long long _containingEffectStyle;
    UIView *_customHeaderView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSString *_previouslyUsedString;
    NSString *_clearAllString;
    NSString *_enterNewString;
    UIView *_headerView;
    UIView *_headerContainerView;
    UIViewController *_headerContainerViewController;
}

@property (nonatomic) BOOL canManageList; // @synthesize canManageList=_canManageList;
@property (strong, nonatomic) NSString *clearAllString; // @synthesize clearAllString=_clearAllString;
@property (nonatomic) long long containingEffectStyle; // @synthesize containingEffectStyle=_containingEffectStyle;
@property (strong, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property (strong, nonatomic) NSString *enterNewString; // @synthesize enterNewString=_enterNewString;
@property (strong, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property (strong, nonatomic) UIViewController *headerContainerViewController; // @synthesize headerContainerViewController=_headerContainerViewController;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (strong, nonatomic) NSString *previouslyUsedString; // @synthesize previouslyUsedString=_previouslyUsedString;
@property (weak, nonatomic) id<UIRecentsInputViewControllerDelegate> recentInputDelegate; // @synthesize recentInputDelegate=_recentInputDelegate;
@property (strong, nonatomic) UILexicon *recentInputs; // @synthesize recentInputs=_recentInputs;
@property (strong, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;

- (void).cxx_destruct;
- (void)_delete:(id)arg1;
- (void)_overrideTraitCollectionForHeaderViewController;
- (id)_uiktest_FocusedCellLabel;
- (id)_uiktest_UnfocusedCellBackgroundView;
- (id)_uiktest_UnfocusedCellLabel;
- (void)didSelectButtonAtIndexPath:(id)arg1;
- (void)ensureConstraints;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)preferredFocusedView;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateTableViewWidth;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

