//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreText/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CTSplicedFontKey : NSObject <NSCopying>
{
    unsigned long long _hash;
    BOOL _ignoreLegibilityWeight;
    unsigned int _grade;
    unsigned int _platform;
    NSString *_name;
    NSString *_language;
    double _lineHeightRatio;
    long long _legibilityWeight;
    unsigned long long _sizeCategory;
    NSString *_design;
    double _weight;
    double _width;
}

@property (strong, nonatomic) NSString *design; // @synthesize design=_design;
@property (nonatomic) unsigned int grade; // @synthesize grade=_grade;
@property (nonatomic) BOOL ignoreLegibilityWeight; // @synthesize ignoreLegibilityWeight=_ignoreLegibilityWeight;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (nonatomic) long long legibilityWeight; // @synthesize legibilityWeight=_legibilityWeight;
@property (nonatomic) double lineHeightRatio; // @synthesize lineHeightRatio=_lineHeightRatio;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property (nonatomic) unsigned long long sizeCategory; // @synthesize sizeCategory=_sizeCategory;
@property (nonatomic) double weight; // @synthesize weight=_weight;
@property (nonatomic) double width; // @synthesize width=_width;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

