//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTUserConfiguration : NSObject
{
}

@property (readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property (nonatomic) BOOL allowAnyNetwork;
@property (nonatomic) BOOL cellularFaceTimeEnabled;

+ (id)sharedInstance;
- (BOOL)_adequateInternalOrCarrierInstall;
- (BOOL)cellularDataEnabledForBundleId:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)nonBluetoothAllowedForBundleId:(id)arg1;
- (BOOL)wifiAllowedForBundleId:(id)arg1;

@end

