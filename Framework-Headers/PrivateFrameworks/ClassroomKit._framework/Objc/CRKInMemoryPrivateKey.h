//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKPrivateKey-Protocol.h>

@class CRKIdentityConfiguration, NSData, NSString;

@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey>
{
    CRKIdentityConfiguration *_configuration;
}

@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct __SecKey *underlyingPrivateKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithData:(id)arg1;

@end

