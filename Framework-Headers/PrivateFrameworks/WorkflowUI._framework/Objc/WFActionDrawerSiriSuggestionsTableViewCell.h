//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <WorkflowUI/WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate-Protocol.h>

@class INIntent, NSLayoutConstraint, UIButton, UICollectionView, UIImage, UIViewController, WFActionDrawerSection, WFActionDrawerSiriSuggestionsCollectionViewManager, WFModuleTitleView;
@protocol WFActionDrawerSiriSuggestionsTableViewCellDelegate;

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate>
{
    BOOL _configuredForDailyRoutines;
    WFActionDrawerSection *_section;
    id<WFActionDrawerSiriSuggestionsTableViewCellDelegate> _delegate;
    UIViewController *_containingViewController;
    WFModuleTitleView *_titleView;
    UIButton *_infoButton;
    UICollectionView *_donationsCollectionView;
    INIntent *_intent;
    UIImage *_icon;
    WFActionDrawerSiriSuggestionsCollectionViewManager *_donationsCollectionViewManager;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

@property (strong, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property (nonatomic) BOOL configuredForDailyRoutines; // @synthesize configuredForDailyRoutines=_configuredForDailyRoutines;
@property (weak, nonatomic) UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property (weak, nonatomic) id<WFActionDrawerSiriSuggestionsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) UICollectionView *donationsCollectionView; // @synthesize donationsCollectionView=_donationsCollectionView;
@property (strong, nonatomic) WFActionDrawerSiriSuggestionsCollectionViewManager *donationsCollectionViewManager; // @synthesize donationsCollectionViewManager=_donationsCollectionViewManager;
@property (strong, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property (weak, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property (strong, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property (strong, nonatomic) WFActionDrawerSection *section; // @synthesize section=_section;
@property (weak, nonatomic) WFModuleTitleView *titleView; // @synthesize titleView=_titleView;

- (void).cxx_destruct;
- (void)configureLoading;
- (void)configureWithActionDrawerSection:(id)arg1;
- (void)infoButtonPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)siriSuggestionsCollectionViewManager:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsCollectionViewManager:(id)arg1 showViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
