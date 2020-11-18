//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPCommentContent, CKDPCommentedOnId, NSString;

__attribute__((visibility("hidden")))
@interface CKDPPostCommentRequest : PBRequest <NSCopying>
{
    CKDPCommentContent *_commentContent;
    CKDPCommentedOnId *_identifier;
    NSString *_path;
}

@property (strong, nonatomic) CKDPCommentContent *commentContent; // @synthesize commentContent=_commentContent;
@property (readonly, nonatomic) BOOL hasCommentContent;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPath;
@property (strong, nonatomic) CKDPCommentedOnId *identifier; // @synthesize identifier=_identifier;
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
