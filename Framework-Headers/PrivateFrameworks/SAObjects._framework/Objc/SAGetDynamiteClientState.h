//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAGetSingleClientState-Protocol.h>

@class NSArray, NSString, SADynamiteClientState;

@interface SAGetDynamiteClientState : SABaseClientBoundCommand <SAGetSingleClientState>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (copy, nonatomic) NSString *appId; // @dynamic appId;
@property (copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property (strong, nonatomic) SADynamiteClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;

+ (id)getDynamiteClientState;
+ (id)getDynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

