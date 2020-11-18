//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;
@protocol SAHandoffPayload;

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (strong, nonatomic) id<SAHandoffPayload> handoffPayload;
@property (copy, nonatomic) NSString *notificationText;

+ (id)initiateHandoffOnCompanion;
+ (id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

