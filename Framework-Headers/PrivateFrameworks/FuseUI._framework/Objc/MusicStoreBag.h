//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface MusicStoreBag : NSObject
{
    NSDictionary *_bagDictionary;
}

@property (readonly, nonatomic) NSDictionary *bagDictionary; // @synthesize bagDictionary=_bagDictionary;
@property (readonly, nonatomic) NSURL *browseURL;
@property (readonly, nonatomic) NSURL *forYouURL;
@property (readonly, nonatomic) NSArray *iOSVersionsForFormerFreeTrialUpsell;
@property (readonly, nonatomic) NSArray *iOSVersionsForNoThanksUpsell;
@property (readonly, nonatomic) NSArray *iOSVersionsForNotNowUpsell;
@property (readonly, nonatomic) BOOL isIgnoringAddToPlaylistUserSetting;
@property (readonly, nonatomic) NSURL *legacyForYouURL;
@property (readonly, nonatomic) unsigned long long librarySharedPlaylistTrackCountLimit;
@property (readonly, nonatomic) long long minimumNumberOfDaysBetweenPresentingWelcomeScreen;
@property (readonly, nonatomic) float popularityStarThreshold;
@property (readonly, nonatomic) NSURL *prominentRadioStationInfoURL;
@property (readonly, nonatomic) NSURL *radioGroupingURL;
@property (readonly, nonatomic) NSString *storeFrontSuffix;
@property (readonly, nonatomic) BOOL supportsConnect;
@property (readonly, nonatomic) BOOL supportsSubscription;
@property (readonly, nonatomic) NSDictionary *tabConfigurations;
@property (readonly, nonatomic) long long versionForFormerFreeTrialUpsell;
@property (readonly, nonatomic) long long versionForNoThanksUpsell;
@property (readonly, nonatomic) long long versionForNotNowUpsell;

- (void).cxx_destruct;
- (id)_iOSVersionsForUpsellTypeKey:(id)arg1;
- (id)_subscriptionDictionary;
- (long long)_upsellVersionForKey:(id)arg1;
- (id)initWithBagDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

