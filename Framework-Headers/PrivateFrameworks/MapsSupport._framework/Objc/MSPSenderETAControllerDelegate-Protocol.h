//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPSenderETAController, NSError;

@protocol MSPSenderETAControllerDelegate <NSObject>
- (void)invalidateActiveHandlesForSenderController:(MSPSenderETAController *)arg1;
- (void)senderController:(MSPSenderETAController *)arg1 didInvalidateSharedTripWithError:(NSError *)arg2;
@end
