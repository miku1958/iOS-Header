//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCVoiceShortcutClient;

@interface INVoiceShortcutCenter : NSObject
{
    VCVoiceShortcutClient *_voiceShortcutClient;
}

@property (strong, nonatomic, setter=_setVoiceShortcutClient:) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;

+ (void)initialize;
+ (id)sharedCenter;
- (void).cxx_destruct;
- (id)_initWithVoiceShortcutClient:(id)arg1;
- (void)getAllVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)setShortcutSuggestions:(id)arg1;

@end

