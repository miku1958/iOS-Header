//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSArray *aceAudioData;
@property (copy, nonatomic) NSArray *dialogStrings;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;

+ (id)preSynthesizeTTS;
+ (id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

