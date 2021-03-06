//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class NSString, SFResultSection, TLKLabel, TLKStackView, TLKTextButton;
@protocol SFFeedbackListener, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerViewDelegate>
{
    BOOL _shouldUseInsetRoundedSections;
    BOOL _isExpanded;
    id<SearchUITableHeaderViewDelegate> _delegate;
    id<SFFeedbackListener> _feedbackListener;
    unsigned long long _headerType;
    SFResultSection *_section;
    TLKLabel *_titleLabel;
    TLKTextButton *_headerOptionButton;
    TLKStackView *_stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SearchUITableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TLKTextButton *headerOptionButton; // @synthesize headerOptionButton=_headerOptionButton;
@property (nonatomic) unsigned long long headerType; // @synthesize headerType=_headerType;
@property (nonatomic) BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property (strong, nonatomic) SFResultSection *section; // @synthesize section=_section;
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // @synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections;
@property (strong, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (strong, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (id)init;
- (BOOL)isSuggestedAppsHeader;
- (void)layoutSubviews;
- (void)moreButtonPressed;
- (id)moreResultsPunchout;
- (void)setFloating:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)supportsShowMoreInApp;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateHeaderButtonVisibilityAnimated:(BOOL)arg1;
- (void)updateWithSection:(id)arg1 isExpanded:(BOOL)arg2 usesInsetRoundedSection:(BOOL)arg3;

@end

