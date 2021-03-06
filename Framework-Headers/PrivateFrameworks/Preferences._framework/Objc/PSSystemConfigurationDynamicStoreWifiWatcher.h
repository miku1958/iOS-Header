//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject
{
    struct __SCDynamicStore *_prefs;
    struct __CFString *_wifiKey;
    struct __CFString *_wifiInterface;
    struct __CFString *_tetheringLink;
}

+ (id)sharedInstance;
+ (BOOL)wifiEnabled;
- (id)_wifiNameWithState:(id)arg1;
- (id)_wifiPowerWithState:(id)arg1;
- (id)_wifiTetheringWithState:(id)arg1;
- (void)dealloc;
- (void)findKeysAirPortState:(id *)arg1 andTetheringState:(id *)arg2;
- (id)init;
- (id)wifiConfig;

@end

