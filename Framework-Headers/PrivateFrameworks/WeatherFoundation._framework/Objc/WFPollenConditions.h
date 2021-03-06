//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSDate;

@interface WFPollenConditions : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_date;
    unsigned long long _timeOfDay;
    unsigned long long _grassIndex;
    unsigned long long _ragweedIndex;
    unsigned long long _treeIndex;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) unsigned long long grassIndex; // @synthesize grassIndex=_grassIndex;
@property (nonatomic) unsigned long long ragweedIndex; // @synthesize ragweedIndex=_ragweedIndex;
@property (nonatomic) unsigned long long timeOfDay; // @synthesize timeOfDay=_timeOfDay;
@property (nonatomic) unsigned long long treeIndex; // @synthesize treeIndex=_treeIndex;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

