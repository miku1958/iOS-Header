//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary;

@protocol VUIJSSettingsInterface <JSExport>
- (NSDictionary *)appSettingsByChannelID;
- (NSArray *)consentedBrands;
- (NSArray *)deniedBrands;
- (void)forceUpdateWithCallback:(JSValue *)arg1;
- (unsigned long long)privacyFlowContentVersion;
- (BOOL)privateModeEnabled;
- (BOOL)sportsScoreSpoilersAllowed;
- (void)updateFeaturesConfiguration:(NSDictionary *)arg1;
- (NSDictionary *)userPreferences;
- (NSDictionary *)wlkOverrides;
@end

