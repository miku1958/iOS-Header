//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData;
@protocol LAContextCallbackXPC, LAUIDelegate;

@protocol LAContextManager
- (void)connectToContext:(NSData *)arg1 uiDelegate:(id<LAUIDelegate>)arg2 callback:(id<LAContextCallbackXPC>)arg3 reply:(void (^)(id<LAContextXPC>, NSDictionary *, NSError *))arg4;
- (void)prearmTouchIdWithReply:(void (^)(id<LAPrearmContextXPC>, NSError *))arg1;
@end
