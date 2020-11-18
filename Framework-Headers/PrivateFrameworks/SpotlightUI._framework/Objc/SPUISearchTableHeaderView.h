//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, SFResultSection, UIButton, UILabel;
@protocol SPUISearchTableHeaderViewDelegate;

@interface SPUISearchTableHeaderView : UITableViewHeaderFooterView
{
    id<SPUISearchTableHeaderViewDelegate> _delegate;
    unsigned long long _sectionHeaderType;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    SFResultSection *_section;
    NSLayoutConstraint *_moreButtonHiddenConstraint;
    NSLayoutConstraint *_moreButtonVisibleConstraint;
}

@property (weak) id<SPUISearchTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property (strong, nonatomic) NSLayoutConstraint *moreButtonHiddenConstraint; // @synthesize moreButtonHiddenConstraint=_moreButtonHiddenConstraint;
@property (strong, nonatomic) NSLayoutConstraint *moreButtonVisibleConstraint; // @synthesize moreButtonVisibleConstraint=_moreButtonVisibleConstraint;
@property (strong, nonatomic) SFResultSection *section; // @synthesize section=_section;
@property (readonly) unsigned long long sectionHeaderType; // @synthesize sectionHeaderType=_sectionHeaderType;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)moreButtonPressed;
- (id)moreResultsPunchout;
- (void)setFloating:(BOOL)arg1;
- (BOOL)supportsShowMoreInApp;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateShowMoreButtonVisibility;
- (void)updateWithSection:(id)arg1 isExpanded:(BOOL)arg2;

@end

