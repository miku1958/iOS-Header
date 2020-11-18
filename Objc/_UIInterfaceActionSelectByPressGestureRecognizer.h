//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITapGestureRecognizer.h>

@class UIInterfaceAction, UIInterfaceActionGroupView;
@protocol UIFocusedInterfaceActionPressDelegate;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer
{
    id<UIFocusedInterfaceActionPressDelegate> _pressDelegate;
    UIInterfaceActionGroupView *_actionGroupView;
    UIInterfaceAction *_interfaceActionOnPressBegan;
}

@property (weak, nonatomic) UIInterfaceActionGroupView *actionGroupView; // @synthesize actionGroupView=_actionGroupView;
@property (weak, nonatomic) UIInterfaceAction *interfaceActionOnPressBegan; // @synthesize interfaceActionOnPressBegan=_interfaceActionOnPressBegan;
@property (weak, nonatomic) id<UIFocusedInterfaceActionPressDelegate> pressDelegate; // @synthesize pressDelegate=_pressDelegate;

- (void).cxx_destruct;
- (void)_gestureChanged:(id)arg1;
- (id)initWithFocusedInterfaceActionPressDelegate:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end

