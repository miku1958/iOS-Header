//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity;

@interface HKQuantityRange : NSObject
{
    HKQuantity *_minimum;
    HKQuantity *_maximum;
}

@property (readonly, nonatomic) HKQuantity *maximum; // @synthesize maximum=_maximum;
@property (readonly, nonatomic) HKQuantity *minimum; // @synthesize minimum=_minimum;

- (void).cxx_destruct;
- (BOOL)containsQuantityInclusive:(id)arg1;
- (id)init;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2;

@end

