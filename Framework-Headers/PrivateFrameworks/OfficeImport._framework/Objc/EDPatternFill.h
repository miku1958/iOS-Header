//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDFill.h>

@class EDColorReference;

__attribute__((visibility("hidden")))
@interface EDPatternFill : EDFill
{
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}

+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3;
+ (id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 resources:(id)arg2;
- (void).cxx_destruct;
- (id)backColor;
- (id)backColorReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)foreColor;
- (id)foreColorReference;
- (unsigned long long)hash;
- (id)initWithResources:(id)arg1;
- (id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
- (id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPatternFill:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setBackColorReference:(id)arg1;
- (void)setForeColor:(id)arg1;
- (void)setForeColorReference:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
