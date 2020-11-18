//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/NSObject-Protocol.h>

@class NSString;

@protocol SFBehaviorProtocol <NSObject>
- (void)configNumber:(NSString *)arg1 family:(NSString *)arg2 complete:(void (^)(NSNumber *))arg3;
- (void)configString:(NSString *)arg1 family:(NSString *)arg2 complete:(void (^)(NSString *))arg3;
- (void)feature:(NSString *)arg1 family:(NSString *)arg2 defaultValue:(BOOL)arg3 complete:(void (^)(BOOL))arg4;
- (void)ramping:(NSString *)arg1 family:(NSString *)arg2 complete:(void (^)(unsigned int))arg3;
@end
