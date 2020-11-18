//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface MCDTitleView : UIView
{
    UIImageView *_explicitImageView;
    NSLayoutConstraint *_explicitImageViewWidthConstraint;
    NSLayoutConstraint *_titlePaddingConstraint;
    BOOL _explicitTrack;
    UILabel *_titleLabel;
}

@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)_addLabelWithFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

