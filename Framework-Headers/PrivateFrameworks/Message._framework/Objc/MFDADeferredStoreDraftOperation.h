//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFOfflineCacheOperation.h>

#import <Message/MFDAOfflineCacheOperation-Protocol.h>

@class NSString;

@interface MFDADeferredStoreDraftOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;
- (BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end

