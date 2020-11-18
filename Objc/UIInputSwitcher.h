//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_switcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    NSString *_newMode;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (void)cancelSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)clearSwitcherTimer;
- (void)dealloc;
- (BOOL)handleModifiersChangedEvent:(id)arg1;
- (void)handleRotate:(id)arg1;
- (BOOL)handleSwitchCommand:(BOOL)arg1;
- (BOOL)handleSwitchCommand:(BOOL)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3;
- (void)hideSwitcher;
- (id)init;
- (BOOL)isVisible;
- (BOOL)isVisibleOrHiding;
- (id)newMode;
- (void)setNewMode:(id)arg1;
- (void)showSwitcher;
- (BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3;
- (void)touchHideSwitcherTimer;
- (void)touchSwitcherTimer;

@end

