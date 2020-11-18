//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostSupportObject.h>

@class NSDictionary, NSNumber, NSString;

@interface SignpostObject : SignpostSupportObject
{
    BOOL _telemetryEnabled;
    NSString *_name;
    unsigned long long _signpostId;
    unsigned long long _scope;
    NSDictionary *_attributes;
    NSString *_string1Name;
    NSString *_string1Value;
    NSString *_string2Name;
    NSString *_string2Value;
    NSString *_number1Name;
    NSNumber *_number1Value;
    NSString *_number2Name;
    NSNumber *_number2Value;
}

@property (strong, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *number1Name; // @synthesize number1Name=_number1Name;
@property (strong, nonatomic) NSNumber *number1Value; // @synthesize number1Value=_number1Value;
@property (strong, nonatomic) NSString *number2Name; // @synthesize number2Name=_number2Name;
@property (strong, nonatomic) NSNumber *number2Value; // @synthesize number2Value=_number2Value;
@property (nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property (readonly, nonatomic) NSString *scopeString;
@property (nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property (strong, nonatomic) NSString *string1Name; // @synthesize string1Name=_string1Name;
@property (strong, nonatomic) NSString *string1Value; // @synthesize string1Value=_string1Value;
@property (strong, nonatomic) NSString *string2Name; // @synthesize string2Name=_string2Name;
@property (strong, nonatomic) NSString *string2Value; // @synthesize string2Value=_string2Value;
@property (nonatomic) BOOL telemetryEnabled; // @synthesize telemetryEnabled=_telemetryEnabled;

+ (id)serializationTypeNumber;
- (void).cxx_destruct;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(BOOL)arg3;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 signpostId:(unsigned long long)arg4 scope:(unsigned long long)arg5 timebaseRatio:(double)arg6 attributes:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end
