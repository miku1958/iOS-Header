//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPCommentedOnId, CKDPQuerySort, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPGetCommentsRequest : PBRequest <NSCopying>
{
    NSData *_continuationMarker;
    CKDPCommentedOnId *_identifier;
    unsigned int _limit;
    CKDPQuerySort *_orderBy;
    NSString *_path;
    CDStruct_88fc3008 _has;
}

@property (strong, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasLimit;
@property (readonly, nonatomic) BOOL hasOrderBy;
@property (readonly, nonatomic) BOOL hasPath;
@property (strong, nonatomic) CKDPCommentedOnId *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned int limit; // @synthesize limit=_limit;
@property (strong, nonatomic) CKDPQuerySort *orderBy; // @synthesize orderBy=_orderBy;
@property (strong, nonatomic) NSString *path; // @synthesize path=_path;

+ (id)options;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

