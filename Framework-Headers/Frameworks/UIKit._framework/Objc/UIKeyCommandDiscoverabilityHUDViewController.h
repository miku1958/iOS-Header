//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController
{
    NSArray *_keyCommands;
    struct __GSKeyboard *_keyboard;
}

@property (strong, nonatomic) UIKeyCommandDiscoverabilityHUDView *view; // @dynamic view;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_updateVisualStyle;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard *)arg2;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
