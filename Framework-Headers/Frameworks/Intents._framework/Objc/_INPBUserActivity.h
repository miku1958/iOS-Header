//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBUserActivity-Protocol.h>

@class NSData, NSString;

@interface _INPBUserActivity : PBCodable <_INPBUserActivity, NSSecureCoding, NSCopying>
{
    struct _has;
    NSData *_data;
    NSString *_title;
    NSString *_uri;
}

@property (copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *uri; // @synthesize uri=_uri;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

