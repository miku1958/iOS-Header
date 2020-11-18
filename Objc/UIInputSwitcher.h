//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_keyHoldDelay;
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    double m_lastGlobeKeyUpTime;
    NSString *_newMode;
    BOOL _isGlobeKeyDown;
    NSString *_loadedIdentifier;
}

@property (nonatomic) BOOL isGlobeKeyDown; // @synthesize isGlobeKeyDown=_isGlobeKeyDown;
@property (copy, nonatomic) NSString *loadedIdentifier; // @synthesize loadedIdentifier=_loadedIdentifier;

+ (id)activeInstance;
+ (id)sharedInstance;
- (void)_showSwitcherViewAsHUD;
- (void)cancelShowSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)clearKeyHoldTimer;
- (void)clearShowSwitcherTimer;
- (void)dealloc;
- (BOOL)handleModifiersChangedEvent:(id)arg1;
- (void)handleRotate:(id)arg1;
- (BOOL)handleSwitchCommand:(BOOL)arg1;
- (BOOL)handleSwitchCommand:(BOOL)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3;
- (BOOL)handleSwitchingKeyEvent:(id)arg1;
- (void)hideSwitcher;
- (void)hideSwitcherIfNeeded;
- (id)init;
- (id)inputModeIdentifierWithNextFlag:(BOOL)arg1;
- (BOOL)isVisible;
- (BOOL)isVisibleOrHiding;
- (void)showSwitcherShouldAutoHide:(BOOL)arg1;
- (void)showSwitcherWithAutoHide;
- (void)showSwitcherWithoutAutoHide;
- (BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3;
- (void)touchHideSwitcherTimer;
- (void)touchKeyHoldTimer;
- (void)touchShowSwitcherTimer;
- (void)updateHardwareLayout;

@end

