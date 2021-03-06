//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudHistoryServiceProtocol-Protocol.h>

@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol>
{
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithProxy:(id)arg1;
- (void)resetForAccountChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveChangesBypassingThrottler:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

