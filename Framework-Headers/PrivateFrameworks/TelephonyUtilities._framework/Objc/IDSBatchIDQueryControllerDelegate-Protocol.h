//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class IDSBatchIDQueryController, NSDictionary, NSError, NSString;

@protocol IDSBatchIDQueryControllerDelegate <NSObject>
- (void)batchQueryController:(IDSBatchIDQueryController *)arg1 updatedDestinationsStatus:(NSDictionary *)arg2 onService:(NSString *)arg3 error:(NSError *)arg4;

@optional
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1;
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;
@end
