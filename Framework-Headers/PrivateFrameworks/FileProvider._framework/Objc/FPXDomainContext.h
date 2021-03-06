//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPXExtensionContext, FPXSpotlightIndexer, NSFileProviderDomain, NSFileProviderExtension;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface FPXDomainContext : NSObject
{
    BOOL _usesFPFS;
    unsigned long long _extensionCapabilities;
    FPXExtensionContext *_extensionContext;
    NSFileProviderExtension *_vendorInstance;
    NSFileProviderDomain *_domain;
    NSObject<OS_os_log> *_log;
    FPXSpotlightIndexer *_spotlightIndexer;
}

@property (readonly, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) unsigned long long extensionCapabilities; // @synthesize extensionCapabilities=_extensionCapabilities;
@property (readonly, weak, nonatomic) FPXExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property (strong, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (readonly, nonatomic) FPXSpotlightIndexer *spotlightIndexer; // @synthesize spotlightIndexer=_spotlightIndexer;
@property (readonly, nonatomic) BOOL usesFPFS; // @synthesize usesFPFS=_usesFPFS;
@property (readonly, nonatomic) NSFileProviderExtension *vendorInstance; // @synthesize vendorInstance=_vendorInstance;

- (void).cxx_destruct;
- (id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3 usesFPFS:(BOOL)arg4;
- (id)internalErrorFromVendorError:(id)arg1;
- (void)invalidate;
- (id)itemFromVendorItem:(id)arg1;
- (id)itemIDFromVendorItemID:(id)arg1;
- (id)itemIDsFromVendorItemIDs:(id)arg1;
- (id)itemsFromVendorItems:(id)arg1;
- (void)prepareForDomainRemovalWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateCapabilities;

@end

