//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BitrateLimits : NSObject
{
    int operatingMode;
    unsigned long long defaultValue;
    unsigned long long defaultValueCellular;
    unsigned long long defaultValue2G;
    NSArray *limits;
}

@property (readonly, nonatomic) NSArray *limits; // @synthesize limits;
@property (readonly, nonatomic) int operatingMode; // @synthesize operatingMode;

+ (unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2;
- (void)capDefaultValues:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)defaultValueForNetwork:(BOOL)arg1;
- (id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2;

@end

