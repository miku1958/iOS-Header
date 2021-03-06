//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>
{
}

@property (copy, nonatomic) NSString *answer;
@property (copy, nonatomic) NSString *confidenceLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAGKSpeakableAnswer *speakableAnswer;
@property (readonly) Class superclass;

+ (id)directAnswer;
+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

