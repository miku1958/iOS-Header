//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BSPlatform : NSObject
{
}

@property (readonly, nonatomic) BOOL hasGasGauge;
@property (readonly, nonatomic) BOOL hasOrbCapability;
@property (readonly, nonatomic, getter=isInternalInstall) BOOL internalInstall;
@property (readonly, copy, nonatomic) NSString *localizedProductName;
@property (readonly, nonatomic, getter=isMultiCore) BOOL multiCore;
@property (readonly, copy, nonatomic) NSString *productBuildVersion;
@property (readonly, copy, nonatomic) NSString *productClass;
@property (readonly, copy, nonatomic) NSString *productHardwareModel;
@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *uniqueDeviceIdentifier;

+ (id)sharedInstance;

@end
