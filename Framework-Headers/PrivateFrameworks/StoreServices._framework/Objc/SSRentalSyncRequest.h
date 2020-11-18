//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding>
{
    NSArray *_sinfs;
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
}

@property (readonly) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *rentalKeyIdentifier; // @synthesize rentalKeyIdentifier=_rentalKeyIdentifier;
@property (readonly) NSArray *sinfs; // @synthesize sinfs=_sinfs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithSinfs:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;

@end
