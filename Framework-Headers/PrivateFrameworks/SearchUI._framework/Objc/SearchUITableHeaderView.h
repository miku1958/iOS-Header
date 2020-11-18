//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class NSString, SFResultSection, TLKStackView, UIButton, UILabel;
@protocol SFFeedbackListener, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerStackViewDelegate>
{
    id<SearchUITableHeaderViewDelegate> _delegate;
    id<SFFeedbackListener> _feedbackListener;
    unsigned long long _headerType;
    SFResultSection *_section;
    UILabel *_titleLabel;
    UIButton *_headerOptionButton;
    TLKStackView *_stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<SearchUITableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (weak) id<SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
@property (readonly) unsigned long long hash;
@property (strong) UIButton *headerOptionButton; // @synthesize headerOptionButton=_headerOptionButton;
@property unsigned long long headerType; // @synthesize headerType=_headerType;
@property (strong) SFResultSection *section; // @synthesize section=_section;
@property (strong) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (strong) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)headerOptionButtonPressed;
- (id)initWithStyle:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)moreButtonPressed;
- (id)moreResultsPunchout;
- (void)setFloating:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)supportsShowMoreInApp;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAlignmentRectInsets;
- (void)updateHeaderButtonVisibility;
- (void)updateWithSection:(id)arg1 isExpanded:(BOOL)arg2;

@end
