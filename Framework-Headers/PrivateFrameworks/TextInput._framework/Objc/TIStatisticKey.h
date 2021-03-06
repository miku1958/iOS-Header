//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIStatisticKey : NSObject
{
    NSString *_counterName;
    NSString *_aggdName;
    NSString *_inputMode;
}

@property (readonly, nonatomic) NSString *aggdName; // @synthesize aggdName=_aggdName;
@property (readonly, nonatomic) NSString *counterName; // @synthesize counterName=_counterName;
@property (readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;

+ (id)statisticKeyWithAggdName:(id)arg1 andCounterName:(id)arg2 andInputMode:(id)arg3;
- (void).cxx_destruct;
- (id)initWithAggdName:(id)arg1 andCounterName:(id)arg2 andInputMode:(id)arg3;

@end

