//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AAUIQuotaResponse : AAResponse
{
    NSDictionary *_quotaInfo;
    NSArray *_usage;
    NSDictionary *_endPoints;
    NSDictionary *_storageInfo;
    NSDictionary *_storageMeterLabel;
}

@property (readonly, nonatomic) NSNumber *availableStorageInBytes;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) BOOL hasMaxTier;
@property (readonly, nonatomic) NSArray *iCloudMediaUsage;
@property (readonly, nonatomic) NSURL *manageStorageURL;
@property (readonly, nonatomic) NSNumber *totalStorageInByes;
@property (readonly, nonatomic) NSNumber *totalStorageInBytes;
@property (readonly, nonatomic) NSArray *usage;
@property (readonly, nonatomic) NSNumber *usedStorageInBytes;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

