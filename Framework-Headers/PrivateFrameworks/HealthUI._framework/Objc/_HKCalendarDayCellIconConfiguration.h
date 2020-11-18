//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class UIColor;

@interface _HKCalendarDayCellIconConfiguration : NSObject <NSCopying>
{
    long long _dateIndex;
    UIColor *_color;
    long long _style;
}

+ (id)configurationWithDateIndex:(long long)arg1 color:(id)arg2 style:(long long)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
