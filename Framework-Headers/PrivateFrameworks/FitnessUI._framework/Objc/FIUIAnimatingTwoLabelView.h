//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface FIUIAnimatingTwoLabelView : UIView
{
    UILabel *_visibleLabel;
    UILabel *_mainLabel;
    UILabel *_secondaryLabel;
}

@property (strong, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property (strong, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (readonly, nonatomic) UILabel *visibleLabel;

- (void).cxx_destruct;
- (struct CGRect)_frameAboveBounds;
- (struct CGRect)_frameBelowBounds;
- (void)_updateHidden;
- (void)applyFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mainLabel:(id)arg2 secondaryLabel:(id)arg3;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)showMainLabelAnimated:(BOOL)arg1;
- (void)showSecondaryLabelAnimated:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
