//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary;

@protocol ServerInterface
- (void)allocateClientResources:(void (^)(CAXPCObject *, unsigned int, NSError *))arg1;
- (void)getClientID:(void (^)(unsigned long long))arg1;
- (void)getHapticLatency:(void (^)(double, NSError *))arg1;
- (void)loadHapticEvent:(NSDictionary *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)loadHapticPattern:(NSDictionary *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)loadHapticSequence:(NSData *)arg1 reply:(void (^)(unsigned long long, unsigned long long, NSError *))arg2;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)prewarm:(void (^)(NSError *))arg1;
- (void)releaseClientResources;
- (void)requestChannels:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)setDoneReply:(void (^)(void))arg1;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)startRunning:(void (^)(NSError *))arg1;
- (void)stopPrewarm;
- (void)stopRunning;
@end

