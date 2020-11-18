//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating>
{
    PKPaymentRequest *_request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_checkTotal:(id)arg1 error:(id *)arg2;
- (id)initWithPaymentRequest:(id)arg1;
- (BOOL)isValidWithError:(id *)arg1;

@end

