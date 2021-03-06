//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PDSRemoteVendor;

@interface PDSRegistrar : NSObject
{
    NSString *_clientID;
    id<PDSRemoteVendor> _remoteVendor;
}

@property (strong, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property (strong, nonatomic) id<PDSRemoteVendor> remoteVendor; // @synthesize remoteVendor=_remoteVendor;

- (void).cxx_destruct;
- (id)_activeRegistrationsFromEntries:(id)arg1;
- (id)_registrationsFromEntries:(id)arg1;
- (id)_wrappedErrorForFailedRemote:(id)arg1;
- (id)_wrappedErrorForGivenError:(id)arg1 XPCError:(id)arg2;
- (void)activeUsersWithCompletion:(CDUnknownBlockType)arg1;
- (id)activeUsersWithError:(id *)arg1;
- (BOOL)addRegistration:(id)arg1 toUser:(id)arg2 error:(id *)arg3;
- (void)allEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (id)allEntriesWithError:(id *)arg1;
- (void)allRegistrationsForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)allRegistrationsForUser:(id)arg1 error:(id *)arg2;
- (void)allRegistrationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)allRegistrationsWithError:(id *)arg1;
- (BOOL)batchUpdateRegistrations:(id)arg1 forUser:(id)arg2 error:(id *)arg3;
- (void)currentRegistrationsForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentRegistrationsForUser:(id)arg1 error:(id *)arg2;
- (BOOL)deleteRegistration:(id)arg1 fromUser:(id)arg2 error:(id *)arg3;
- (id)description;
- (BOOL)ensureRegistrationPresent:(id)arg1 forUser:(id)arg2 error:(id *)arg3;
- (id)initWithClientID:(id)arg1 error:(id *)arg2;
- (BOOL)removeAllRegistrationsFromUser:(id)arg1 error:(id *)arg2;
- (BOOL)removeRegistration:(id)arg1 fromUser:(id)arg2 error:(id *)arg3;
- (void)usersWithCompletion:(CDUnknownBlockType)arg1;
- (id)usersWithError:(id *)arg1;

@end

