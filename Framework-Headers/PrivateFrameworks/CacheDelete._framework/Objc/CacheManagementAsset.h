//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CacheManagementAsset : NSObject
{
    int _priority;
    unsigned int _assetVersion;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_relativePath;
    NSString *_contentType;
    NSData *_metadata;
    double _expiration_date;
    double _consumed_date;
    double _download_start_date;
    double _download_completion_date;
    double _last_viewed_date;
    NSString *_absolutePath;
}

@property (strong) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
@property (readonly) unsigned int assetVersion; // @synthesize assetVersion=_assetVersion;
@property double consumed_date; // @synthesize consumed_date=_consumed_date;
@property (strong, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property double download_completion_date; // @synthesize download_completion_date=_download_completion_date;
@property double download_start_date; // @synthesize download_start_date=_download_start_date;
@property double expiration_date; // @synthesize expiration_date=_expiration_date;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property double last_viewed_date; // @synthesize last_viewed_date=_last_viewed_date;
@property (strong, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property int priority; // @synthesize priority=_priority;
@property (strong, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property (strong, nonatomic) NSData *thumbnailData;

+ (id)assetFromData:(id)arg1;
+ (id)assetFromFile:(id)arg1 withIdentifier:(id)arg2;
+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2;
+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2 createIfAbsent:(BOOL)arg3;
+ (id)assetWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;
- (void).cxx_destruct;
- (void)commit;
- (id)consumedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_1285e12c *)createFlattenedAsset:(long long *)arg1;
- (id)description;
- (id)downloadCompletionDate;
- (id)downloadStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)fullPath;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlattenedAsset:(CDStruct_1285e12c *)arg1;
- (id)initWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;
- (id)lastViewedDate;
- (int)purgeabilityScoreAtUrgency:(int)arg1;
- (void)setConsumedDate:(id)arg1;
- (void)setDownloadCompletionDate:(id)arg1;
- (void)setDownloadStartDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (long long)size;
- (long long)sizeCached:(BOOL)arg1;

@end

