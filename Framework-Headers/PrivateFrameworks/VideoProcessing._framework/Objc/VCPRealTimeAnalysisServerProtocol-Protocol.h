//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IOSurface, NSDictionary;

@protocol VCPRealTimeAnalysisServerProtocol
- (void)requestAnalysis:(unsigned long long)arg1 ofIOSurface:(IOSurface *)arg2 withProperties:(NSDictionary *)arg3 withReply:(void (^)(NSDictionary *, NSError *))arg4;
@end
