//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSMetricsEventLocation : NSObject
{
    long long _position;
    NSString *_type;
    NSMutableDictionary *_values;
}

@property (nonatomic) long long locationPosition; // @synthesize locationPosition=_position;
@property (copy, nonatomic) NSString *locationType; // @synthesize locationType=_type;
@property (readonly, nonatomic) NSDictionary *reportingDictionary;

- (void).cxx_destruct;
- (void)setValue:(id)arg1 forLocationKey:(id)arg2;
- (id)valueForLocationKey:(id)arg1;

@end

