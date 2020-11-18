//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FCSubscriptionEntitlement : NSObject
{
    BOOL _newsAppPurchase;
    BOOL _isTrialPeriod;
    BOOL _isPurchaser;
    BOOL _isAmplifyUser;
    NSNumber *_appAdamID;
    NSString *_chargeCurrencyCode;
    NSNumber *_inAppAdamID;
}

@property (readonly, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
@property (readonly, nonatomic) NSString *chargeCurrencyCode; // @synthesize chargeCurrencyCode=_chargeCurrencyCode;
@property (readonly, nonatomic) NSNumber *inAppAdamID; // @synthesize inAppAdamID=_inAppAdamID;
@property (readonly, nonatomic) BOOL isAmplifyUser; // @synthesize isAmplifyUser=_isAmplifyUser;
@property (readonly, nonatomic) BOOL isPurchaser; // @synthesize isPurchaser=_isPurchaser;
@property (readonly, nonatomic) BOOL isTrialPeriod; // @synthesize isTrialPeriod=_isTrialPeriod;
@property (readonly, nonatomic, getter=isNewsAppPurchase) BOOL newsAppPurchase; // @synthesize newsAppPurchase=_newsAppPurchase;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(BOOL)arg4 isTrailPeriod:(BOOL)arg5 isPurchaser:(BOOL)arg6 isAmplifyUser:(BOOL)arg7;

@end
