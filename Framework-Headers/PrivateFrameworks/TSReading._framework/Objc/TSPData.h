//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSPDataManager, TSPObjectContext;
@protocol OS_dispatch_queue, TSPDataStorage;

@interface TSPData : NSObject
{
    int _didCull;
    long long _identifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataManager *_manager;
    array_019f9a10 _digest;
    BOOL _isDeallocating;
}

@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isApplicationData;
@property (readonly, nonatomic) BOOL isExternalData;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (strong, nonatomic) id<TSPDataStorage> storage;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uniqueName;

+ (void)addCullingListener:(id)arg1;
+ (id)cullingListeners;
+ (id)cullingListenersQueue;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(BOOL)arg2 useFileCoordination:(BOOL)arg3 context:(id)arg4;
+ (id)null;
+ (id)readOnlyDataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromURL:(id)arg1 context:(id)arg2;
+ (id)readOnlyDataWithoutDataDigestFromURL:(id)arg1 context:(id)arg2;
+ (void)removeCullingListener:(id)arg1;
+ (id)requiredAVAssetOptions;
+ (BOOL)updateDigest:(array_019f9a10 *)arg1 withProtobufString:(const basic_string_a1f69cfb *)arg2;
- (void).cxx_destruct;
- (id)AVAsset;
- (id)AVAssetWithOptions:(id)arg1;
- (id)NSData;
- (void)addDownloadObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bookmarkData;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (const array_019f9a10 *)digest;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)arg1 digest:(const array_019f9a10 *)arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1;
- (BOOL)isStorageInPackage:(id)arg1;
- (struct CGDataProvider *)newCGDataProvider;
- (struct CGImage *)newCGImage;
- (struct CGImageSource *)newCGImageSource;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performInputStreamReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)preferredFilename;
- (void)setFilename:(id)arg1 storage:(id)arg2;
- (void)willCull;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;

@end

