//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SSURLConnectionRequest;
@protocol OS_dispatch_queue;

@interface HSAccountStore : NSObject
{
    int _defaultsDidChangeToken;
    SSURLConnectionRequest *_groupIDRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSString *appleID; // @dynamic appleID;
@property (copy, nonatomic) NSString *groupID; // @dynamic groupID;
@property (strong, nonatomic) SSURLConnectionRequest *groupIDRequest; // @synthesize groupIDRequest=_groupIDRequest;
@property (copy, nonatomic) NSString *password; // @dynamic password;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)defaultStore;
- (void).cxx_destruct;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)canDetermineGroupID;
- (void)clearAllCredentials;
- (void)clearCaches;
- (void)clearGroupID;
- (void)dealloc;
- (void)determineGroupIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

