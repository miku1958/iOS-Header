//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

@class NSDictionary, NSLayoutConstraint, NSMutableDictionary, UILayoutGuide, UIStackView, UIView;
@protocol SiriUILabelStackTemplateModel, SiriUILabelStackTemplateViewDelegate;

@interface SiriUILabelStackTemplateView : SiriUIBaseTemplateView
{
    BOOL _constraintsUpdated;
    id<SiriUILabelStackTemplateViewDelegate> _delegate;
    long long _defaultTextAlignment;
    UIView *_topView;
    UIView *_bottomView;
    NSLayoutConstraint *_topViewConstraint;
    NSLayoutConstraint *_bottomViewConstraint;
    UIStackView *_trailingViews;
    UIStackView *_leadingViews;
    NSMutableDictionary *_componentsForViews;
    UILayoutGuide *_contentBoundsGuide;
    NSDictionary *_contentBoundsGuideConstraints;
    UILayoutGuide *_stackedComponentsBoundsGuide;
    NSMutableDictionary *_stackedComponentsGuideConstraints;
}

@property (strong, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property (weak, nonatomic) NSLayoutConstraint *bottomViewConstraint; // @synthesize bottomViewConstraint=_bottomViewConstraint;
@property (strong, nonatomic) NSMutableDictionary *componentsForViews; // @synthesize componentsForViews=_componentsForViews;
@property (nonatomic) BOOL constraintsUpdated; // @synthesize constraintsUpdated=_constraintsUpdated;
@property (strong, nonatomic) UILayoutGuide *contentBoundsGuide; // @synthesize contentBoundsGuide=_contentBoundsGuide;
@property (strong, nonatomic) NSDictionary *contentBoundsGuideConstraints; // @synthesize contentBoundsGuideConstraints=_contentBoundsGuideConstraints;
@property (weak, nonatomic) id<SiriUILabelStackTemplateModel> dataSource; // @dynamic dataSource;
@property (nonatomic) long long defaultTextAlignment; // @synthesize defaultTextAlignment=_defaultTextAlignment;
@property (weak, nonatomic) id<SiriUILabelStackTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIStackView *leadingViews; // @synthesize leadingViews=_leadingViews;
@property (strong, nonatomic) UILayoutGuide *stackedComponentsBoundsGuide; // @synthesize stackedComponentsBoundsGuide=_stackedComponentsBoundsGuide;
@property (strong, nonatomic) NSMutableDictionary *stackedComponentsGuideConstraints; // @synthesize stackedComponentsGuideConstraints=_stackedComponentsGuideConstraints;
@property (strong, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property (weak, nonatomic) NSLayoutConstraint *topViewConstraint; // @synthesize topViewConstraint=_topViewConstraint;
@property (strong, nonatomic) UIStackView *trailingViews; // @synthesize trailingViews=_trailingViews;

- (void).cxx_destruct;
- (void)_createContentLayoutGuides;
- (void)_updateTopAndBottomViewConstraints;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)insertLeadingView:(id)arg1 withMargins:(struct UIEdgeInsets)arg2;
- (void)insertTopView:(id)arg1;
- (void)insertTrailingView:(id)arg1 withMargins:(struct UIEdgeInsets)arg2;
- (long long)layoutStyle;
- (void)populateStack;
- (void)reloadData;
- (void)removeFromTemplatedSuperview;
- (void)setTemplatedSuperview:(id)arg1;
- (void)updateConstraints;

@end

