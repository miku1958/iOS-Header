//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject
{
    SSAppPurchaseHistoryCache *__purchaseHistoryCache;
}

- (void).cxx_destruct;
- (id)_purchaseHistoryCache;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;

@end

