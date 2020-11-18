//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>

@class HKNanoSyncPairedDeviceInfo, NSSet;

@interface HKNanoSyncPairedDevicesSnapshot : NSObject <NSCopying>
{
    HKNanoSyncPairedDeviceInfo *_activeDeviceInfo;
    NSSet *_allDeviceInfos;
    unsigned long long _hash;
}

@property (readonly) HKNanoSyncPairedDeviceInfo *activeDeviceInfo;
@property (readonly, copy) NSSet *allDeviceInfos;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPairedDeviceInfos:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

