//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSLayoutYAxisAnchor;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI10IndexLabel : UIView
{
    MISSING_TYPE *layout;
    MISSING_TYPE *label;
    MISSING_TYPE *background;
    MISSING_TYPE *textStyle;
    MISSING_TYPE *labelCenterYConstraint;
    MISSING_TYPE *index;
}

@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) struct CGSize intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)textSizeUpdated:(id)arg1;

@end

