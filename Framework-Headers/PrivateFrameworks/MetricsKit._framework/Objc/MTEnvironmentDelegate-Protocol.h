//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/NSObject-Protocol.h>

@protocol NSObject;

@protocol MTEnvironmentDelegate <NSObject>
- (id<NSObject>)app;
- (id<NSObject>)appVersion;
- (id<NSObject>)capacityData;
- (id<NSObject>)capacityDataAvailable;
- (id<NSObject>)capacityDisk;
- (id<NSObject>)capacitySystem;
- (id<NSObject>)capacitySystemAvailable;
- (id<NSObject>)connectionType;
- (id<NSObject>)cookies;
- (id<NSObject>)dsId;
- (id<NSObject>)hardwareFamily;
- (id<NSObject>)hardwareModel;
- (id<NSObject>)hostApp;
- (id<NSObject>)os;
- (id<NSObject>)osBuildNumber;
- (id<NSObject>)osLanguages;
- (id<NSObject>)osVersion;
- (id<NSObject>)pageUrl;
- (id<NSObject>)pixelRatio;
- (id<NSObject>)resourceRevNum;
- (id<NSObject>)screenHeight;
- (id<NSObject>)screenWidth;
- (id<NSObject>)storeFrontHeader;
- (id<NSObject>)userAgent;
- (id<NSObject>)userType;
- (id<NSObject>)windowInnerHeight;
- (id<NSObject>)windowInnerWidth;
- (id<NSObject>)windowOuterHeight;
- (id<NSObject>)windowOuterWidth;

@optional
- (id<NSObject>)environmentBuild;
- (id<NSObject>)environmentDataCenter;
- (id<NSObject>)environmentInstance;
- (id<NSObject>)hostAppVersion;
- (id<NSObject>)parentPageUrl;
@end
