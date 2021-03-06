//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarConfiguration;

@protocol AVTAvatarConfigurationMetric <NSObject>
- (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
- (unsigned long long)distanceFromConfiguration:(AVTAvatarConfiguration *)arg1 toConfiguration:(AVTAvatarConfiguration *)arg2;
- (long long)gapFromDistance:(unsigned long long)arg1;
@end

