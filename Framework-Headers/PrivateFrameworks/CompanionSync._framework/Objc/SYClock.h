//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class SYPeer;

@interface SYClock : PBCodable <NSCopying>
{
    unsigned long long _version;
    SYPeer *_peer;
}

@property (strong, nonatomic) SYPeer *peer; // @synthesize peer=_peer;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_myDescription;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)increaseBy:(unsigned long long)arg1;
- (unsigned long long)increment;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

