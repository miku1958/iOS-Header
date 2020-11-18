//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSRemoteRecordClientDelegate, OS_dispatch_queue;

@interface CSRemoteRecordClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id<CSRemoteRecordClientDelegate> _delegate;
}

@property (weak, nonatomic) id<CSRemoteRecordClientDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)didPlayEndpointBeep;
- (BOOL)hasPendingTwoShotBeep;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isRecording;
- (BOOL)startRecordingWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)stopRecording:(id *)arg1;
- (id)voiceTriggerEventInfo;
- (BOOL)waitingForConnection:(double)arg1 error:(id *)arg2;

@end
