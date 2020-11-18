//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    NSNumber *_maxLength;
    NSString *_format;
    NSString *_units;
    NSString *_manufacturerDescription;
    NSArray *_validValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property (readonly, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property (readonly, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property (readonly, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property (readonly, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *units; // @synthesize units=_units;
@property (readonly, copy, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;

+ (id)characteristicMetadataWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionDetails;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2 stepValue:(id)arg3 maxLength:(id)arg4 validValues:(id)arg5 format:(id)arg6 units:(id)arg7 manufacturerDescription:(id)arg8;
- (BOOL)isEqual:(id)arg1;

@end
