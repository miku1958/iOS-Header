//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocationMatchInfo;

@interface CLLocationInternal : NSObject
{
    CDStruct_05ee51d2 fLocation;
    CLLocationMatchInfo *fMatchInfo;
    double fTrustedTimestamp;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithClientLocation:(CDStruct_05ee51d2)arg1;
- (id)initWithClientLocation:(CDStruct_05ee51d2)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;

@end
