//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (copy, nonatomic) NSString *audioType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableAudioInfo;
@property (copy, nonatomic) NSString *gender;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (nonatomic) BOOL streaming;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;

+ (id)startSpeechSynthesisRequest;
+ (id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

