//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBRemoteExecutionEvent : PBCodable <NSCopying>
{
    NSString *_actionIdentifier;
    NSString *_connectionType;
    NSString *_destinationType;
    NSString *_key;
    NSString *_source;
    BOOL _completed;
    CDStruct_c267e6e8 _has;
}

@property (strong, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property (nonatomic) BOOL completed; // @synthesize completed=_completed;
@property (strong, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property (strong, nonatomic) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (nonatomic) BOOL hasCompleted;
@property (readonly, nonatomic) BOOL hasConnectionType;
@property (readonly, nonatomic) BOOL hasDestinationType;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSource;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) NSString *source; // @synthesize source=_source;

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

