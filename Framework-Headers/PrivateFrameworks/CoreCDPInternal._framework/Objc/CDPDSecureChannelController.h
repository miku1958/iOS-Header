//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDSecureChannelContext;

@interface CDPDSecureChannelController : NSObject
{
    CDPDSecureChannelContext *_secureChannelContext;
}

- (void).cxx_destruct;
- (void)_processAndReplyWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startListeningWithProxy:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)joinCircle:(CDUnknownBlockType)arg1;
- (void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

