//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUQOSMeter : NSObject
{
    _Atomic long long _counts[4];
    _Atomic long long _total;
}

- (id)description;
- (BOOL)log:(long long)arg1;
- (void)recordQOS;

@end

