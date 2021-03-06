//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable>
{
}

@property (copy, nonatomic) NSDictionary *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainId;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *operationId;
@property (readonly) Class superclass;

+ (id)operation;
+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

