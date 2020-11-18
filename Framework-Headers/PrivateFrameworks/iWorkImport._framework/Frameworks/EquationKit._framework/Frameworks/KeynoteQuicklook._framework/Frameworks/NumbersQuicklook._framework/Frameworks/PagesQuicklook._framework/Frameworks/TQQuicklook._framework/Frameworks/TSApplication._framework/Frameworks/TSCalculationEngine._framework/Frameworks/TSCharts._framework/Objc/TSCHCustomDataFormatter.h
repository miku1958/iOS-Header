//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHDataFormatter-Protocol.h>
#import <TSCharts/TSCHDataFormatterPersistableStyleObject-Protocol.h>

@class NSString, NSUUID, TSUCustomFormat;

@interface TSCHCustomDataFormatter : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject>
{
    TSUCustomFormat *mCustomFormat;
    NSUUID *mCustomFormatListKey;
    unsigned int mFormatType;
}

@property (readonly, nonatomic) TSUCustomFormat *customFormat; // @synthesize customFormat=mCustomFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dataFormatterWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(unsigned int)arg3;
- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (void)dealloc;
- (unsigned int)formatType;
- (id)initWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(unsigned int)arg3;
- (BOOL)isCompatibleWithDataFormatter:(id)arg1;
- (long long)numberOfDecimalPlaces;
- (id)p_stringForValue:(id)arg1 locale:(id)arg2;

@end
