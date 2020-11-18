//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSArray *appsList;
@property (strong, nonatomic) SAIntentGroupProtobufMessage *intent;

+ (id)resolveAppForIntent;
+ (id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

