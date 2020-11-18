//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ECCurrencyEntry : NSObject
{
    NSString *mLassoCurrencyCode;
    NSString *mXlLangId;
    NSString *mXlCurrencySymbol;
    BOOL mAppliesToExport;
    int mXlAccountingFormat;
}

+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5;
- (void).cxx_destruct;
- (id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5;

@end
