//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUILaunchTVRemote : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSString *hashedRouteId;

+ (id)launchTVRemote;
+ (id)launchTVRemoteWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

