//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;
@protocol PKSpendingSummaryFooter;

@interface PKSpendingSummaryFooterContainer : UIView
{
    long long _backdropStyle;
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
    UIView<PKSpendingSummaryFooter> *_currentFooter;
    UIView<PKSpendingSummaryFooter> *_nextFooter;
}

@property (strong, nonatomic) UIView<PKSpendingSummaryFooter> *currentFooter; // @synthesize currentFooter=_currentFooter;
@property (strong, nonatomic) UIView<PKSpendingSummaryFooter> *nextFooter; // @synthesize nextFooter=_nextFooter;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)preferredBackdropStyle;
- (void)setTransitionProgress:(double)arg1;

@end
