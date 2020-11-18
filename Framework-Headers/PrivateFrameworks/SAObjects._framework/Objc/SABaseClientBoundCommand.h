//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *metricsContext;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *usefulnessScore;

+ (id)baseClientBoundCommand;
+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

