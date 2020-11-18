//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_lastSyncDownDate;
    long long _lastSyncDownStatus;
    CKServerChangeToken *_changeToken;
    CKServerChangeToken *_pendingChangeToken;
    unsigned long long _clientRequestID;
}

@property (strong, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property (nonatomic) unsigned long long clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property (readonly, nonatomic) BOOL hasNeverSyncedDown;
@property (strong) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
@property (nonatomic) long long lastSyncDownStatus; // @synthesize lastSyncDownStatus=_lastSyncDownStatus;
@property (readonly, nonatomic) CKServerChangeToken *nextSyncRequestChangeToken;
@property (strong, nonatomic) CKServerChangeToken *pendingChangeToken; // @synthesize pendingChangeToken=_pendingChangeToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)forgetChangeTokens;
- (void)forgetClientRequestID;
- (void)forgetPendingChangeToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerSyncState:(id)arg1;
- (BOOL)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3;

@end
