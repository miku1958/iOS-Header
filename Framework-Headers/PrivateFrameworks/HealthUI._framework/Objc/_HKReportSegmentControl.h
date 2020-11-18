//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UISegmentedControl;

@interface _HKReportSegmentControl : UIView
{
    UISegmentedControl *_segmentControl;
    UIView *_dividerView;
    UIControl *_rightControl;
}

@property (readonly, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property (readonly, nonatomic) UIControl *rightControl; // @synthesize rightControl=_rightControl;
@property (readonly, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isOpaque;
- (void)layoutSubviews;

@end
