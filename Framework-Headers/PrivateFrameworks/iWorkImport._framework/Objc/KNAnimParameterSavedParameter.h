//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSSecureCoding-Protocol.h>

@class NSString, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface KNAnimParameterSavedParameter : NSObject <NSSecureCoding>
{
    BOOL _hasMaxValue;
    BOOL _hasMinValue;
    BOOL _removed;
    BOOL _debugOnly;
    NSString *_name;
    unsigned long long _type;
    TSUBezierPath *_pathValue;
    double _doubleValue;
    double _maxValue;
    double _minValue;
    NSString *_parameterDescription;
}

@property (nonatomic) BOOL debugOnly; // @synthesize debugOnly=_debugOnly;
@property (nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (nonatomic) BOOL hasMaxValue; // @synthesize hasMaxValue=_hasMaxValue;
@property (nonatomic) BOOL hasMinValue; // @synthesize hasMinValue=_hasMinValue;
@property (nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property (nonatomic) double minValue; // @synthesize minValue=_minValue;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *parameterDescription; // @synthesize parameterDescription=_parameterDescription;
@property (strong, nonatomic) TSUBezierPath *pathValue; // @synthesize pathValue=_pathValue;
@property (nonatomic) BOOL removed; // @synthesize removed=_removed;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)p_bezierPathFromSavedPathElements:(id)arg1;
- (id)p_savedPathFromPath:(id)arg1;

@end

