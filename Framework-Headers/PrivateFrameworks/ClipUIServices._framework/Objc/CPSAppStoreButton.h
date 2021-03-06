//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClipUIServices/CPSButton.h>

@class UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CPSAppStoreButton : CPSButton
{
    UIStackView *_fullSizeStack;
    UIStackView *_glyphOnlyStack;
    UILabel *_label;
    struct CGRect _lastLayoutBounds;
    BOOL _intrinsicContentSizeIsValid;
    struct CGSize _intrinsicContentSize;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

