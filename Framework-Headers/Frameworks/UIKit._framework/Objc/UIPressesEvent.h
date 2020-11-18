//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIEvent.h>

@class NSHashTable, NSMutableSet, NSSet, UIPress;

@interface UIPressesEvent : UIEvent
{
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
    UIPress *_triggeringPhysicalButton;
}

@property (strong, nonatomic) UIPress *_triggeringPhysicalButton; // @synthesize _triggeringPhysicalButton;
@property (readonly, nonatomic) NSSet *allPresses;

- (void).cxx_destruct;
- (void)_addGesturesForPress:(id)arg1;
- (void)_addPress:(id)arg1 forDelayedDelivery:(BOOL)arg2;
- (id)_allPresses;
- (id)_cloneEvent;
- (id)_directionalPressWithStrongestForce;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;
- (void)_registerForTerminalEvent:(id)arg1;
- (void)_removePhysicalButton:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (id)_terminalRegistrantsForPressType:(long long)arg1;
- (void)_unregisterForTerminalEvent:(id)arg1;
- (id)_windows;
- (id)description;
- (id)physicalButtonsForWindow:(id)arg1;
- (id)pressesForGestureRecognizer:(id)arg1;
- (long long)subtype;
- (long long)type;

@end

