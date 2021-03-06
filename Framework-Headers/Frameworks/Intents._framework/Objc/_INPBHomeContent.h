//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeContent-Protocol.h>

@class NSArray, NSString, _INPBHomeFilter;

@interface _INPBHomeContent : PBCodable <_INPBHomeContent, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_actions;
    _INPBHomeFilter *_filter;
}

@property (copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBHomeFilter *filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) BOOL hasFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)actionsType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (void)addActions:(id)arg1;
- (void)clearActions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

