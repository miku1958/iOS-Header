//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLFacebookSession : NSObject
{
}

+ (id)_remoteInterface;
+ (id)sharedSession;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)injectCompletedUploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)likeURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)revokeAllAccessTokensForDevice;
- (void)testCall;
- (id)tokenSecretForEntitledClientWithError:(id *)arg1;
- (void)unlikeURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)uploadPost:(id)arg1;
- (BOOL)uploadPost:(id)arg1 forPID:(int)arg2;
- (void)uploadPost:(id)arg1 suppressAlerts:(BOOL)arg2 withPostCompletion:(CDUnknownBlockType)arg3;
- (BOOL)uploadProfilePicture:(id)arg1 error:(id *)arg2;
- (void)uploadsInProgress:(CDUnknownBlockType)arg1;

@end
