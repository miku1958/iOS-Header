//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INPlayAudioMessageIntent;

@protocol INPlayAudioMessageIntentHandling <NSObject>
- (void)handlePlayAudioMessage:(INPlayAudioMessageIntent *)arg1 completion:(void (^)(INPlayAudioMessageIntentResponse *))arg2;

@optional
- (void)confirmPlayAudioMessage:(INPlayAudioMessageIntent *)arg1 completion:(void (^)(INPlayAudioMessageIntentResponse *))arg2;
@end

