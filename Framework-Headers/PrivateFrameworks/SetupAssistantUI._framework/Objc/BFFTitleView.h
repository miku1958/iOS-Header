//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UILabel;

@interface BFFTitleView : UIScrollView
{
    UILabel *_titleLabel;
}

@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (struct CGRect)contentBounds;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;

@end
