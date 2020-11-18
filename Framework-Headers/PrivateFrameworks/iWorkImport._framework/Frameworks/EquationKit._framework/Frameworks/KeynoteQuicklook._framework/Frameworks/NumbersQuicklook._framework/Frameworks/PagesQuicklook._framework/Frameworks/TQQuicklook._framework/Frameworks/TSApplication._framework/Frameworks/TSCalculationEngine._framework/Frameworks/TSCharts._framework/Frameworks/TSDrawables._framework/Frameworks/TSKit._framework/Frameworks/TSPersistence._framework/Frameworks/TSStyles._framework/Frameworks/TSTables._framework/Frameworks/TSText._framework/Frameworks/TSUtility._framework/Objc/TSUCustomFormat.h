//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/NSMutableCopying-Protocol.h>

@class NSMutableArray, NSString, TSUCustomFormatData;

@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    BOOL _currencyCodeComputed;
    unsigned int _formatType;
    TSUCustomFormatData *_defaultFormatData;
    NSString *_formatName;
    NSMutableArray *_conditionList;
}

@property (readonly, nonatomic) unsigned long long conditionCount;
@property (readonly, nonatomic) NSMutableArray *conditionList; // @synthesize conditionList=_conditionList;
@property (readonly, nonatomic) BOOL conditionsAllowed;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) TSUCustomFormatData *defaultFormatData; // @synthesize defaultFormatData=_defaultFormatData;
@property (readonly, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
@property (readonly, nonatomic) NSString *formatNameStem;
@property (readonly, nonatomic) NSString *formatNameTag;
@property (readonly, nonatomic) unsigned int formatType; // @synthesize formatType=_formatType;

- (void).cxx_destruct;
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;
- (id)conditionalFormatDataForValue:(double)arg1;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customFormatWithNewName:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 formatType:(unsigned int)arg2 data:(id)arg3;
- (id)initWithName:(id)arg1 formatType:(unsigned int)arg2 data:(id)arg3 conditionList:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualWithStemNameMatching:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (BOOL)p_isEqual:(id)arg1 matchingFullName:(BOOL)arg2;
- (void)p_makeFormatNameStemAndTag;
- (void)p_setFormatType:(unsigned int)arg1;

@end
