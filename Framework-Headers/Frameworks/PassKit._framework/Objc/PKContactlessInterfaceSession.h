//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

@class NSArray, PKFieldProperties, PKPaymentApplication, PKPaymentPass;
@protocol PKContactlessInterfaceSessionDelegate;

@interface PKContactlessInterfaceSession : PKPaymentSession
{
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentPass *_activatedPaymentPass;
    NSArray *_activatedValueAddedServicePasses;
    NSArray *_activatedHostCards;
    NSArray *_valueAddedServiceTransactions;
    PKFieldProperties *_fieldProperties;
    unsigned long long _transactionStartTime;
    BOOL _fieldPresent;
    BOOL _fieldPropertiesLookupActive;
    unsigned long long _fieldPropertiesLookupValueAddedServiceMode;
    unsigned long long _fieldPropertiesLookupTechnology;
    unsigned long long _state;
    id<PKContactlessInterfaceSessionDelegate> _delegate;
}

@property (readonly, nonatomic) PKPaymentApplication *activatedPaymentApplication;
@property (readonly, nonatomic) PKPaymentPass *activatedPaymentPass;
@property (readonly, nonatomic) NSArray *activatedValueAddedServicePasses; // @synthesize activatedValueAddedServicePasses=_activatedValueAddedServicePasses;
@property (nonatomic) id<PKContactlessInterfaceSessionDelegate> delegate;
@property (readonly, nonatomic) PKFieldProperties *fieldProperties; // @synthesize fieldProperties=_fieldProperties;
@property (readonly, nonatomic) unsigned long long state;

- (id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2;
- (BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(BOOL)arg3;
- (BOOL)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1;
- (void)dealloc;
- (BOOL)fieldPresent;
- (void)setState:(unsigned long long)arg1;
- (BOOL)stopCardEmulation;

@end

