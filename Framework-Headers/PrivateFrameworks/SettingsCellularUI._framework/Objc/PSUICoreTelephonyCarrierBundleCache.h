//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_carrierNameDict;
    NSMutableDictionary *_carrierBundleVersionDict;
    NSMutableDictionary *_volteCustomerCarePhoneNumberDict;
    NSMutableDictionary *_volteCustomerCareWebsiteDict;
    NSMutableDictionary *_showVolteWarningUnsupportedCarrierDict;
    NSMutableDictionary *_show5GWarningUnsupportedCarrierDict;
    NSMutableDictionary *_carrierServicesDict;
    NSMutableDictionary *_showServiceCodes;
    NSMutableDictionary *_carrierServicesAccountUrlDict;
    NSMutableDictionary *_carrierMmsInfoUrlDict;
}

@property (strong) NSMutableDictionary *carrierBundleVersionDict; // @synthesize carrierBundleVersionDict=_carrierBundleVersionDict;
@property (strong) NSMutableDictionary *carrierMmsInfoUrlDict; // @synthesize carrierMmsInfoUrlDict=_carrierMmsInfoUrlDict;
@property (strong) NSMutableDictionary *carrierNameDict; // @synthesize carrierNameDict=_carrierNameDict;
@property (strong) NSMutableDictionary *carrierServicesAccountUrlDict; // @synthesize carrierServicesAccountUrlDict=_carrierServicesAccountUrlDict;
@property (strong) NSMutableDictionary *carrierServicesDict; // @synthesize carrierServicesDict=_carrierServicesDict;
@property (strong, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSMutableDictionary *show5GWarningUnsupportedCarrierDict; // @synthesize show5GWarningUnsupportedCarrierDict=_show5GWarningUnsupportedCarrierDict;
@property (strong) NSMutableDictionary *showServiceCodes; // @synthesize showServiceCodes=_showServiceCodes;
@property (strong) NSMutableDictionary *showVolteWarningUnsupportedCarrierDict; // @synthesize showVolteWarningUnsupportedCarrierDict=_showVolteWarningUnsupportedCarrierDict;
@property (readonly) Class superclass;
@property (strong) NSMutableDictionary *volteCustomerCarePhoneNumberDict; // @synthesize volteCustomerCarePhoneNumberDict=_volteCustomerCarePhoneNumberDict;
@property (strong) NSMutableDictionary *volteCustomerCareWebsiteDict; // @synthesize volteCustomerCareWebsiteDict=_volteCustomerCareWebsiteDict;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_clearCache;
- (id)activeDataCarrierName;
- (void)carrierBundleChange:(id)arg1;
- (id)carrierBundleValue:(id)arg1 context:(id)arg2;
- (id)carrierBundleVersion:(id)arg1;
- (id)carrierName:(id)arg1;
- (id)carrierServices:(id)arg1;
- (id)carrierServicesAccountTitle:(id)arg1;
- (id)carrierServicesAccountUrl:(id)arg1;
- (id)fetchCarrierBundleValue:(id)arg1;
- (id)fetchCarrierBundleValue:(id)arg1 context:(id)arg2;
- (id)fetchCarrierBundleValueAsString:(id)arg1;
- (void)fetchCarrierBundleVersion;
- (void)fetchCarrierMmsInfoUrl;
- (void)fetchCarrierName;
- (void)fetchCarrierServices;
- (void)fetchCarrierServicesAccountUrl;
- (void)fetchShow5GWarningUnsupportedCarrier;
- (void)fetchShowServiceCodes;
- (void)fetchShowVolteWarningUnsupportedCarrier;
- (void)fetchVolteCustomerCarePhoneNumber;
- (void)fetchVolteCustomerCareWebsite;
- (id)init;
- (id)initPrivate;
- (id)mmsInfoTitle:(id)arg1;
- (id)mmsInfoUrl:(id)arg1;
- (BOOL)show5GWarningUnsupportedCarrier:(id)arg1;
- (BOOL)showServiceCodes:(id)arg1;
- (BOOL)showVolteWarningUnsupportedCarrier:(id)arg1;
- (id)volteCustomerCarePhoneNumber:(id)arg1;
- (id)volteCustomerCareWebsite:(id)arg1;
- (void)willEnterForeground;

@end

