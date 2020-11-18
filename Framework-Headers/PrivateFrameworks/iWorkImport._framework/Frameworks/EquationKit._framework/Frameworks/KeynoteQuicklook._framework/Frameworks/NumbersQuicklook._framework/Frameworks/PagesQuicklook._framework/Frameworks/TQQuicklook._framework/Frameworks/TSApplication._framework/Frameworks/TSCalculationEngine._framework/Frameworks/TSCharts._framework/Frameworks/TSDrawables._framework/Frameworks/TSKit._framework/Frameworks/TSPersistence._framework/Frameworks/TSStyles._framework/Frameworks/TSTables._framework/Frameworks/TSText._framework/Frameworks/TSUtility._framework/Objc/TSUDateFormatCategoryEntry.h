//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject
{
    unsigned short _separator;
    NSMutableArray *_formatters;
    NSMutableSet *_formatStrings;
}

- (void).cxx_destruct;
- (void)addFormat:(id)arg1 locale:(id)arg2;
- (id)formatStrings;
- (id)initWithSeparator:(unsigned short)arg1;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id *)arg3 perfect:(BOOL *)arg4;
- (unsigned short)separator;

@end
