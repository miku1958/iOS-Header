//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLCloudStorageInfo : NSObject
{
    long long _totalBytes;
    long long _availableBytes;
    long long _usedBytes;
    long long _cameraRollBackupBytes;
}

@property (nonatomic) long long availableBytes; // @synthesize availableBytes=_availableBytes;
@property (nonatomic) long long cameraRollBackupBytes; // @synthesize cameraRollBackupBytes=_cameraRollBackupBytes;
@property (nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property (nonatomic) long long usedBytes; // @synthesize usedBytes=_usedBytes;

+ (id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4;
- (id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4;

@end

