//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter
{
    NSNumberFormatter *mNumberFormatter;
}

- (void)dealloc;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)init;
- (id)stringForObjectValue:(id)arg1;

@end

