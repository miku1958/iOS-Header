//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INCacheableObjectManager;
@protocol INCacheableObject;

@protocol INCacheableObjectManagerObserver <NSObject>
- (void)cacheableObjectManager:(INCacheableObjectManager *)arg1 wasToldAboutCacheableObject:(id<INCacheableObject>)arg2;
@end

