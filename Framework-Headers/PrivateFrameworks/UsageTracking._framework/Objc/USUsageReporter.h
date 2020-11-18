//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface USUsageReporter : NSObject
{
    NSXPCConnection *_xpcConnection;
}

@property (readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)getLocalDeviceIdentifierAndReturnError:(id *)arg1;
+ (void)synchronizeUsageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getLocalDeviceIdentifierAndReturnError:(id *)arg1;
- (id)init;

@end
