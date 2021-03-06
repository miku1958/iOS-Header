//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INPlace : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_placeType;
    NSString *_placeSubType;
    NSArray *_placeDescriptors;
    long long _personalPlaceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long personalPlaceType; // @synthesize personalPlaceType=_personalPlaceType;
@property (readonly, copy, nonatomic) NSArray *placeDescriptors; // @synthesize placeDescriptors=_placeDescriptors;
@property (readonly, copy, nonatomic) NSString *placeSubType; // @synthesize placeSubType=_placeSubType;
@property (readonly, copy, nonatomic) NSString *placeType; // @synthesize placeType=_placeType;
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
- (id)initWithPlaceType:(id)arg1 placeSubType:(id)arg2 placeDescriptors:(id)arg3 personalPlaceType:(long long)arg4;
- (BOOL)isEqual:(id)arg1;

@end

