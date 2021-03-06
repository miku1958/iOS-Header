//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKAccountService, PKInAppPaymentService;

@interface PKVirtualCardManager : NSObject
{
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
}

- (void).cxx_destruct;
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)promptDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryKeychainForVirtualCard:(CDUnknownBlockType)arg1;
- (id)urlToPassDetailsForVirtualCard:(id)arg1;

@end

