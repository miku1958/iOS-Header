//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation
{
    NSString *_messageIDHeader;
    NSString *_folderID;
}

+ (id)log;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;
- (BOOL)translateToLocalActionWithConnection:(id)arg1;

@end
