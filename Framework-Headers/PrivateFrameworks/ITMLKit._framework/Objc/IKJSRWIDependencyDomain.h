//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IKJSRWIDependencyDomain : NSObject
{
    NSString *_identifier;
    Class _agentClass;
    NSDictionary *_types;
    NSDictionary *_commands;
}

@property (strong, nonatomic) Class agentClass; // @synthesize agentClass=_agentClass;
@property (readonly, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSDictionary *types; // @synthesize types=_types;

+ (id)allDomains;
+ (id)allowedDomains;
+ (id)domainAgentClassMap;
+ (void)processDomains:(id)arg1;
- (void).cxx_destruct;
- (id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2;
- (BOOL)isValidForAgentWithError:(id *)arg1;
- (BOOL)isValidForTypesWithError:(id *)arg1;
- (BOOL)isValidWithError:(id *)arg1;

@end

