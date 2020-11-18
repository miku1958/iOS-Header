//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValue : NSObject
{
    struct CHDDataPoint mDataPoint;
}

+ (id)dataValue;
+ (id)dataValueWithIndex:(long long)arg1 value:(struct EDValue *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)contentFormatId;
- (id)contentFormatWithResources:(id)arg1;
- (struct CHDDataPoint *)dataPoint;
- (id)description;
- (long long)index;
- (id)init;
- (id)initWithIndex:(long long)arg1 value:(struct EDValue *)arg2;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;
- (void)setDataPoint:(struct CHDDataPoint *)arg1;
- (void)setIndex:(long long)arg1;
- (void)setValue:(struct EDValue *)arg1;
- (struct EDValue *)value;

@end
