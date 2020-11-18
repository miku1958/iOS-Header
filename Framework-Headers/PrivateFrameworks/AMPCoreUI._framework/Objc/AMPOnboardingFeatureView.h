//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AMPOnboardingFeatureView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithFeature:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

