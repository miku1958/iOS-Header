//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIKBThemedView, UIKeyboardCandidateBarSegmentControl, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateSortControl : UIView
{
    UIKeyboardCandidateBarSegmentControl *_segmentedControl;
    int _candidatesVisualStyle;
    BOOL _legacyAlertAppearance;
    UIKBThemedView *_themedView;
}

@property (readonly) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property (strong, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;

+ (BOOL)_preventsAppearanceProxyCustomization;
- (void)_setRenderConfig:(id)arg1;
- (void)addSegmentedControlWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(BOOL)arg3;
- (void)layoutSubviews;
- (BOOL)needsToUpdateSortControlForTitles:(id)arg1;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (void)setSortControlTitles:(id)arg1;
- (void)updateTitleTextAttributes;

@end

