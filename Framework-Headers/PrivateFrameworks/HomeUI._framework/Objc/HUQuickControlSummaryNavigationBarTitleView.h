//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UINavigationBarTitleView.h>

@class HUQuickControlSummaryView, NSArray;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView
{
    HUQuickControlSummaryView *_summaryView;
    NSArray *_contentConstraints;
}

@property (strong, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property (strong, nonatomic) HUQuickControlSummaryView *summaryView; // @synthesize summaryView=_summaryView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)updateConstraints;

@end

