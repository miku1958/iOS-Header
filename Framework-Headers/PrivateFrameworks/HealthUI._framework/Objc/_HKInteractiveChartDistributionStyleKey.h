//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSString;

@interface _HKInteractiveChartDistributionStyleKey : NSObject <NSCopying>
{
    long long _style;
    long long _timeScope;
    NSString *_predicateName;
}

@property (strong, nonatomic) NSString *predicateName; // @synthesize predicateName=_predicateName;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithDistributionStyle:(long long)arg1 timeScope:(long long)arg2 predicateName:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
