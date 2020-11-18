//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CAMProtectionController : NSObject
{
    int __nebulaDaemonWriteProtectionFileDescriptor;
    NSObject<OS_dispatch_queue> *__protectionQueue;
    NSCountedSet *__persistenceProtectionInflightRequestsByType;
    NSMutableDictionary *__persistenceProtectionFileDescriptorsByType;
    NSMutableDictionary *__burstProcessingProtectionFileDescriptorsByIdentifier;
    NSMutableSet *__nebulaDaemonWriteProtectionInflightIdentifiers;
}

@property (readonly, nonatomic) NSMutableDictionary *_burstProcessingProtectionFileDescriptorsByIdentifier; // @synthesize _burstProcessingProtectionFileDescriptorsByIdentifier=__burstProcessingProtectionFileDescriptorsByIdentifier;
@property (readonly, nonatomic) int _nebulaDaemonWriteProtectionFileDescriptor; // @synthesize _nebulaDaemonWriteProtectionFileDescriptor=__nebulaDaemonWriteProtectionFileDescriptor;
@property (readonly, nonatomic) NSMutableSet *_nebulaDaemonWriteProtectionInflightIdentifiers; // @synthesize _nebulaDaemonWriteProtectionInflightIdentifiers=__nebulaDaemonWriteProtectionInflightIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *_persistenceProtectionFileDescriptorsByType; // @synthesize _persistenceProtectionFileDescriptorsByType=__persistenceProtectionFileDescriptorsByType;
@property (readonly, nonatomic) NSCountedSet *_persistenceProtectionInflightRequestsByType; // @synthesize _persistenceProtectionInflightRequestsByType=__persistenceProtectionInflightRequestsByType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_protectionQueue; // @synthesize _protectionQueue=__protectionQueue;

+ (BOOL)isCameraPerformingHighPriorityDiskActivity;
+ (id)pathForProtectNebulaDaemonWritesIndicator;
- (void).cxx_destruct;
- (void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (void)_addPersistenceProtectionIndicatorForType:(long long)arg1 logIdentifier:(id)arg2;
- (int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)arg1;
- (id)_burstProcessingProtectionPathForIdentifier:(id)arg1;
- (int)_persistenceProtectionFileDescriptorForType:(long long)arg1;
- (id)_persistenceProtectionPathForType:(long long)arg1;
- (long long)_persistenceProtectionTypeForRequest:(id)arg1;
- (void)_protectionQueueAbortProtectionForBurstProcessing;
- (void)_protectionQueueAbortProtectionForNebulaDaemonWrites;
- (void)_protectionQueueAbortProtectionForProtectionTypes;
- (void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(long long)arg1 unlinkFile:(BOOL)arg2 logIdentifier:(id)arg3;
- (void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)_protectionQueueStartProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2;
- (void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 closeFile:(BOOL)arg2;
- (void)_protectionQueueStopProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)startProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)startProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)startProtectingPersistenceForRequest:(id)arg1;
- (void)stopProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)stopProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)stopProtectingPersistenceForRequest:(id)arg1;

@end

