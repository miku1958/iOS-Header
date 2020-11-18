//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPRange-Protocol.h>

@class NSData, NSString;

@interface _CPRange : PBCodable <_CPRange, NSSecureCoding>
{
    unsigned long long _location;
    unsigned long long _length;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long length; // @synthesize length=_length;
@property (nonatomic) unsigned long long location; // @synthesize location=_location;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)requiresQueryId;
- (void)writeTo:(id)arg1;

@end

