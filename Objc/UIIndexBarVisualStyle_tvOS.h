//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIIndexBarVisualStyle_Base.h>

@class NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface UIIndexBarVisualStyle_tvOS : UIIndexBarVisualStyle_Base
{
    UIView *_indicatorView;
    double _preferredIndicatorWidth;
    NSMutableArray *_backgroundLabels;
    NSMutableArray *_foregroundLabels;
    UIView *_foregroundWrapperView;
    UIView *_foregroundMaskView;
    long long _deflectedIndex;
}

- (void).cxx_destruct;
- (id)_backgroundLabelTextColor;
- (void)_createLabels;
- (id)_foregroundFont;
- (id)_indicatorShadowPath;
- (BOOL)_shouldUseDarkAppearance;
- (void)_showNormalFocusProminence;
- (void)_showReducedFocusProminence;
- (void)_updateColors;
- (BOOL)canBecomeFocused;
- (void)deflectionReset:(BOOL)arg1;
- (void)deflectionUpdated;
- (void)displayEntriesUpdated;
- (void)highlightStyleUpdated;
- (void)highlightedIndexUpdated;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (double)minLineHeight;
- (BOOL)overlay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

