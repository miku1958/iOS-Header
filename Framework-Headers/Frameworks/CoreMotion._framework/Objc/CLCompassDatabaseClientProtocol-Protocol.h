//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@protocol CLCompassDatabaseClientProtocol <CLNotifierServiceProtocol>
- (void)doAsync:(void (^)(struct CLCompassDatabaseClient *))arg1;
- (void)doAsync:(void (^)(struct CLCompassDatabaseClient *))arg1 withReply:(void (^)(void))arg2;
- (BOOL)syncgetDoSync:(void (^)(struct CLCompassDatabaseClient *))arg1;
@end
