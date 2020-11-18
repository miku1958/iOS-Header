//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDBatterySaverProtocol-Protocol.h>

@class NSXPCConnection;

@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol>
{
    NSXPCConnection *_connection;
}

+ (id)batterySaver;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)getPowerMode;
- (id)init;
- (long long)setMode:(long long)arg1;
- (BOOL)setPowerMode:(long long)arg1 error:(id *)arg2;
- (BOOL)setPowerMode:(long long)arg1 fromSource:(id)arg2;
- (void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setPowerMode:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
