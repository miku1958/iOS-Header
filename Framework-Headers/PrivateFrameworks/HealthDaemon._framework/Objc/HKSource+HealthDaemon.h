//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSource.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKSource (HealthDaemon) <HDCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_applicationNameForBundleIdentifier:(id)arg1;
+ (id)_applicationNameForCompanionBundleIdentifier:(id)arg1;
+ (id)_studyNameForResearchStudySource:(id)arg1;
+ (id)createWithCodable:(id)arg1;
+ (id)hd_currentDeviceSourceName;
+ (id)hd_getNameForSource:(id)arg1;
+ (BOOL)hd_isSpartanDeviceBundleIdentifier:(id)arg1;
+ (id)hd_sourceForClient:(id)arg1;
- (id)codableRepresentationForSync;
@end

