//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSNumber;

@interface IDSMessage : IDSBaseMessage <NSCopying>
{
    NSNumber *_wantsDeliveryStatus;
    NSNumber *_version;
    NSDictionary *_deliveryStatusContext;
    BOOL _wantsCertifiedDelivery;
}

@property (copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property (copy) NSNumber *version; // @synthesize version=_version;
@property BOOL wantsCertifiedDelivery; // @synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery;
@property (copy) NSNumber *wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;

- (void).cxx_destruct;
- (id)_madridServerBag;
- (id)_objectForKeyFromMadridBag:(id)arg1;
- (BOOL)_shouldUseJSONForEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)messageBody;
- (id)userAgentHeaderString;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsUserAgentInHeaders;

@end
