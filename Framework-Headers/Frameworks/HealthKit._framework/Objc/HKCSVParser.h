//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKCSVParser : NSObject
{
}

+ (id)commaCharacterSet;
+ (id)fieldWithScanner:(id)arg1 error:(out id *)arg2;
+ (id)newlineCharacterSet;
+ (BOOL)newlineWithScanner:(id)arg1;
+ (id)parseCSV:(id)arg1 error:(out id *)arg2;
+ (id)quoteCharacterSet;
+ (id)recordWithScanner:(id)arg1 error:(out id *)arg2;
+ (id)terminatingCharacterSet;

@end
