//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuota/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, _ICQBannerSpecification, _ICQButtonSpecification, _ICQDeviceInfo, _ICQFollowupSpecification, _ICQUpgradeFlowSpecification, _ICQXMLSpecification;

@interface ICQOffer : NSObject <NSSecureCoding>
{
    NSDictionary *_serverDictionary;
    NSDictionary *_planDetailsOverride;
    long long _actionOverride;
    BOOL _iTunesAccountExists;
    NSDate *_retrievalDate;
    NSDate *_expirationDate;
    long long _offerType;
    long long _level;
    NSString *_bundleIdentifier;
    NSString *_appVersionId;
    NSString *_accountAltDSID;
    NSString *_notificationID;
    NSString *_offerId;
    _ICQBannerSpecification *_bannerSpecification;
    _ICQButtonSpecification *_buttonSpecification;
    _ICQFollowupSpecification *_followupSpecification;
    _ICQUpgradeFlowSpecification *_upgradeFlowSpecification;
    _ICQXMLSpecification *_XMLSpecification;
    _ICQDeviceInfo *_deviceInfo;
    NSString *_context;
}

@property (readonly, nonatomic) _ICQXMLSpecification *XMLSpecification;
@property (strong, nonatomic) _ICQXMLSpecification *XMLSpecification; // @synthesize XMLSpecification=_XMLSpecification;
@property (readonly, nonatomic) double _callbackInterval;
@property (strong, nonatomic) NSString *accountAltDSID; // @synthesize accountAltDSID=_accountAltDSID;
@property (readonly, nonatomic) long long action;
@property (strong, nonatomic) NSString *appVersionId;
@property (strong, nonatomic) NSString *appVersionId; // @synthesize appVersionId=_appVersionId;
@property (readonly, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (strong, nonatomic) _ICQBannerSpecification *bannerSpecification; // @synthesize bannerSpecification=_bannerSpecification;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (strong, nonatomic) _ICQButtonSpecification *buttonSpecification; // @synthesize buttonSpecification=_buttonSpecification;
@property (strong, nonatomic) NSString *context;
@property (strong, nonatomic) NSString *context; // @synthesize context=_context;
@property (strong, nonatomic) _ICQDeviceInfo *deviceInfo;
@property (strong, nonatomic) _ICQDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (strong, nonatomic) _ICQFollowupSpecification *followupSpecification; // @synthesize followupSpecification=_followupSpecification;
@property (readonly, nonatomic) BOOL iTunesAccountExists;
@property (nonatomic) BOOL iTunesAccountExists; // @synthesize iTunesAccountExists=_iTunesAccountExists;
@property (nonatomic) long long level; // @synthesize level=_level;
@property (strong, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property (strong, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property (readonly, nonatomic) long long offerType; // @synthesize offerType=_offerType;
@property (readonly, nonatomic) NSURL *remoteUIURL;
@property (strong, nonatomic) NSDate *retrievalDate; // @synthesize retrievalDate=_retrievalDate;
@property (readonly, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (strong, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification; // @synthesize upgradeFlowSpecification=_upgradeFlowSpecification;

+ (id)sampleOfferForLevel:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)alertSpecificationAtIndex:(unsigned long long)arg1;
- (id)alertSpecificationForAlertKey:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;
- (BOOL)isDetailAppBannerOffer;
- (BOOL)placeholderExists;
- (BOOL)showsPhotoVideoCounts;
- (id)storagePurchaseKeybagForButtonId:(id)arg1;
- (void)updateOfferWithPlanDetails:(id)arg1 actionString:(id)arg2;

@end
