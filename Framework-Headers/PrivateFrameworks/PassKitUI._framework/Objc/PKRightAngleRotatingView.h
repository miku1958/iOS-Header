//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PKRightAngleRotatingView : UIView
{
    UIView *_rotatedView;
    long long _orientation;
}

@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (readonly, nonatomic) UIView *rotatedView; // @synthesize rotatedView=_rotatedView;

- (void).cxx_destruct;
- (BOOL)_dimensionsAreRotated;
- (id)initWithRotatedView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)updateTransform;

@end
