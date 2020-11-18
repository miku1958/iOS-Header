//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UIBlurEffect;

@interface _SFPopoverSizingTableViewController : UITableViewController
{
    UIBlurEffect *_backgroundBlurEffect;
    BOOL _didUpdateTranslucentAppearanceAtLeastOnce;
    BOOL _didHaveTranslucentAppearance;
}

@property (readonly, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (readonly, nonatomic) BOOL hasTranslucentAppearance;

+ (void)initialize;
+ (id)tableViewCellForSizeEstimation;
- (void).cxx_destruct;
- (BOOL)_needsTranslucentAppearanceUpdate;
- (void)_updateTranslucentAppearanceIfNeeded;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredContentSize;
- (void)updateTranslucentAppearance;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

