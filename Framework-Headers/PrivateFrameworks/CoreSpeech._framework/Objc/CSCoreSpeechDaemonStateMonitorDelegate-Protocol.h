//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSCoreSpeechDaemonStateMonitor;

@protocol CSCoreSpeechDaemonStateMonitorDelegate <NSObject>

@optional
- (void)coreSpeechDaemonStateMonitor:(CSCoreSpeechDaemonStateMonitor *)arg1 didReceiveStateChanged:(unsigned long long)arg2;
@end
