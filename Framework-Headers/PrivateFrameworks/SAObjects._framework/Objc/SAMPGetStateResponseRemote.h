//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAMPGetState;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand
{
}

@property (strong, nonatomic) SAMPGetState *getState;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) double routeTimeout;

+ (id)getStateResponseRemote;
+ (id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

