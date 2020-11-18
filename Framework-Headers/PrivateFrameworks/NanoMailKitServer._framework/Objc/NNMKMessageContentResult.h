//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoMessageContentSync;

@interface NNMKMessageContentResult : NSObject
{
    BOOL _isContentCompletelySynced;
    BOOL _isNotificationPriority;
    BOOL _isUserRequest;
    BOOL _alreadySyncedWithCurrentPriority;
    BOOL _messageDoesNotExist;
    NNMKProtoMessageContentSync *_protoMessageContentSync;
    unsigned long long _resendInterval;
    long long _compressedTextDataLength;
}

@property (nonatomic) BOOL alreadySyncedWithCurrentPriority; // @synthesize alreadySyncedWithCurrentPriority=_alreadySyncedWithCurrentPriority;
@property (nonatomic) long long compressedTextDataLength; // @synthesize compressedTextDataLength=_compressedTextDataLength;
@property (nonatomic) BOOL isContentCompletelySynced; // @synthesize isContentCompletelySynced=_isContentCompletelySynced;
@property (nonatomic) BOOL isNotificationPriority; // @synthesize isNotificationPriority=_isNotificationPriority;
@property (nonatomic) BOOL isUserRequest; // @synthesize isUserRequest=_isUserRequest;
@property (nonatomic) BOOL messageDoesNotExist; // @synthesize messageDoesNotExist=_messageDoesNotExist;
@property (strong, nonatomic) NNMKProtoMessageContentSync *protoMessageContentSync; // @synthesize protoMessageContentSync=_protoMessageContentSync;
@property (nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;

- (void).cxx_destruct;

@end
