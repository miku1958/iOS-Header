//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class _HMAudioControl;

@protocol _HMAudioControlDelegate <NSObject>
- (void)audioControl:(_HMAudioControl *)arg1 didUpdateMuted:(BOOL)arg2;
- (void)audioControl:(_HMAudioControl *)arg1 didUpdateVolume:(float)arg2;
@end

