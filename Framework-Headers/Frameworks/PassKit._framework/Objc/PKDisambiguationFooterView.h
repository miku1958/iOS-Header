//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface PKDisambiguationFooterView : UIView
{
    UILabel *_descriptionLabel;
    UIButton *_actionButton;
    UIButton *_secondaryActionButton;
    double _topPadding;
    double _secondaryActionTopPadding;
    double _bottomPadding;
}

@property (readonly, strong, nonatomic) UIButton *actionButton;
@property (nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property (readonly, strong, nonatomic) UILabel *descriptionLabel;
@property (readonly, strong, nonatomic) UIButton *secondaryActionButton;
@property (nonatomic) double secondaryActionTopPadding; // @synthesize secondaryActionTopPadding=_secondaryActionTopPadding;
@property (nonatomic) double topPadding; // @synthesize topPadding=_topPadding;

- (double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFitForTableView:(id)arg1;

@end

