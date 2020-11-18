//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKViewController.h>

@class IMScheduledUpdater, UIScrollView;

@interface CKScrollViewController : CKViewController
{
    BOOL _topInsetIncludesPalette;
    BOOL _keyboardVisible;
    BOOL _keyboardInteractionCancelled;
    UIScrollView *_scrollView;
    double _topInsetPadding;
    double _bottomInsetPadding;
    IMScheduledUpdater *_updater;
    struct CGRect _keyboardScreenFrame;
}

@property (readonly, nonatomic) double bottomInsetPadding; // @synthesize bottomInsetPadding=_bottomInsetPadding;
@property (readonly, nonatomic) struct CGRect keyboardFrame;
@property (nonatomic) BOOL keyboardInteractionCancelled; // @synthesize keyboardInteractionCancelled=_keyboardInteractionCancelled;
@property (readonly, nonatomic, getter=isKeyboardOnscreenWithoutAccessoryView) BOOL keyboardOnscreenWithoutAccessoryView;
@property (nonatomic) struct CGRect keyboardScreenFrame; // @synthesize keyboardScreenFrame=_keyboardScreenFrame;
@property (readonly, nonatomic, getter=isKeyboardUndocked) BOOL keyboardUndocked;
@property (nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property (readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly, nonatomic) BOOL topInsetIncludesPalette; // @synthesize topInsetIncludesPalette=_topInsetIncludesPalette;
@property (readonly, nonatomic) double topInsetPadding; // @synthesize topInsetPadding=_topInsetPadding;
@property (strong, nonatomic) IMScheduledUpdater *updater; // @synthesize updater=_updater;

- (double)_bottomRotatingFooterHeight;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_updateScrollGeometryWithDuration:(double)arg1;
- (double)_visibleKeyboardHeight;
- (double)accessoryViewHeight;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (double)bottomInsetWithoutAccessoryView;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)dealloc;
- (void)endHoldingScrollGeometryUpdatesForAllKeys;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (id)init;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidShowOrHide:(id)arg1;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHideViaGesture;
- (void)keyboardWillShowOrHide:(id)arg1;
- (struct UIEdgeInsets)navigationBarInsets;
- (struct UIEdgeInsets)navigationBarInsetsWithoutPalette;
- (void)updateScrollGeometry;
- (double)visibleHeightAboveKeyboard;

@end

