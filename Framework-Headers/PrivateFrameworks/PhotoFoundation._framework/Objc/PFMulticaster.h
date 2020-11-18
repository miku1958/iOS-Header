//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFWeakHashDelegate-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, PFWeakHash;
@protocol PFMulticasterDelegate;

@interface PFMulticaster : NSObject <PFWeakHashDelegate>
{
    struct _opaque_pthread_mutex_t _receiverLock;
    NSHashTable *_strongReceivers;
    PFWeakHash *_weakReceivers;
    NSMutableSet *_strongReceiverLists;
    PFWeakHash *_weakReceiverLists;
    BOOL _invalidated;
    BOOL _acceptingReceivers;
    id<PFMulticasterDelegate> _delegate;
}

@property (readonly) BOOL acceptingReceivers; // @synthesize acceptingReceivers=_acceptingReceivers;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<PFMulticasterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (readonly) Class superclass;

+ (id)_extractProtocolFromSelectorName:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
+ (BOOL)_isPlaceholderClassByDecodingClassName;
+ (Class)_multicasterClassForProtocolNamed:(id)arg1;
+ (id)_newProtocolMulticaster;
+ (id)_protocolNameByDecodingClassName;
+ (id)_subclassNameByEncodingProtocolName:(id)arg1 placeholder:(BOOL)arg2;
+ (void)_validateProtocol:(id)arg1;
+ (void)configureClass:(Class)arg1 asMulticasterOf:(id)arg2;
+ (BOOL)resolveClassMethod:(SEL)arg1;
- (void).cxx_destruct;
- (void)_enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)addReceiver:(id)arg1;
- (BOOL)addWeakReceiver:(id)arg1;
- (void)distributeSelector:(SEL)arg1 distributionBlock:(CDUnknownBlockType)arg2;
- (void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(CDUnknownBlockType)arg3;
- (void)handleMultiplyRegistered:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)postNoReceiversNotice;
- (void)removeReceiver:(id)arg1;
- (BOOL)stopAcceptingReceivers;
- (void)weakHashBecameEmpty:(id)arg1;

@end
