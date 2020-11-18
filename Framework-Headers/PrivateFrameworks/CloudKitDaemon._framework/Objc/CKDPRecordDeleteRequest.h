//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordDeleteRequest : PBRequest <NSCopying>
{
    NSString *_etag;
    NSMutableArray *_pluginFields;
    CKDPRecordIdentifier *_recordIdentifier;
}

@property (strong, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (strong, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property (strong, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;

+ (id)options;
+ (Class)pluginFieldsType;
- (void).cxx_destruct;
- (void)addPluginFields:(id)arg1;
- (void)clearPluginFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pluginFieldsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end
