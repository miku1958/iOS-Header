//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _AUStaticParameterInfo : NSObject <NSSecureCoding>
{
    float _minValue;
    float _maxValue;
    unsigned int _unit;
    unsigned int _flags;
    unsigned int _clumpID;
    float _defaultValue;
    unsigned int _originalOrder;
    NSString *_unitName;
    NSArray *_valueStrings;
}

@property (nonatomic) unsigned int clumpID; // @synthesize clumpID=_clumpID;
@property (nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (nonatomic) float maxValue; // @synthesize maxValue=_maxValue;
@property (nonatomic) float minValue; // @synthesize minValue=_minValue;
@property (nonatomic) unsigned int originalOrder; // @synthesize originalOrder=_originalOrder;
@property (nonatomic) unsigned int unit; // @synthesize unit=_unit;
@property (strong, nonatomic) NSString *unitName; // @synthesize unitName=_unitName;
@property (strong, nonatomic) NSArray *valueStrings; // @synthesize valueStrings=_valueStrings;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

