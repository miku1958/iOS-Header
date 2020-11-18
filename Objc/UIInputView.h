//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UISplittableInputView-Protocol.h>

@class CALayer, NSArray, NSMutableDictionary, NSString, UIImage, UIKBRenderConfig, _UIInputViewContent;

@interface UIInputView : UIView <UISplittableInputView>
{
    long long _style;
    UIKBRenderConfig *_renderConfig;
    BOOL _suppressBackgroundStyling;
    BOOL _disableSplitSupport;
    _UIInputViewContent *_leftContentView;
    _UIInputViewContent *_rightContentView;
    double _contentRatio;
    struct CGSize _leftContentSize;
    struct CGSize _rightContentSize;
    double _gapWidth;
    double _leftOffset;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    double _transitionRatio;
    UIImage *_mergedImage;
    UIImage *_splitImage;
    NSMutableDictionary *_mergedSliceMap;
    NSMutableDictionary *_splitSliceMap;
    NSArray *_visibleLayers;
    CALayer *_transitionLayer;
    BOOL _allowsSelfSizing;
}

@property (strong, nonatomic) UIImage *_mergedImage; // @synthesize _mergedImage;
@property (strong, nonatomic) NSMutableDictionary *_mergedSliceMap; // @synthesize _mergedSliceMap;
@property (strong, nonatomic) UIImage *_splitImage; // @synthesize _splitImage;
@property (strong, nonatomic) NSMutableDictionary *_splitSliceMap; // @synthesize _splitSliceMap;
@property (nonatomic) BOOL allowsSelfSizing; // @synthesize allowsSelfSizing=_allowsSelfSizing;
@property (nonatomic) double contentRatio; // @synthesize contentRatio=_contentRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long inputViewStyle; // @synthesize inputViewStyle=_style;
@property (readonly, nonatomic) UIView *leftContentView; // @synthesize leftContentView=_leftContentView;
@property (nonatomic) struct CGSize leftContentViewSize; // @synthesize leftContentViewSize=_leftContentSize;
@property (readonly, nonatomic) UIView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property (nonatomic) struct CGSize rightContentViewSize; // @synthesize rightContentViewSize=_rightContentSize;
@property (readonly) Class superclass;

+ (void)_setupAppearanceIfNecessary;
- (double)_additionalClipHeight;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (int)_clipCornersOfView:(id)arg1;
- (struct CGSize)_defaultSize;
- (BOOL)_disableSplitSupport;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (BOOL)_isSplit;
- (BOOL)_isToolbars;
- (BOOL)_isTransitioning;
- (void)_setDisableSplitSupport:(BOOL)arg1;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (void)_setNeedsContentSizeUpdate;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSuppressBackgroundStyling:(BOOL)arg1;
- (id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1;
- (BOOL)_supportsSplit;
- (BOOL)_suppressBackgroundStyling;
- (id)_toolbarBorderedBackground;
- (void)_updateClipCorners;
- (void)_updateWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)didEndSplitTransition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (void)layoutMergedSubviews;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setInputViewStyle:(long long)arg1;
- (id)tintColor;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)willBeginSplitTransition;

@end

