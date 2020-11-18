//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIImageView, UILabel;

@interface AMPOnboardingHeaderView : UIScrollView
{
    BOOL _isPresentedInFormSheet;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    double _containerHeight;
}

@property (nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL isPresentedInFormSheet; // @synthesize isPresentedInFormSheet=_isPresentedInFormSheet;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)adjustedContentInsetDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentSize;

@end
