//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIImageView;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI13MarketingView : UIView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *isLoading;
    MISSING_TYPE *backgroundImageView;
    MISSING_TYPE *layout;
    MISSING_TYPE *logoImageView;
    MISSING_TYPE *stackView;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *actionItemTitles;
    MISSING_TYPE *actionItemViews;
    MISSING_TYPE *offer;
    MISSING_TYPE *pendingOffer;
}

@property (nonatomic, readonly) UIImageView *logoImageView; // @synthesize logoImageView;

- (void).cxx_destruct;
- (void)actionItemButtonTapped:(id)arg1;
- (void)dismissButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

