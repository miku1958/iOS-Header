//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/NSObject-Protocol.h>

@class NSSet;

@protocol SGSuggestHistoryObserver <NSObject>
- (void)hashesDidChange;
- (void)processNewConfirmOrRejectEventHashes:(NSSet *)arg1;
@end

