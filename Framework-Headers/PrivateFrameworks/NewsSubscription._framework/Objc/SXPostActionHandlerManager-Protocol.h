//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsSubscription/NSObject-Protocol.h>
#import <NewsSubscription/SXPostActionHandler-Protocol.h>

@class NSString;
@protocol SXPostActionHandler;

@protocol SXPostActionHandlerManager <NSObject, SXPostActionHandler>
- (void)addPostActionHandler:(id<SXPostActionHandler>)arg1 forActionType:(NSString *)arg2;
- (void)removePostActionHandler:(id<SXPostActionHandler>)arg1 forActionType:(NSString *)arg2;
@end

