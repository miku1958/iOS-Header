//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXEventRepresentation, NSArray, NSString;

@protocol AXBackBoardServerInstanceDelegate <NSObject>
- (int)accessibilityUIPid;
- (unsigned int)contextIdForDisplayPoint:(struct CGPoint)arg1;
- (unsigned int)contextIdHosterForContextId:(unsigned int)arg1;
- (struct CGRect)convertFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2;
- (struct CGRect)convertFrame:(struct CGRect)arg1 toContextId:(unsigned int)arg2;
- (void)enableEventTap:(BOOL)arg1 forApplication:(int)arg2;
- (void)postEvent:(AXEventRepresentation *)arg1 systemEvent:(BOOL)arg2 afterNamedTap:(NSString *)arg3 namedTaps:(NSArray *)arg4;
- (void)registerEventListener:(BOOL)arg1;
- (void)setAccessibilityUIPid:(int)arg1;
- (void)setAssistiveTouchPid:(int)arg1;
- (void)setDisableSystemGestureRecognitionInEvents:(BOOL)arg1;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1;
- (void)setSiriViewServicePid:(int)arg1;
- (void)setVoiceOverItemChooserVisible:(BOOL)arg1;
- (void)userEventOccurred;
- (void)wakeUpDeviceIfNecessary;
- (void)zoomListenerRegistered;
@end
