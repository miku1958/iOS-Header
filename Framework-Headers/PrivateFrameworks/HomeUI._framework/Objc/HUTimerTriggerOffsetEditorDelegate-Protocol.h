//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUTimerTriggerOffsetEditorViewController, NSDateComponents;

@protocol HUTimerTriggerOffsetEditorDelegate <NSObject>
- (void)timerTriggerOffsetEditor:(HUTimerTriggerOffsetEditorViewController *)arg1 didFinishWithOffset:(NSDateComponents *)arg2;
- (void)timerTriggerOffsetEditorDidCancel:(HUTimerTriggerOffsetEditorViewController *)arg1;
@end
