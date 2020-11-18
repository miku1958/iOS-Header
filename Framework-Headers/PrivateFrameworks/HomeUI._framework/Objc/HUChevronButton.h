//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIStackView;

@interface HUChevronButton : UIControl
{
    UILabel *_titleLabel;
    UIStackView *_containerView;
    UIImageView *_chevronImageView;
}

@property (strong, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property (strong, nonatomic) UIStackView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

