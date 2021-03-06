//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBIssueData;

@interface NTPBIssueDownload : PBCodable <NSCopying>
{
    int _downloadLocation;
    int _downloadState;
    int _downloadType;
    NTPBIssueData *_issueData;
    NSString *_sourceChannelId;
    struct {
        unsigned int downloadLocation:1;
        unsigned int downloadState:1;
        unsigned int downloadType:1;
    } _has;
}

@property (nonatomic) int downloadLocation; // @synthesize downloadLocation=_downloadLocation;
@property (nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property (nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property (nonatomic) BOOL hasDownloadLocation;
@property (nonatomic) BOOL hasDownloadState;
@property (nonatomic) BOOL hasDownloadType;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (strong, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

