//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIKeyboardDockItem;
@protocol UIKeyboardDockViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockView : UIView
{
    id<UIKeyboardDockViewDelegate> _delegate;
    UIKeyboardDockItem *_leftDockItem;
    UIKeyboardDockItem *_rightDockItem;
}

@property (weak, nonatomic) id<UIKeyboardDockViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIKeyboardDockItem *leftDockItem; // @synthesize leftDockItem=_leftDockItem;
@property (strong, nonatomic) UIKeyboardDockItem *rightDockItem; // @synthesize rightDockItem=_rightDockItem;

- (void).cxx_destruct;
- (void)_configureDockItem:(id)arg1;
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (id)_dockItemWithButton:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end
