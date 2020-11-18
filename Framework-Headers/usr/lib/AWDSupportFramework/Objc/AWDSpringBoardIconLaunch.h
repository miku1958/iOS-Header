//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDSpringBoardIconLaunch : PBCodable <NSCopying>
{
    unsigned long long _iconPageInFolder;
    unsigned long long _timestamp;
    unsigned long long _totalIconPagesInFolder;
    BOOL _iconIsFolder;
    BOOL _iconIsFromDock;
    BOOL _iconIsFromFolder;
    struct {
        unsigned int iconPageInFolder:1;
        unsigned int timestamp:1;
        unsigned int totalIconPagesInFolder:1;
        unsigned int iconIsFolder:1;
        unsigned int iconIsFromDock:1;
        unsigned int iconIsFromFolder:1;
    } _has;
}

@property (nonatomic) BOOL hasIconIsFolder;
@property (nonatomic) BOOL hasIconIsFromDock;
@property (nonatomic) BOOL hasIconIsFromFolder;
@property (nonatomic) BOOL hasIconPageInFolder;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalIconPagesInFolder;
@property (nonatomic) BOOL iconIsFolder; // @synthesize iconIsFolder=_iconIsFolder;
@property (nonatomic) BOOL iconIsFromDock; // @synthesize iconIsFromDock=_iconIsFromDock;
@property (nonatomic) BOOL iconIsFromFolder; // @synthesize iconIsFromFolder=_iconIsFromFolder;
@property (nonatomic) unsigned long long iconPageInFolder; // @synthesize iconPageInFolder=_iconPageInFolder;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned long long totalIconPagesInFolder; // @synthesize totalIconPagesInFolder=_totalIconPagesInFolder;

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
