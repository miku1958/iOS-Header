//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding>
{
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
    BOOL _shouldValidateRentalInfo;
    BOOL _checkoutWithPlay;
    unsigned long long _checkoutType;
}

@property (readonly) NSNumber *accountIdentifier;
@property unsigned long long checkoutType; // @synthesize checkoutType=_checkoutType;
@property (nonatomic, getter=shouldCheckoutWithPlay) BOOL checkoutWithPlay; // @synthesize checkoutWithPlay=_checkoutWithPlay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long downloadIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (nonatomic) BOOL shouldValidateRentalInfo; // @synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo;
@property (readonly) NSArray *sinfs;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithSinfs:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;

@end

