//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveContextClient/NSObject-Protocol.h>

@class ATXLocationManagerState;

@protocol ATXLocationManagerStateStore <NSObject>

@property double cacheExpirationInterval;

- (void)clear;
- (ATXLocationManagerState *)loadNowOrCallLater:(void (^)(ATXLocationManagerState *))arg1;
- (void)write:(ATXLocationManagerState *)arg1;
@end
