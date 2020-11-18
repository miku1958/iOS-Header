//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ICStoreFileAssetInfo, NSArray, NSData, NSString, NSURL;

@interface MPStoreFileAssetInfo : NSObject
{
    ICStoreFileAssetInfo *_internalInfo;
}

@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, copy, nonatomic) NSString *downloadKey;
@property (readonly, copy, nonatomic) NSArray *fairPlayInfoList;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) long long flavorType;
@property (readonly, copy, nonatomic) NSData *md5;
@property (readonly, nonatomic) long long protectionType;

- (void).cxx_destruct;
- (id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1;

@end
