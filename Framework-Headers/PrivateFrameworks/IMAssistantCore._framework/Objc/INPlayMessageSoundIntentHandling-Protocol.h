//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INPlayMessageSoundIntent;

@protocol INPlayMessageSoundIntentHandling <NSObject>
- (void)handlePlayMessageSound:(INPlayMessageSoundIntent *)arg1 completion:(void (^)(INPlayMessageSoundIntentResponse *))arg2;

@optional
- (void)confirmPlayMessageSound:(INPlayMessageSoundIntent *)arg1 completion:(void (^)(INPlayMessageSoundIntentResponse *))arg2;
@end
