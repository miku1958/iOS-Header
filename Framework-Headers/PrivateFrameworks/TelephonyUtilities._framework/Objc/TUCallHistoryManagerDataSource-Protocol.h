//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSUUID;

@protocol TUCallHistoryManagerDataSource <NSObject>
- (void)invalidate;
- (void)updateOutgoingLocalParticipantUUID:(NSUUID *)arg1 forCallsWithOutgoingLocalParticipantUUID:(NSUUID *)arg2;
@end

