//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol BSXPCServerClient <NSObject>

@property (readonly, strong, nonatomic) NSObject<OS_xpc_object> *connection;

- (void)invalidate;
- (void)resume;
- (void)suspend;
@end
