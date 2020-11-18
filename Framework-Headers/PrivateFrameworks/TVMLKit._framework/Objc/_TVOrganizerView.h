//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVFocusRedirectView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class NSArray, NSDictionary, NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable>
{
    UIView *_lastFocusedView;
    UIView *_rightColumnDivider;
    UIView *_leftColumnDivider;
    double _showcaseFactor;
    BOOL _columnDividersEnabled;
    BOOL _remembersLastFocusedItem;
    UIView *_backgroundImageView;
    double _columnDividerPadding;
    UIColor *_columnDividerColor;
    NSArray *_components;
    NSDictionary *_divsByPosition;
    NSDictionary *_divSizesByPosition;
}

@property (strong, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property (strong, nonatomic) UIColor *columnDividerColor; // @synthesize columnDividerColor=_columnDividerColor;
@property (nonatomic) double columnDividerPadding; // @synthesize columnDividerPadding=_columnDividerPadding;
@property (nonatomic) BOOL columnDividersEnabled; // @synthesize columnDividersEnabled=_columnDividersEnabled;
@property (copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *divSizesByPosition; // @synthesize divSizesByPosition=_divSizesByPosition;
@property (copy, nonatomic) NSDictionary *divsByPosition; // @synthesize divsByPosition=_divsByPosition;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIView *preferredFocusedComponent;
@property (nonatomic) BOOL remembersLastFocusedItem; // @synthesize remembersLastFocusedItem=_remembersLastFocusedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)_contentSizeThatFits:(struct CGSize)arg1;
- (long long)_positionFromView:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)setComponentsNeedUpdate;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;

@end
