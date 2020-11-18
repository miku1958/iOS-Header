//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/UIAccessibilityHUDGestureDelegate-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDGestureManager, UIColor, UISelectionFeedbackGenerator;
@protocol UIIndexBarViewDelegate, UIIndexBarVisualStyle;

@interface UIIndexBarView : UIControl <UIAccessibilityHUDGestureDelegate>
{
    UIColor *_indexColor;
    NSArray *_entries;
    id<UIIndexBarViewDelegate> _delegate;
    UIColor *_trackingBackgroundColor;
    long long _highlightStyle;
    double _highlightedIndex;
    double _deflection;
    double _cachedDisplayHighlightedIndex;
    UIColor *_nonTrackingBackgroundColor;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    id<UIIndexBarVisualStyle> _visualStyle;
    NSArray *_displayEntries;
}

@property (strong, nonatomic) UIAccessibilityHUDGestureManager *axHUDGestureManager; // @synthesize axHUDGestureManager=_axHUDGestureManager;
@property (nonatomic) double cachedDisplayHighlightedIndex; // @synthesize cachedDisplayHighlightedIndex=_cachedDisplayHighlightedIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double deflection; // @synthesize deflection=_deflection;
@property (weak, nonatomic) id<UIIndexBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *displayEntries; // @synthesize displayEntries=_displayEntries;
@property (readonly, nonatomic) double displayHighlightedIndex;
@property (copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property (nonatomic) double highlightedIndex; // @synthesize highlightedIndex=_highlightedIndex;
@property (copy, nonatomic) UIColor *indexColor; // @synthesize indexColor=_indexColor;
@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor; // @synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor;
@property (strong, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *trackingBackgroundColor; // @synthesize trackingBackgroundColor=_trackingBackgroundColor;
@property (strong, nonatomic) id<UIIndexBarVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;

- (void).cxx_destruct;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
- (BOOL)_canDrawContent;
- (BOOL)_defaultCanBecomeFocused;
- (BOOL)_didSelectEntry:(id)arg1 atIndex:(long long)arg2;
- (void)_largeContentViewerEnabledStatusDidChange:(id)arg1;
- (BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2;
- (void)_setupAXHUDGestureIfNecessary;
- (void)_updateBackgroundColor;
- (void)_updateDisplayEntries;
- (void)_userInteractionStarted;
- (void)_userInteractionStopped;
- (id)backgroundColor;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetDeflection:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end

