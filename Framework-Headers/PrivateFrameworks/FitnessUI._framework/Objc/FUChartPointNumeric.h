//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FUChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface FUChartPointNumeric : NSObject <FUChartPoint>
{
    NSDate *_xValue;
    NSNumber *_yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
@property (strong, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
- (void).cxx_destruct;
- (id)allYValues;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;
- (float)yValueFloatRepresentation;
- (id)yValueForKey:(id)arg1;

@end

