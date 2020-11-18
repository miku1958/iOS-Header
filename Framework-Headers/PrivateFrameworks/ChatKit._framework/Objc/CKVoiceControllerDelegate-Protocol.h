//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class AVVCAudioBuffer, CKVoiceController;

@protocol CKVoiceControllerDelegate <NSObject>
- (void)voiceController:(CKVoiceController *)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceControllerDidDetectStartpoint:(CKVoiceController *)arg1;
- (void)voiceControllerDidFinishRecording:(CKVoiceController *)arg1 successfully:(BOOL)arg2;
- (void)voiceControllerDidStartRecording:(CKVoiceController *)arg1;
- (void)voiceControllerRecordBufferAvailable:(CKVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
@end
