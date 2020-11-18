//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSString, SADomainObject;

@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SADomainObject *object;
@property (readonly) Class superclass;

+ (id)domainObjectCreate;
+ (id)domainObjectCreateWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
