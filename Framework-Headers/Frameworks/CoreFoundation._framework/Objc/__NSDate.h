//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

__attribute__((visibility("hidden")))
@interface __NSDate : NSDate
{
    double _time;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)dealloc;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (double)timeIntervalSinceReferenceDate;

@end

