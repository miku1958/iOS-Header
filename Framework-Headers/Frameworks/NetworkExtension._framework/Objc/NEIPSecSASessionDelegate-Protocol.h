//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEIPSecSA;

@protocol NEIPSecSASessionDelegate <NSObject>
- (void)blackholeDetectedSA:(NEIPSecSA *)arg1;
- (void)deleteSA:(NEIPSecSA *)arg1;
- (void)expireSA:(NEIPSecSA *)arg1;
- (void)idleTimeoutSA:(NEIPSecSA *)arg1;
@end
