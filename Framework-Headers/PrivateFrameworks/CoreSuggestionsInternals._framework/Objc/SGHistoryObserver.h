//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGSuggestHistoryObserver-Protocol.h>

@class NSString, SGSqlEntityStore;

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver>
{
    SGSqlEntityStore *_store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)hashesDidChange;
- (id)initWithStore:(id)arg1;
- (void)processNewConfirmOrRejectEventHashes:(id)arg1;
- (void)processNewConfirmedOrRejectedReminderHashes:(id)arg1;

@end

