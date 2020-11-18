//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <StoreKitUI/ISDialogOperationDelegate-Protocol.h>

@class NSString;

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate>
{
    CDUnknownBlockType _resultBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (void)_logResultsForSuccess:(BOOL)arg1 shouldVerify:(BOOL)arg2 failureReason:(id)arg3 error:(id)arg4;
- (BOOL)_performAuthentication;
- (id)_subOperationWithBagKey:(id)arg1;
- (void)main;
- (void)operation:(id)arg1 selectedButton:(id)arg2;

@end

