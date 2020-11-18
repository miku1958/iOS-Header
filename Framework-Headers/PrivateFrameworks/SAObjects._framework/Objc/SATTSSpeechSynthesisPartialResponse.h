//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SATTSSpeechSynthesisAudioInfo, SAUIAudioData;

@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand
{
}

@property (strong, nonatomic) SAUIAudioData *aceAudioData;
@property (strong, nonatomic) SATTSSpeechSynthesisAudioInfo *aceAudioInfo;
@property (nonatomic) long long currentPacketNumber;

+ (id)speechSynthesisPartialResponse;
+ (id)speechSynthesisPartialResponseWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
