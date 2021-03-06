//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPServerInfo : PBCodable <NSCopying>
{
    NSString *_partition;
    NSString *_serviceBuild;
    NSString *_serviceInstance;
    NSString *_serviceName;
}

@property (readonly, nonatomic) BOOL hasPartition;
@property (readonly, nonatomic) BOOL hasServiceBuild;
@property (readonly, nonatomic) BOOL hasServiceInstance;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (strong, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property (strong, nonatomic) NSString *serviceBuild; // @synthesize serviceBuild=_serviceBuild;
@property (strong, nonatomic) NSString *serviceInstance; // @synthesize serviceInstance=_serviceInstance;
@property (strong, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

