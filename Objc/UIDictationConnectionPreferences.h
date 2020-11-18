//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;
}

@property (strong, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)afPreferencesChanged:(id)arg1;
- (long long)dataSharingOptInStatus;
- (BOOL)dictationIsEnabled;
- (id)dictationSLSEnabledLanguages;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (id)initSingleton;
- (BOOL)isSmartLanguageSelectionEnabled;
- (id)languageCode;
- (id)manualEndpointingThreshold;
- (BOOL)suppressDataSharingOptIn;
- (BOOL)suppressDictationOptIn;

@end

