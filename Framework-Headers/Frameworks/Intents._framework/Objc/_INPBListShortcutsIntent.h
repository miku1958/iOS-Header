//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBListShortcutsIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBListShortcutsIntent : PBCodable <_INPBListShortcutsIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int originDevice:1;
    } _has;
    int _originDevice;
    NSArray *_appTitles;
    _INPBIntentMetadata *_intentMetadata;
}

@property (copy, nonatomic) NSArray *appTitles; // @synthesize appTitles=_appTitles;
@property (readonly, nonatomic) unsigned long long appTitlesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasOriginDevice;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) int originDevice; // @synthesize originDevice=_originDevice;
@property (readonly) Class superclass;

+ (Class)appTitleType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsOriginDevice:(id)arg1;
- (void)addAppTitle:(id)arg1;
- (id)appTitleAtIndex:(unsigned long long)arg1;
- (void)clearAppTitles;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)originDeviceAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

