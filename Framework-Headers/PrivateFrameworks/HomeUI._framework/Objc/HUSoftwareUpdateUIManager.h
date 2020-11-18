//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFExecutionEnvironmentObserver-Protocol.h>
#import <HomeUI/HFSoftwareUpdateObserver-Protocol.h>

@class NSMapTable, NSString;

@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver>
{
    NSMapTable *_homeBackgroundCheckMapTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMapTable *homeBackgroundCheckMapTable; // @synthesize homeBackgroundCheckMapTable=_homeBackgroundCheckMapTable;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg1 inHome:(id)arg2;
- (BOOL)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg1 home:(id)arg2;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (id)fetchAvailableUpdatesForAccessories:(id)arg1;
- (id)fetchAvailableUpdatesForAccessory:(id)arg1;
- (id)fetchAvailableUpdatesForHome:(id)arg1;
- (id)init;
- (BOOL)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg1 home:(id)arg2 error:(out id *)arg3;
- (long long)numberOfAccessoriesWithAvailableUpdates:(id)arg1;
- (long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1;
- (id)presentLicensesIfNeededForSoftwareUpdate:(id)arg1 home:(id)arg2 presentationDelegate:(id)arg3;
- (id)startSilentBackgroundCheckForHome:(id)arg1;
- (id)startUpdateForAccessory:(id)arg1 update:(id)arg2 presentationDelegate:(id)arg3;
- (id)startUpdatesForAccessories:(id)arg1 presentationDelegate:(id)arg2;
- (id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2;

@end

