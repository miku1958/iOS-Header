//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContextSemaphore, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKContextClient : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    NSObject<OS_dispatch_semaphore> *_sema_capabilities;
    CKContextSemaphore *_serviceSemaphore;
    unsigned long long _defaultRequestType;
}

@property (readonly, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) unsigned long long defaultRequestType; // @synthesize defaultRequestType=_defaultRequestType;

+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;
+ (id)new;
- (void).cxx_destruct;
- (void)_handleConfigurationUpdate;
- (void)_updateCachedCapabilites;
- (void)ancestorsForTopics:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;
- (void)ensureFullyInitialized;
- (BOOL)hasServiceSemaphore;
- (id)indexVersionId;
- (id)init;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;
- (id)newRequest;
- (void)registerConfigurationUpdateHandler:(CDUnknownBlockType)arg1;
- (id)retrieveCapabilites;
- (BOOL)tryAcquireServiceSemaphore;
- (void)workWithServiceSemaphore:(CDUnknownBlockType)arg1;

@end
