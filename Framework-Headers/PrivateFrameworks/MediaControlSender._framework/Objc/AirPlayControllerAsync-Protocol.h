//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol AirPlayControllerAsync
- (void)getProperty:(NSString *)arg1 qualifier:(id)arg2 completion:(void (^)(int, id))arg3;
- (void)performCommand:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(void (^)(int, NSDictionary *))arg4;
- (void)postEvent:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(void (^)(void))arg4;
- (void)setProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(void (^)(int))arg4;
@end
