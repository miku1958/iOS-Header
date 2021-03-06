//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString, PKPaymentProvisioningMethodMetadata;
@protocol OS_dispatch_queue, PKContactlessCardIngesterDelegate;

@interface PKContactlessCardIngester : NSObject
{
    BOOL _listening;
    NSString *_pushTopic;
    PKPaymentProvisioningMethodMetadata *_readerModeProvisioningMetadata;
    NSNumberFormatter *_currencyNumberFormatter;
    id<PKContactlessCardIngesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_contactlessCardIngesterQueue;
    CDUnknownBlockType _cardSessionTokenCompletionHandler;
    CDUnknownBlockType _disableCardCompletionHandler;
}

+ (id)debugDescriptionForStatus:(unsigned long long)arg1;
+ (BOOL)isSupported;
- (void).cxx_destruct;
- (void)_cancelCardIngestion;
- (id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2;
- (void)_ingestCardWithCardSessionToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ingestCardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startListeningToRemoteAdminEventsIfRequired;
- (void)_stopListeningToRemoteAdminEvents;
- (void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)ingestCardWithSuccessHandler:(CDUnknownBlockType)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2;
- (void)invalidate;

@end

