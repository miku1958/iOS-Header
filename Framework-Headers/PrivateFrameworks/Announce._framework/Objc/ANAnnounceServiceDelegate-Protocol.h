//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Announce/NSObject-Protocol.h>

@class ANAnnouncement, NSError;

@protocol ANAnnounceServiceDelegate <NSObject>
- (void)failedToDeliverAnnouncement:(ANAnnouncement *)arg1 error:(NSError *)arg2;
- (void)receivedAnnouncement:(ANAnnouncement *)arg1;
@end

