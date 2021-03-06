//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol MSPSharedTripXPCServer <NSObject>
- (void)blockSharedTrip:(NSString *)arg1;
- (void)checkinWithCompletion:(void (^)(MSPSharedTripSharingIdentity *, NSArray *, NSArray *, unsigned long long))arg1;
- (void)fetchActiveHandlesWithCompletion:(void (^)(NSArray *))arg1;
- (void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(void (^)(BOOL, NSString *, NSError *))arg1;
- (void)fetchSharedTripsWithCompletion:(void (^)(NSArray *))arg1;
- (void)fetchSharingIdentityWithCompletion:(void (^)(MSPSharedTripSharingIdentity *))arg1;
- (void)reportUserConfirmationOfSharingIdentity:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startSharingTripWithContacts:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startSharingTripWithMessagesContacts:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startSharingTripWithMessagesGroup:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)stopSharingTrip;
- (void)stopSharingTripWithContacts:(NSArray *)arg1;
- (void)stopSharingTripWithMessagesContacts:(NSArray *)arg1;
- (void)stopSharingTripWithMessagesGroup:(NSString *)arg1;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
@end

