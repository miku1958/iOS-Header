//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/VCPRealTimeAnalysisClientProtocol-Protocol.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol>
{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id)analysisService;
+ (id)errorWithStatus:(int)arg1 andDescription:(id)arg2;
- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withProperties:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end

