//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKBorderLineView.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIColor, UIStackView, UIView;

@interface HKLegendView : HKBorderLineView
{
    UIStackView *_mainStack;
    NSMutableArray *_leftEntryViews;
    NSMutableArray *_rightEntryViews;
    UIView *_topDividerView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_leftEntries;
    NSArray *_rightEntries;
    UIColor *_topBorderColor;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (readonly, nonatomic) NSArray *leftEntries; // @synthesize leftEntries=_leftEntries;
@property (readonly, nonatomic) NSArray *rightEntries; // @synthesize rightEntries=_rightEntries;
@property (strong, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;

- (void).cxx_destruct;
- (void)_rebuildStackStructure;
- (void)_updateLegendLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (id)initWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setLeftEntries:(id)arg1 rightEntries:(id)arg2;

@end

