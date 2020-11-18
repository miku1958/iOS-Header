//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreferencesUI/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <PreferencesUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate>
{
    CoreTelephonyClient *_client;
    NSMutableDictionary *_specifiersDict;
}

@property (strong, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *specifiersDict; // @synthesize specifiersDict=_specifiersDict;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_allowClicks;
- (void)_clearCache;
- (void)carrierBundleChange:(id)arg1;
- (void)dealloc;
- (void)dialCarrierServiceNumber:(id)arg1;
- (void)fetchSpecifiers;
- (id)init;
- (id)initPrivate;
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (id)newMyAccountSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (void)openURLWithSpecifier:(id)arg1;
- (id)readPreference:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)specifiers:(id)arg1;
- (void)willEnterForeground;

@end

