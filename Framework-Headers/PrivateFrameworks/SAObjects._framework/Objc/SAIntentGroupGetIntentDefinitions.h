//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSArray *queries;

+ (id)getIntentDefinitions;
+ (id)getIntentDefinitionsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end
