//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CallKit/CXCallDirectoryProviderVendorProtocol-Protocol.h>

@class CXCallDirectoryMutableLabeledPhoneNumberEntryData, CXCallDirectoryMutablePhoneNumberEntryData, NSString;
@protocol CXCallDirectoryExtensionContextDelegate;

@interface CXCallDirectoryExtensionContext : NSExtensionContext <CXCallDirectoryProviderVendorProtocol>
{
    BOOL _incremental;
    BOOL _hasQueriedIsIncremental;
    id<CXCallDirectoryExtensionContextDelegate> _delegate;
    CXCallDirectoryMutablePhoneNumberEntryData *_pendingBlockingEntryData;
    long long _pendingBlockingEntryChangeType;
    CXCallDirectoryMutableLabeledPhoneNumberEntryData *_pendingIdentificationEntryDataForAddition;
    CXCallDirectoryMutablePhoneNumberEntryData *_pendingIdentificationEntryDataForRemoval;
    long long _pendingIdentificationEntryChangeType;
    CDUnknownBlockType _remoteObjectProxyGenerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXCallDirectoryExtensionContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasQueriedIsIncremental; // @synthesize hasQueriedIsIncremental=_hasQueriedIsIncremental;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isIncremental) BOOL incremental; // @synthesize incremental=_incremental;
@property (nonatomic) long long pendingBlockingEntryChangeType; // @synthesize pendingBlockingEntryChangeType=_pendingBlockingEntryChangeType;
@property (strong, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingBlockingEntryData; // @synthesize pendingBlockingEntryData=_pendingBlockingEntryData;
@property (nonatomic) long long pendingIdentificationEntryChangeType; // @synthesize pendingIdentificationEntryChangeType=_pendingIdentificationEntryChangeType;
@property (strong, nonatomic) CXCallDirectoryMutableLabeledPhoneNumberEntryData *pendingIdentificationEntryDataForAddition; // @synthesize pendingIdentificationEntryDataForAddition=_pendingIdentificationEntryDataForAddition;
@property (strong, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingIdentificationEntryDataForRemoval; // @synthesize pendingIdentificationEntryDataForRemoval=_pendingIdentificationEntryDataForRemoval;
@property (copy, nonatomic) CDUnknownBlockType remoteObjectProxyGenerator; // @synthesize remoteObjectProxyGenerator=_remoteObjectProxyGenerator;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)_flushPendingBlockingEntryData;
- (void)_flushPendingIdentificationEntryData;
- (void)_performBlockIfIncremental:(CDUnknownBlockType)arg1 usingSelectorForExceptionMessage:(SEL)arg2;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2;
- (void)addBlockingEntryWithNextSequentialPhoneNumber:(long long)arg1;
- (void)addIdentificationEntryWithNextSequentialPhoneNumber:(long long)arg1 label:(id)arg2;
- (void)appendBlockingEntryPhoneNumber:(long long)arg1 changeType:(long long)arg2;
- (void)appendIdentificationEntryForAdditionWithPhoneNumber:(long long)arg1 label:(id)arg2;
- (void)appendIdentificationEntryForRemovalWithPhoneNumber:(long long)arg1;
- (void)completeRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)removeAllBlockingEntries;
- (void)removeAllIdentificationEntries;
- (void)removeBlockingEntryWithPhoneNumber:(long long)arg1;
- (void)removeIdentificationEntryWithPhoneNumber:(long long)arg1;
- (oneway void)requestFailedWithError:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
