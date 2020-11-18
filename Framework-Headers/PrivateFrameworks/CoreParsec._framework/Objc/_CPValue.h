//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPFeedbackJSONObject-Protocol.h>
#import <CoreParsec/_CPValue-Protocol.h>

@class NSData, NSDictionary, NSString, _CPListValue, _CPStruct;

@interface _CPValue : PBCodable <_CPFeedbackJSONObject, _CPValue, NSSecureCoding>
{
    BOOL _bool_value;
    int _null_value;
    double _number_value;
    NSString *_string_value;
    _CPStruct *_struct_value;
    _CPListValue *_list_value;
    NSData *_bytes_value;
    unsigned long long _whichKind;
}

@property (nonatomic) BOOL bool_value; // @synthesize bool_value=_bool_value;
@property (copy, nonatomic) NSData *bytes_value; // @synthesize bytes_value=_bytes_value;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _CPListValue *list_value; // @synthesize list_value=_list_value;
@property (nonatomic) int null_value; // @synthesize null_value=_null_value;
@property (nonatomic) double number_value; // @synthesize number_value=_number_value;
@property (copy, nonatomic) NSString *string_value; // @synthesize string_value=_string_value;
@property (strong, nonatomic) _CPStruct *struct_value; // @synthesize struct_value=_struct_value;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long whichKind; // @synthesize whichKind=_whichKind;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)requiresQueryId;
- (void)writeTo:(id)arg1;

@end

