//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding>
{
    BOOL _hasPeerPaymentAccount;
    NSString *_lastUpdatedTag;
    NSArray *_certificates;
    NSURL *_brokerURL;
    NSString *_regionCode;
    NSURL *_paymentServicesURL;
    NSURL *_inAppPaymentServicesURL;
    NSURL *_paymentServicesMerchantURL;
    NSURL *_trustedServiceManagerURL;
    NSString *_trustedServiceManagerPushTopic;
    long long _consistencyCheckBackoffLevel;
    NSString *_userNotificationPushTopic;
    NSURL *_peerPaymentServiceURL;
}

@property (strong, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property (strong, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property (nonatomic) long long consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property (nonatomic) BOOL hasPeerPaymentAccount; // @synthesize hasPeerPaymentAccount=_hasPeerPaymentAccount;
@property (strong, nonatomic) NSURL *inAppPaymentServicesURL; // @synthesize inAppPaymentServicesURL=_inAppPaymentServicesURL;
@property (strong, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property (strong, nonatomic) NSURL *paymentServicesMerchantURL; // @synthesize paymentServicesMerchantURL=_paymentServicesMerchantURL;
@property (strong, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property (strong, nonatomic) NSURL *peerPaymentServiceURL; // @synthesize peerPaymentServiceURL=_peerPaymentServiceURL;
@property (strong, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property (strong, nonatomic) NSString *trustedServiceManagerPushTopic; // @synthesize trustedServiceManagerPushTopic=_trustedServiceManagerPushTopic;
@property (strong, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property (strong, nonatomic) NSString *userNotificationPushTopic; // @synthesize userNotificationPushTopic=_userNotificationPushTopic;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

