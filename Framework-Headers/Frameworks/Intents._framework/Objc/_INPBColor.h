//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBColor-Protocol.h>

@class NSString;

@interface _INPBColor : PBCodable <_INPBColor, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int blue:1;
        unsigned int green:1;
        unsigned int red:1;
    } _has;
    double _blue;
    double _green;
    double _red;
}

@property (nonatomic) double blue; // @synthesize blue=_blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double green; // @synthesize green=_green;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) BOOL hasRed;
@property (readonly) unsigned long long hash;
@property (nonatomic) double red; // @synthesize red=_red;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
