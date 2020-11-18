//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView;

@interface GKRatingView : UIView
{
    double _value;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundImageView;
    NSLayoutConstraint *_foregroundWidthConstraint;
}

@property (strong, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property (strong, nonatomic) UIImageView *foregroundImageView; // @synthesize foregroundImageView=_foregroundImageView;
@property (strong, nonatomic) NSLayoutConstraint *foregroundWidthConstraint; // @synthesize foregroundWidthConstraint=_foregroundWidthConstraint;
@property (nonatomic) double value; // @synthesize value=_value;

- (void)awakeFromNib;
- (void)commonSetup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end
