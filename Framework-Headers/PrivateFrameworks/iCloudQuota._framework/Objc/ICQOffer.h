//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, _ICQBannerSpecification, _ICQButtonSpecification, _ICQUpgradeFlowSpecification;

@interface ICQOffer : NSObject
{
    NSDictionary *_serverDictionary;
    BOOL _iTunesAccountExists;
    NSDate *_retrievalDate;
    NSDate *_expirationDate;
    long long _offerType;
    long long _level;
    NSString *_bundleIdentifier;
    NSString *_accountAltDSID;
    NSString *_notificationID;
    NSString *_offerId;
    _ICQBannerSpecification *_bannerSpecification;
    _ICQButtonSpecification *_buttonSpecification;
    _ICQUpgradeFlowSpecification *_upgradeFlowSpecification;
}

@property (readonly, nonatomic) double _callbackInterval;
@property (strong, nonatomic) NSString *accountAltDSID; // @synthesize accountAltDSID=_accountAltDSID;
@property (readonly, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (strong, nonatomic) _ICQBannerSpecification *bannerSpecification; // @synthesize bannerSpecification=_bannerSpecification;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (strong, nonatomic) _ICQButtonSpecification *buttonSpecification; // @synthesize buttonSpecification=_buttonSpecification;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) BOOL iTunesAccountExists;
@property (nonatomic) BOOL iTunesAccountExists; // @synthesize iTunesAccountExists=_iTunesAccountExists;
@property (nonatomic) long long level; // @synthesize level=_level;
@property (strong, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property (strong, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property (readonly, nonatomic) long long offerType; // @synthesize offerType=_offerType;
@property (strong, nonatomic) NSDate *retrievalDate; // @synthesize retrievalDate=_retrievalDate;
@property (readonly, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (strong, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification; // @synthesize upgradeFlowSpecification=_upgradeFlowSpecification;

+ (id)sampleOfferForLevel:(long long)arg1;
- (void).cxx_destruct;
- (id)alertSpecificationAtIndex:(unsigned long long)arg1;
- (id)alertSpecificationForAlertKey:(id)arg1;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;
- (id)keybagForBuyStorage;

@end

