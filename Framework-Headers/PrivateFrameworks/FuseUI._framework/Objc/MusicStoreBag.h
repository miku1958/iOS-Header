//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface MusicStoreBag : NSObject
{
    NSDictionary *_bagDictionary;
}

@property (readonly, nonatomic) NSDictionary *bagDictionary; // @synthesize bagDictionary=_bagDictionary;
@property (readonly, nonatomic) unsigned long long librarySharedPlaylistTrackCountLimit;
@property (readonly, nonatomic) long long minimumNumberOfDaysBetweenPresentingWelcomeScreen;
@property (readonly, nonatomic) NSURL *prominentRadioStationInfoURL;
@property (readonly, nonatomic) BOOL supportsConnect;
@property (readonly, nonatomic) BOOL supportsSubscription;
@property (readonly, nonatomic) NSDictionary *tabConfigurations;
@property (readonly, nonatomic) long long versionForNoThanksOptOut;
@property (readonly, nonatomic) long long versionForNotNowOptOut;

- (void).cxx_destruct;
- (long long)_optOutVersionForKey:(id)arg1;
- (id)_subscriptionDictionary;
- (id)initWithBagDictionary:(id)arg1;

@end

