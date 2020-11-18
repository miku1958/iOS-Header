//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol VMAccountManagerXPCServer <NSObject>
- (oneway void)accounts:(void (^)(NSArray *))arg1;
- (oneway void)isPasscodeChangeSupportedForAccountUUID:(NSUUID *)arg1 reply:(void (^)(BOOL))arg2;
- (oneway void)maximumPasscodeLengthForAccountUUID:(NSUUID *)arg1 reply:(void (^)(long long))arg2;
- (oneway void)minimumPasscodeLengthForAccountUUID:(NSUUID *)arg1 reply:(void (^)(long long))arg2;
- (oneway void)setPasscode:(NSString *)arg1 forAccountUUID:(NSUUID *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
@end

