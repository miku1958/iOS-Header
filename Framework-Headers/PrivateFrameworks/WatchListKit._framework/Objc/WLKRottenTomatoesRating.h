//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject
{
    unsigned long long _freshness;
    NSNumber *_freshnessPercentage;
}

@property (readonly, nonatomic) unsigned long long freshness; // @synthesize freshness=_freshness;
@property (readonly, copy, nonatomic) NSNumber *freshnessPercentage; // @synthesize freshnessPercentage=_freshnessPercentage;

+ (unsigned long long)freshnessForString:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2;

@end
