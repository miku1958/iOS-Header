//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientDataDelegate-Protocol.h>
#import <SettingsCellularUI/RadiosPreferencesDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString, RadiosPreferences;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cellularDataSetting;
    BOOL _cellularDataSettingInitialized;
    struct __CTServerConnection *_ctConnection;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_dataStatusDict;
    NSMutableDictionary *_intlDataAccessStatus;
    RadiosPreferences *_radioPreferences;
}

@property BOOL cellularDataSetting; // @synthesize cellularDataSetting=_cellularDataSetting;
@property BOOL cellularDataSettingInitialized; // @synthesize cellularDataSettingInitialized=_cellularDataSettingInitialized;
@property (strong, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property struct __CTServerConnection *ctConnection; // @synthesize ctConnection=_ctConnection;
@property (strong) NSMutableDictionary *dataStatusDict; // @synthesize dataStatusDict=_dataStatusDict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSMutableDictionary *intlDataAccessStatus; // @synthesize intlDataAccessStatus=_intlDataAccessStatus;
@property (strong, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dataSettingsChanged:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)dealloc;
- (void)fetchCellularDataEnabled;
- (void)fetchDataStatus;
- (void)fetchInternationalDataAccessStatus:(id)arg1;
- (id)getDataStatus:(id)arg1;
- (BOOL)getInternationalDataAccessStatus;
- (BOOL)getInternationalDataAccessStatus:(id)arg1;
- (id)init;
- (id)initPrivate;
- (BOOL)isAirplaneModeEnabled;
- (BOOL)isCellularDataEnabled;
- (BOOL)isDataFallbackEnabled;
- (void)setCellularDataEnabled:(BOOL)arg1;
- (void)setDataFallbackEnabled:(BOOL)arg1;
- (void)setInternationalDataAccessStatus:(BOOL)arg1;
- (void)setInternationalDataAccessStatus:(id)arg1 status:(BOOL)arg2;
- (void)willEnterForeground;

@end

