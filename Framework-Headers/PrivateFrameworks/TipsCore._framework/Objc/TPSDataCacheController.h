//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSDataCacheController : NSObject
{
    long long _dataType;
    BOOL _backgroundOriginUpdate;
    BOOL _dataCacheDirty;
    NSString *_languageCode;
    NSMutableArray *_dataCacheArray;
    unsigned long long _cacheSize;
    unsigned long long _maxDataCacheSize;
    NSObject<OS_dispatch_queue> *_dataCacheSerialQueue;
    NSString *_identifier;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_dataCacheMap;
    NSString *_cacheDirectory;
    NSMutableArray *_originFetchItems;
}

@property (nonatomic) BOOL backgroundOriginUpdate; // @synthesize backgroundOriginUpdate=_backgroundOriginUpdate;
@property (strong, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property (nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property (strong, nonatomic) NSMutableArray *dataCacheArray; // @synthesize dataCacheArray=_dataCacheArray;
@property (nonatomic) BOOL dataCacheDirty; // @synthesize dataCacheDirty=_dataCacheDirty;
@property (strong, nonatomic) NSMutableDictionary *dataCacheMap; // @synthesize dataCacheMap=_dataCacheMap;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dataCacheSerialQueue; // @synthesize dataCacheSerialQueue=_dataCacheSerialQueue;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (nonatomic) unsigned long long maxDataCacheSize; // @synthesize maxDataCacheSize=_maxDataCacheSize;
@property (strong, nonatomic) NSMutableArray *originFetchItems; // @synthesize originFetchItems=_originFetchItems;
@property (strong, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

+ (void)removeAllDataCache;
+ (void)removeDataCacheAtPath:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addDataCache:(id)arg1;
- (id)cacheFileURLForDataCache:(id)arg1;
- (id)cacheFileURLForIdentifier:(id)arg1;
- (BOOL)cacheValidForIdentifier:(id)arg1;
- (void)cancelAllOriginSessionItems;
- (void)commonInit;
- (void)createCacheDirectory;
- (id)dataCacheForIdentifier:(id)arg1;
- (void)dealloc;
- (id)formattedDataForPath:(id)arg1 identifier:(id)arg2 attributionIdentifier:(id)arg3 priority:(float)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)formattedDataForRequest:(id)arg1 identifier:(id)arg2 attributionIdentifier:(id)arg3 priority:(float)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4;
- (BOOL)isURLValid:(id)arg1;
- (id)newDataCache;
- (void)reloadDataCache;
- (void)removeAllDataCache;
- (void)removeCacheForIdentifier:(id)arg1;
- (void)removeDataCache:(id)arg1;
- (void)removeDataCache:(id)arg1 updateCache:(BOOL)arg2;
- (id)saveFileURL:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long long)arg3 lastModified:(id)arg4 dataCache:(id)arg5;
- (void)syncCacheImmediately;
- (void)updateCache;
- (void)updateCacheDelay;

@end
