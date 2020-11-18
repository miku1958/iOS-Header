//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/NSCopying-Protocol.h>
#import <BookLibrary/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;

@interface BLDownload : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_downloadID;
    NSString *_url;
    NSString *_targetDownloadDirectory;
    long long _state;
    NSDate *_startTime;
    NSString *_assetPath;
    NSString *_buyParameters;
    NSString *_permlink;
    NSNumber *_storeIdentifier;
    NSString *_clientIdentifier;
    NSNumber *_persistentIdentifier;
    NSString *_transactionIdentifier;
    NSString *_cancelDownloadURL;
    unsigned long long _fileSize;
    NSDate *_lastStateChangeTime;
    NSString *_hashType;
    NSString *_md5HashStrings;
    long long _numberOfBytesToHash;
    NSNumber *_publicationVersion;
    NSNumber *_isAutomaticDownload;
    NSNumber *_isRestore;
    NSString *_downloadKey;
    NSNumber *_accountID;
    NSNumber *_isZipStreamable;
    NSData *_dpInfo;
    NSNumber *_isSample;
    NSNumber *_isPurchase;
    NSDate *_purchaseDate;
    NSNumber *_isLocalCacheServer;
    NSString *_originalURL;
    NSString *_artistName;
    NSString *_title;
    NSString *_subtitle;
    NSString *_genre;
    NSString *_kind;
    NSString *_thumbnailImageURL;
}

@property (copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
@property (copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (copy, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property (copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property (copy, nonatomic) NSString *cancelDownloadURL; // @synthesize cancelDownloadURL=_cancelDownloadURL;
@property (copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (copy, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property (copy, nonatomic) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property (copy, nonatomic) NSData *dpInfo; // @synthesize dpInfo=_dpInfo;
@property (nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property (copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (copy, nonatomic) NSString *hashType; // @synthesize hashType=_hashType;
@property (nonatomic) NSNumber *isAutomaticDownload; // @synthesize isAutomaticDownload=_isAutomaticDownload;
@property (strong, nonatomic) NSNumber *isLocalCacheServer; // @synthesize isLocalCacheServer=_isLocalCacheServer;
@property (strong, nonatomic) NSNumber *isPurchase; // @synthesize isPurchase=_isPurchase;
@property (copy, nonatomic) NSNumber *isRestore; // @synthesize isRestore=_isRestore;
@property (strong, nonatomic) NSNumber *isSample; // @synthesize isSample=_isSample;
@property (copy, nonatomic) NSNumber *isZipStreamable; // @synthesize isZipStreamable=_isZipStreamable;
@property (copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property (copy, nonatomic) NSDate *lastStateChangeTime; // @synthesize lastStateChangeTime=_lastStateChangeTime;
@property (copy, nonatomic) NSString *md5HashStrings; // @synthesize md5HashStrings=_md5HashStrings;
@property (nonatomic) long long numberOfBytesToHash; // @synthesize numberOfBytesToHash=_numberOfBytesToHash;
@property (copy, nonatomic) NSString *originalURL; // @synthesize originalURL=_originalURL;
@property (copy, nonatomic) NSString *permlink; // @synthesize permlink=_permlink;
@property (strong, nonatomic) NSNumber *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (copy, nonatomic) NSNumber *publicationVersion; // @synthesize publicationVersion=_publicationVersion;
@property (strong, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property (copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (strong, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *targetDownloadDirectory; // @synthesize targetDownloadDirectory=_targetDownloadDirectory;
@property (copy, nonatomic) NSString *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property (copy, nonatomic) NSString *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)transferProgressFraction;

@end

