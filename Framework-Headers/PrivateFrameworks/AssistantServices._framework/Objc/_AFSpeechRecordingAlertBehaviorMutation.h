//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSpeechRecordingAlertBehaviorMutating-Protocol.h>

@class AFSpeechRecordingAlertBehavior, NSString;

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating>
{
    AFSpeechRecordingAlertBehavior *_baseModel;
    long long _style;
    long long _beepSoundID;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasStyle:1;
        unsigned int hasBeepSoundID:1;
    } _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setBeepSoundID:(long long)arg1;
- (void)setStyle:(long long)arg1;

@end

