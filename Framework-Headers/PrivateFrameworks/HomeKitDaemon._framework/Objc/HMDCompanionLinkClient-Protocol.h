//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@protocol HMDCompanionLinkClient <NSObject>

@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;

- (void)start;
- (void)stop;
@end

