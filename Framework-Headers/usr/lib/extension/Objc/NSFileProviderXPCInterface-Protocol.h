//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSFileCoordinationDebugInfoXPCInteface-Protocol.h>

@class NSString, NSURL;

@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
- (oneway void)cancelProvidingItemAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2;
- (void)checkInProviderWithReply:(void (^)(BOOL))arg1;
- (oneway void)observeEndOfWriteAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(NSString *)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 url:(NSURL *)arg4 newURL:(NSURL *)arg5;
- (void)provideItemAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 completionHandler:(void (^)(NSString *, NSError *))arg5;
- (void)providePhysicalItemForURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *))arg2;
@end

