//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *definitionEntries;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *partOfSpeech;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *synonyms;

+ (id)definitionGroup;
+ (id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

