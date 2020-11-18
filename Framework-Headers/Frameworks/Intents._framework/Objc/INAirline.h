//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INAirline : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_iataCode;
    NSString *_icaoCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *iataCode; // @synthesize iataCode=_iataCode;
@property (readonly, copy, nonatomic) NSString *icaoCode; // @synthesize icaoCode=_icaoCode;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 iataCode:(id)arg2 icaoCode:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
