//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGQPSettingsObserver-Protocol.h>

@class NSString, SGQPSettings, _PASAsset, _PASNotificationToken;
@protocol OS_dispatch_queue, SGQPAssetUpdateDelegate;

@interface SGQPAssetManager : NSObject <SGQPSettingsObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    _PASAsset *_commonAsset;
    SGQPSettings *_settings;
    _PASAsset *_currentPrimaryAsset;
    _PASNotificationToken *_currentPrimaryAssetNotificationToken;
    NSString *_currentLocale;
    NSString *_currentABGroup;
    NSObject<SGQPAssetUpdateDelegate> *_delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)abGroup:(id)arg1 existsIn:(id)arg2;
+ (id)chooseABGroupForVendorUUID:(id)arg1 fromGroups:(id)arg2;
+ (id)chooseLocaleIdForCurrentLocale:(id)arg1 availableLocales:(id)arg2;
+ (id)preinstalledPathOfAsset:(id)arg1;
+ (id)thisDeviceVendorUUID;
- (void).cxx_destruct;
- (void)_decideWhatPrimaryAssetVariantAndRequestIt;
- (void)commonAssetReady;
- (id)init;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (void)loadPreinstalledAssetIfNoPrimaryAssetAvailable;
- (void)primaryAssetReady;
- (void)settingsChanged;

@end

