//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardCandidateView.h>

#import <UIKitCore/UICollectionViewDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIKeyboardCandidateGridHeader;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    UIKeyboardCandidateGridHeader *_header;
    BOOL _keyboardIsHidden;
    BOOL _showingSortControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)defaultExtendedControlHeight;
- (void).cxx_destruct;
- (void)_handleKeyboardShowOrHide:(id)arg1;
- (void)_setupKeyboardInteraction;
- (BOOL)_shouldShowHideKeyboard;
- (BOOL)_shouldUseFullMetrics;
- (void)dealloc;
- (struct UIEdgeInsets)extendedViewInsets;
- (double)extendedViewTop;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTap;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)shouldAutomaticallyHideAndShowSortControl;
- (void)showSortControl:(BOOL)arg1 animated:(BOOL)arg2;
- (struct UIEdgeInsets)sortControlInsets;

@end

