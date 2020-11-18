//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUILayoutFreeSectionView.h>

@class UIButton, UITextView;

@interface SearchUIDescriptionCardSectionView : SearchUILayoutFreeSectionView
{
    UIButton *_moreButton;
    UITextView *_detailsTextView;
}

@property (strong) UITextView *detailsTextView; // @synthesize detailsTextView=_detailsTextView;
@property (strong) UIButton *moreButton; // @synthesize moreButton=_moreButton;

- (void).cxx_destruct;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2 style:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)moreButtonPressed;
- (void)setMoreButtonFrameWithTextView:(id)arg1 inset:(double)arg2 lastLineYOrigin:(double)arg3;
- (BOOL)shouldHideMoreButtonForTextView:(id)arg1;

@end

