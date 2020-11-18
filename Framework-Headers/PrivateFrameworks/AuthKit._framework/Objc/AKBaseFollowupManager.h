//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AKFollowUpItemFactory, AKFollowUpProvider;

@interface AKBaseFollowupManager : NSObject
{
    id<AKFollowUpItemFactory> _factory;
    id<AKFollowUpProvider> _provider;
}

- (void).cxx_destruct;
- (id)_alignedInsertionCandidates:(id)arg1 withExistingItems:(id)arg2;
- (id)initWithFollowUpFactory:(id)arg1 provider:(id)arg2;
- (BOOL)synchronizeFollowUpsWithServerPayload:(id)arg1 altDSID:(id)arg2 error:(id *)arg3;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
