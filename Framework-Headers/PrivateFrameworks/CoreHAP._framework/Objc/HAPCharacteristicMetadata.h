//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/NSCopying-Protocol.h>

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : NSObject <NSCopying>
{
    HAPMetadataConstraints *_constraints;
    NSString *_manufacturerDescription;
    NSString *_format;
    NSString *_units;
}

@property (strong, nonatomic) HAPMetadataConstraints *constraints; // @synthesize constraints=_constraints;
@property (strong, nonatomic) NSString *format; // @synthesize format=_format;
@property (copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property (strong, nonatomic) NSString *units; // @synthesize units=_units;

- (void).cxx_destruct;
- (id)_generateValidConstraints:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4;
- (BOOL)isEqualToCharacteristicMetadata:(id)arg1;

@end

