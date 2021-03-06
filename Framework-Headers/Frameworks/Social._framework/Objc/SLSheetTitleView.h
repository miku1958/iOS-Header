//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SLSheetTitleView : UIView
{
    UIImageView *_serviceIconView;
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
    NSString *_title;
}

@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_setupTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setServiceIconImage:(id)arg1;
- (void)sizeToFit;
- (void)updateConstraints;

@end

