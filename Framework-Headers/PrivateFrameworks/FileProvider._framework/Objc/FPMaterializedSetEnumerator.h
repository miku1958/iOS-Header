//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSFileProviderEnumerator-Protocol.h>

@class NSFileProviderDomain, NSString;

__attribute__((visibility("hidden")))
@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator>
{
    NSFileProviderDomain *_domain;
    NSString *_provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomain:(id)arg1 provider:(id)arg2;
- (void)invalidate;

@end

