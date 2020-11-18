//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSMutableCopying-Protocol.h>

@class MPStoreHLSAssetInfo, NSArray, NSDate, NSDictionary;

@interface MPStoreAssetPlaybackResponse : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *_dialogDictionary;
    NSDate *_expirationDate;
    NSArray *_fileAssetInfoList;
    MPStoreHLSAssetInfo *_hlsAssetInfo;
    id _suzeLeaseID;
}

@property (readonly, copy, nonatomic) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, copy, nonatomic) NSArray *fileAssetInfoList; // @synthesize fileAssetInfoList=_fileAssetInfoList;
@property (readonly, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo; // @synthesize hlsAssetInfo=_hlsAssetInfo;
@property (readonly, nonatomic) id suzeLeaseID; // @synthesize suzeLeaseID=_suzeLeaseID;

- (void).cxx_destruct;
- (id)_copyWithPlaybackResponseClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

