//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSUUID;
@protocol HDTaskServer;

@protocol HDTaskServerEndpointDelegate <NSObject>
- (void)taskServerDidFailToInitializeForUUID:(NSUUID *)arg1;
- (void)taskServerDidFinishInitialization:(id<HDTaskServer>)arg1;
- (void)taskServerDidInvalidate:(id<HDTaskServer>)arg1;
@end

