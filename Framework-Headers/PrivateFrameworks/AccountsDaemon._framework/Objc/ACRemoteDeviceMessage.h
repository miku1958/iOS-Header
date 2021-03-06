//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSData, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface ACRemoteDeviceMessage : NSObject
{
    NSMutableDictionary *_payload;
    NSData *_data;
    BOOL _needsReply;
    BOOL _isReply;
    NSString *_identifier;
}

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *command;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isReply; // @synthesize isReply=_isReply;
@property (nonatomic) BOOL needsReply; // @synthesize needsReply=_needsReply;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *result;
@property (readonly, nonatomic) NSString *sentMessageIdentifier;
@property (readonly, nonatomic) BOOL success;

+ (id)_whitelistedClasses;
+ (id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
- (void).cxx_destruct;
- (void)_invalidateCachedData;
- (id)_payloadObjectForKey:(id)arg1;
- (void)_setPayloadObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1;

@end

