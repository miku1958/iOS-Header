//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/SAAceIdentifiable-Protocol.h>

@class NSString, NSURL;

@interface SADomainObject : SABaseAceObject <SAAceIdentifiable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property (readonly) Class superclass;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

