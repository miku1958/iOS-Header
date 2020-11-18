//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INCExtensionProxy, INIntent;
@protocol INVCVoiceShortcutClient, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface INSExtensionServiceIntentExecutor : NSObject
{
    id<INVCVoiceShortcutClient> _voiceShortcutClient;
    INIntent *_intent;
    INCExtensionProxy *_extensionProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) INCExtensionProxy *extensionProxy; // @synthesize extensionProxy=_extensionProxy;
@property (strong, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) id<INVCVoiceShortcutClient> voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;

- (void).cxx_destruct;
- (id)initWithIntent:(id)arg1 extensionProxy:(id)arg2 queue:(id)arg3;
- (id)initWithVoiceShortcutClient:(id)arg1 intent:(id)arg2;
- (void)sendAceCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
