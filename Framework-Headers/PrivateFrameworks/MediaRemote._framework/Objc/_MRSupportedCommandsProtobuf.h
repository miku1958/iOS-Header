//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_supportedCommands;
}

@property (strong, nonatomic) NSMutableArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;

+ (Class)supportedCommandType;
- (void)addSupportedCommand:(id)arg1;
- (void)clearSupportedCommands;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)supportedCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedCommandsCount;
- (void)writeTo:(id)arg1;

@end
