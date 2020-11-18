//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPErrorFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPError;

@interface _CPErrorFeedback : PBCodable <_CPProcessableFeedback, _CPErrorFeedback, NSSecureCoding>
{
    CDStruct_b5306035 _has;
    unsigned long long _timestamp;
    _CPError *_error;
    _CPError *_underlyingError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (strong, nonatomic) _CPError *error; // @synthesize error=_error;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUnderlyingError;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) _CPError *underlyingError; // @synthesize underlyingError=_underlyingError;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
