//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIViewRepresentingKeyboardLayout-Protocol.h>

@class UIKeyboardDockItem;
@protocol UIKeyboardDockViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockView : UIView <_UIViewRepresentingKeyboardLayout>
{
    id<UIKeyboardDockViewDelegate> _delegate;
    UIKeyboardDockItem *_leftDockItem;
    UIKeyboardDockItem *_rightDockItem;
    UIKeyboardDockItem *_centerDockItem;
}

@property (strong, nonatomic) UIKeyboardDockItem *centerDockItem; // @synthesize centerDockItem=_centerDockItem;
@property (weak, nonatomic) id<UIKeyboardDockViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIKeyboardDockItem *leftDockItem; // @synthesize leftDockItem=_leftDockItem;
@property (strong, nonatomic) UIKeyboardDockItem *rightDockItem; // @synthesize rightDockItem=_rightDockItem;

+ (long long)_currentInterfaceOrientation;
+ (CDStruct_b7523c42)_itemFramesForBoundingSize:(struct CGSize)arg1;
+ (id)dockViewHomeGestureExclusionZones;
- (void).cxx_destruct;
- (void)_configureDockItem:(id)arg1;
- (void)_didReceiveHandBiasChangeNotification:(id)arg1;
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (id)_dockItemWithButton:(id)arg1;
- (id)_keyboardLayoutView;
- (id)_keyboardLongPressInteractionRegions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end

