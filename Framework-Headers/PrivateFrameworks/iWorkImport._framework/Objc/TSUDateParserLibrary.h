//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCondition, NSMutableArray, TSULocale;

__attribute__((visibility("hidden")))
@interface TSUDateParserLibrary : NSObject
{
    TSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (id)checkoutDateParser;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (void)prepareDateParserInBackground;
- (void)returnDateParser:(id)arg1;

@end

