//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateAction-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASTCommandTemplateAction : AceObject <SASTTemplateAction>
{
}

@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *delayInMilliSeconds;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)commandTemplateAction;
+ (id)commandTemplateActionWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
