//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentResponsePayloadFailure-Protocol.h>

@class NSString;

@interface _INPBIntentResponsePayloadFailure : PBCodable <_INPBIntentResponsePayloadFailure, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int appLaunchRequested:1;
        unsigned int errorCode:1;
    } _has;
    BOOL _appLaunchRequested;
    int _errorCode;
    NSString *_enumTypeName;
}

@property (nonatomic) BOOL appLaunchRequested; // @synthesize appLaunchRequested=_appLaunchRequested;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *enumTypeName; // @synthesize enumTypeName=_enumTypeName;
@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) BOOL hasAppLaunchRequested;
@property (readonly, nonatomic) BOOL hasEnumTypeName;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

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

