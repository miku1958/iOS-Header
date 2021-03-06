//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface REMColor : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _colorRGBSpace;
    double _blue;
    double _red;
    double _green;
    double _alpha;
    NSString *_daSymbolicColorName;
    NSString *_daHexString;
    NSString *_ckSymbolicColorName;
}

@property (readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property (readonly, nonatomic) NSString *ckSymbolicColorName; // @synthesize ckSymbolicColorName=_ckSymbolicColorName;
@property (readonly, nonatomic) unsigned long long colorRGBSpace; // @synthesize colorRGBSpace=_colorRGBSpace;
@property (readonly, nonatomic) NSString *daHexString; // @synthesize daHexString=_daHexString;
@property (readonly, nonatomic) NSString *daSymbolicColorName; // @synthesize daSymbolicColorName=_daSymbolicColorName;
@property (readonly, nonatomic) double green; // @synthesize green=_green;
@property (readonly, nonatomic) double red; // @synthesize red=_red;

+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithDictionaryData:(id)arg1 error:(id *)arg2;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)redColor;
+ (BOOL)supportsSecureCoding;
+ (id)whiteColor;
+ (id)yellowColor;
- (void).cxx_destruct;
- (id)archivedDictionaryDataWithError:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hexString;
- (id)hexStringWithAlpha;
- (id)initWithCKSymbolicColorName:(id)arg1 hexString:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2;
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ckSymbolicColorName:(id)arg3;
- (id)initWithHexString:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 daSymbolicColorName:(id)arg6 daHexString:(id)arg7 ckSymbolicColorName:(id)arg8;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (BOOL)isEqual:(id)arg1;

@end

