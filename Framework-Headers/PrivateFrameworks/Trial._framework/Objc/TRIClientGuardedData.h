//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, TRITrackingId;

@interface TRIClientGuardedData : NSObject
{
    TRITrackingId *trackingId;
    NSMutableSet *updatedNamespaceNames;
    NSMutableDictionary *namespaceUpdateHandlerTokens;
    NSMutableDictionary *namespaceCallbacks;
}

- (void).cxx_destruct;

@end

