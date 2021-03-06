//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MMCSAsset-Protocol.h>
#import <CoreMediaStream/NSCopying-Protocol.h>
#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying>
{
    BOOL _assetDataAvailableOnServer;
    NSData *_masterAssetHash;
    NSDictionary *_metadata;
    NSString *_path;
    NSURL *_MMCSURL;
    NSData *_fileData;
    NSError *_error;
    NSString *_type;
    NSData *_fileHash;
    unsigned long long _protocolFileSize;
    NSString *_MMCSAccessHeader;
    NSDate *_MMCSAccessHeaderTimeStamp;
    NSString *_MMCSReceipt;
    NSString *_GUID;
    NSString *_assetCollectionGUID;
    NSDate *_batchCreationDate;
    NSDate *_photoCreationDate;
    id _userInfo;
    unsigned long long _mediaAssetType;
}

@property (strong, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property (strong, nonatomic) NSString *MMCSAccessHeader; // @synthesize MMCSAccessHeader=_MMCSAccessHeader;
@property (strong, nonatomic) NSDate *MMCSAccessHeaderTimeStamp; // @synthesize MMCSAccessHeaderTimeStamp=_MMCSAccessHeaderTimeStamp;
@property (strong, nonatomic) NSError *MMCSError;
@property (strong, nonatomic) NSData *MMCSHash; // @synthesize MMCSHash=_fileHash;
@property (nonatomic) unsigned int MMCSItemFlags;
@property (nonatomic) unsigned long long MMCSItemID;
@property (nonatomic) unsigned long long MMCSItemSize; // @synthesize MMCSItemSize=_protocolFileSize;
@property (strong, nonatomic) NSString *MMCSReceipt; // @synthesize MMCSReceipt=_MMCSReceipt;
@property (strong, nonatomic) NSURL *MMCSURL; // @synthesize MMCSURL=_MMCSURL;
@property (strong, nonatomic) NSString *MMCSUTI; // @synthesize MMCSUTI=_type;
@property (strong, nonatomic) NSString *assetCollectionGUID; // @synthesize assetCollectionGUID=_assetCollectionGUID;
@property (nonatomic) BOOL assetDataAvailableOnServer; // @synthesize assetDataAvailableOnServer=_assetDataAvailableOnServer;
@property (strong, nonatomic) NSDate *batchCreationDate; // @synthesize batchCreationDate=_batchCreationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property (strong, nonatomic) NSData *fileHash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *masterAssetHash; // @synthesize masterAssetHash=_masterAssetHash;
@property (nonatomic) unsigned long long mediaAssetType; // @synthesize mediaAssetType=_mediaAssetType;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) NSString *path; // @synthesize path=_path;
@property (strong, nonatomic) NSDate *photoCreationDate; // @synthesize photoCreationDate=_photoCreationDate;
@property (nonatomic) unsigned long long protocolFileSize;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

+ (id)MSASPAssetFromProtocolDictionary:(id)arg1;
+ (id)asset;
+ (id)assetWithAsset:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)MMCSItemType;
- (int)MMCSOpenNewFileDescriptor;
- (id)MSASPProtocolDictionary;
- (unsigned long long)_fileSize;
- (unsigned long long)_fileSizeOnDisk;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPhoto;
- (BOOL)isVideo;
- (id)metadataValueForKey:(id)arg1;
- (void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;

@end

