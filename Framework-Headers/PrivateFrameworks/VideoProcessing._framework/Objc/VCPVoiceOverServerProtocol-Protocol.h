//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IOSurface, NSArray, NSDictionary;

@protocol VCPVoiceOverServerProtocol
- (void)requestProcessing:(NSArray *)arg1 ofIOSurface:(IOSurface *)arg2 withIdentifier:(int)arg3 properties:(NSDictionary *)arg4 options:(NSDictionary *)arg5 andReply:(void (^)(NSDictionary *, NSError *))arg6;
@end

