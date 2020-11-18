//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFActionBuilder, HFMediaPlaybackActionBuilder, NAFuture, NSArray;

@protocol HFActionSetBuilderProtocol <NSObject>

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;

- (void)addAction:(HFActionBuilder *)arg1;
- (NAFuture *)deleteActionSet;
- (void)removeAction:(HFActionBuilder *)arg1;
- (void)removeAllActions;
- (void)updateAction:(HFActionBuilder *)arg1;
@end
