//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SGMessagePair : NSObject
{
    NSString *_reply;
    NSString *_prompt;
    NSString *_handle;
    NSDate *_sentAt;
}

@property (strong, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (strong, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (strong, nonatomic) NSString *reply; // @synthesize reply=_reply;
@property (strong, nonatomic) NSDate *sentAt; // @synthesize sentAt=_sentAt;

- (void).cxx_destruct;
- (id)initWithReply:(id)arg1 prompt:(id)arg2 handle:(id)arg3 sentAt:(id)arg4;

@end
