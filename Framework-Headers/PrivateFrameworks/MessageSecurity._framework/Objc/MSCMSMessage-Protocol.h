//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageSecurity/MSMessage-Protocol.h>

@class MSOID, NSData;
@protocol MSCMSMessage;

@protocol MSCMSMessage <MSMessage>

@property (strong) MSOID *contentType;
@property (strong, nonatomic) NSData *dataContent;
@property (strong) id<MSCMSMessage> embeddedContent;
@property (readonly) MSOID *type;

@end
