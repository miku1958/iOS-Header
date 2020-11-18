//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *definition;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *examples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *variations;

+ (id)definitionEntry;
+ (id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
