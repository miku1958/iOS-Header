//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUIDelayedActionCommandCache, NSArray, SAUIDelayedActionCommand;

@protocol AFUIDelayedActionCommandCacheDelegate <NSObject>
- (void)commandCache:(AFUIDelayedActionCommandCache *)arg1 didInvalidateDelayedActionCommand:(SAUIDelayedActionCommand *)arg2;
- (void)commandCache:(AFUIDelayedActionCommandCache *)arg1 didPerformDelayedActionCommand:(SAUIDelayedActionCommand *)arg2;
- (void)performGenericAceCommands:(NSArray *)arg1 forCommandCache:(AFUIDelayedActionCommandCache *)arg2;
@end

