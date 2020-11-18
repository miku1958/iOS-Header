//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_addingOutputDeviceUIDs;
    int _outputContextType;
    NSMutableArray *_removingOutputDeviceUIDs;
    struct {
        unsigned int outputContextType:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *addingOutputDeviceUIDs; // @synthesize addingOutputDeviceUIDs=_addingOutputDeviceUIDs;
@property (nonatomic) BOOL hasOutputContextType;
@property (nonatomic) int outputContextType; // @synthesize outputContextType=_outputContextType;
@property (strong, nonatomic) NSMutableArray *removingOutputDeviceUIDs; // @synthesize removingOutputDeviceUIDs=_removingOutputDeviceUIDs;

+ (Class)addingOutputDeviceUIDsType;
+ (Class)removingOutputDeviceUIDsType;
- (int)StringAsOutputContextType:(id)arg1;
- (void)addAddingOutputDeviceUIDs:(id)arg1;
- (void)addRemovingOutputDeviceUIDs:(id)arg1;
- (id)addingOutputDeviceUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (void)clearAddingOutputDeviceUIDs;
- (void)clearRemovingOutputDeviceUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputContextTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)removingOutputDeviceUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (void)writeTo:(id)arg1;

@end

