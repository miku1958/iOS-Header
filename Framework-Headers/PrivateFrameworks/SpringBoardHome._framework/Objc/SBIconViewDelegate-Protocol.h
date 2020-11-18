//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>
#import <SpringBoardHome/SBIconViewActionDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewBehaviorDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewConfigurationUIDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewDragDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewReuseDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewShortcutsDelegate-Protocol.h>

@class SBIconView;
@protocol SBIconViewActionDelegate, SBIconViewBehaviorDelegate, SBIconViewConfigurationUIDelegate, SBIconViewDragDelegate, SBIconViewReuseDelegate, SBIconViewShortcutsDelegate;

@protocol SBIconViewDelegate <SBIconViewActionDelegate, SBIconViewBehaviorDelegate, SBIconViewReuseDelegate, SBIconViewDragDelegate, SBIconViewShortcutsDelegate, SBIconViewConfigurationUIDelegate, NSObject>

@optional
- (id<SBIconViewActionDelegate>)actionDelegateForIconView:(SBIconView *)arg1;
- (id<SBIconViewBehaviorDelegate>)behaviorDelegateForIconView:(SBIconView *)arg1;
- (id<SBIconViewConfigurationUIDelegate>)configurationUIDelegateForIconView:(SBIconView *)arg1;
- (id<SBIconViewDragDelegate>)draggingDelegateForIconView:(SBIconView *)arg1;
- (id<SBIconViewReuseDelegate>)reuseDelegateForIconView:(SBIconView *)arg1;
- (id<SBIconViewShortcutsDelegate>)shortcutsDelegateForIconView:(SBIconView *)arg1;
@end
