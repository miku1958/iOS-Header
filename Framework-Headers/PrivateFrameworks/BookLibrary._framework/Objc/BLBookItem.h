//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/NSCoding-Protocol.h>
#import <BookLibrary/NSCopying-Protocol.h>
#import <BookLibrary/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface BLBookItem : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    BOOL _sample;
    BOOL _iTunesU;
    NSString *_temporaryIdentifier;
    NSString *_legacyUniqueIdentifier;
    NSString *_storeIdentifier;
    NSString *_persistentIdentifier;
    NSString *_publisherIdentifier;
    NSString *_title;
    NSString *_author;
    NSString *_feedURL;
    NSURL *_fileURL;
    NSURL *_permlink;
    long long _type;
    NSString *_publicationVersion;
    NSString *_album;
    NSString *_folderName;
    NSDictionary *_entry;
    NSString *_identifier;
    long long _purgePriority;
    NSDate *_lastUserAccessDate;
    NSString *_itunesuAssetID;
    NSString *_coverImagePath;
}

@property (copy, nonatomic) NSString *album; // @synthesize album=_album;
@property (copy, nonatomic) NSString *author; // @synthesize author=_author;
@property (copy, nonatomic) NSString *coverImagePath; // @synthesize coverImagePath=_coverImagePath;
@property (strong, nonatomic) NSDictionary *entry; // @synthesize entry=_entry;
@property (copy, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property (strong, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property (nonatomic) BOOL iTunesU; // @synthesize iTunesU=_iTunesU;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *itunesuAssetID; // @synthesize itunesuAssetID=_itunesuAssetID;
@property (strong, nonatomic) NSDate *lastUserAccessDate; // @synthesize lastUserAccessDate=_lastUserAccessDate;
@property (copy, nonatomic) NSString *legacyUniqueIdentifier; // @synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSString *path;
@property (strong, nonatomic) NSURL *permlink; // @synthesize permlink=_permlink;
@property (copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (copy, nonatomic) NSString *publicationVersion; // @synthesize publicationVersion=_publicationVersion;
@property (copy, nonatomic) NSString *publisherIdentifier; // @synthesize publisherIdentifier=_publisherIdentifier;
@property (nonatomic) long long purgePriority; // @synthesize purgePriority=_purgePriority;
@property (nonatomic, getter=isSample) BOOL sample; // @synthesize sample=_sample;
@property (copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (copy, nonatomic) NSString *temporaryIdentifier; // @synthesize temporaryIdentifier=_temporaryIdentifier;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_cloudCoverImageData;
- (id)_cloudDictionaryRepresentation;
- (void)_setCloudCoverImageData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEduCloudData:(id)arg1 path:(id)arg2;
- (id)initWithEntry:(id)arg1 basePath:(id)arg2;
- (id)initWithStoreDownload:(id)arg1 permlink:(id)arg2 title:(id)arg3;

@end

