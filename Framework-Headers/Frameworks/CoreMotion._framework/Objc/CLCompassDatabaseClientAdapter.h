//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceAdapter.h>

#import <CoreMotion/CLCompassDatabaseClientProtocol-Protocol.h>

@class NSString;

@interface CLCompassDatabaseClientAdapter : CLNotifierServiceAdapter <CLCompassDatabaseClientProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (BOOL)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
- (struct CLCompassDatabaseClient *)adaptee;
- (void)beginService;
- (void)doAsync:(CDUnknownBlockType)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)endService;
- (id)initInSilo:(id)arg1;
- (BOOL)syncgetDoSync:(CDUnknownBlockType)arg1;

@end
