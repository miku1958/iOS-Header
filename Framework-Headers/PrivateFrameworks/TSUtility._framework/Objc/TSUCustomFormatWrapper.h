//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSUCustomFormatWrapper : NSObject
{
    struct TSUCustomFormat *mCustomFormat;
}

- (const CDStruct_8acff13f *)conditionalFormatDataForValue:(double)arg1;
- (const CDStruct_8acff13f *)defaultFormatData;
- (id)formatName;
- (int)formatType;
- (id)initWithCustomFormat:(struct TSUCustomFormat *)arg1;
- (const struct TSUCustomFormat *)pointerToTSUCustomFormat;

@end

