//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSosBase.h>

#import <KeynoteQuicklook/NSCopying-Protocol.h>

@class NSString, TSDPathSource, TSUColor;
@protocol NSObject;

@interface KNBuildAttributeValue : TSKSosBase <NSCopying>
{
    int _integerValue;
    double _doubleValue;
    BOOL _boolValue;
    NSString *_stringValue;
    TSDPathSource *_pathSourceValue;
    TSUColor *_colorValue;
    BOOL _definedIntegerValue;
    BOOL _definedDoubleValue;
    BOOL _definedBoolValue;
    BOOL _definedStringValue;
    BOOL _definedPathSourceValue;
    BOOL _definedColorValue;
}

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) TSUColor *colorValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) id<NSObject> objectValue;
@property (readonly, nonatomic) TSDPathSource *pathSourceValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) unsigned long long type;

+ (id)emptyValue;
+ (id)valueWithBool:(BOOL)arg1;
+ (id)valueWithColor:(id)arg1;
+ (id)valueWithDouble:(double)arg1;
+ (id)valueWithInteger:(long long)arg1;
+ (id)valueWithPathSource:(id)arg1;
+ (id)valueWithString:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBoolValue:(BOOL)arg1;
- (id)initWithColorValue:(id)arg1;
- (id)initWithDoubleValue:(double)arg1;
- (id)initWithIntegerValue:(long long)arg1;
- (id)initWithPathSourceValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)p_attributesAreEmpty;

@end

