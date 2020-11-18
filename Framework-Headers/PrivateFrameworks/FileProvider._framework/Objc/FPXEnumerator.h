//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPXEnumerator-Protocol.h>

@class FPItemID, FPXDomainContext, NSString;
@protocol FPXEnumeratorObserver, NSFileProviderEnumerator;

__attribute__((visibility("hidden")))
@interface FPXEnumerator : NSObject <FPXEnumerator>
{
    FPXDomainContext *_domainContext;
    id<NSFileProviderEnumerator> _vendorEnumerator;
    FPItemID *_observedItemID;
    BOOL _invalidated;
    id<FPXEnumeratorObserver> _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) FPItemID *observedItemID;
@property (readonly) id<FPXEnumeratorObserver> observer; // @synthesize observer=_observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alternateContentsWereUpdatedAtURL:(id)arg1 forItem:(id)arg2;
- (void)dealloc;
- (void)enumerateChangesFromToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enumerateItemsFromPage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forceItemUpdate:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 vendorEnumerator:(id)arg3 observer:(id)arg4;
- (void)invalidate;
- (void)invalidateVendorEnumeration;

@end

