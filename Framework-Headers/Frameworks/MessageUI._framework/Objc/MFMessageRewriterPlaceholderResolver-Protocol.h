//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFAttachmentPlaceholder, NSString, NSURL;

@protocol MFMessageRewriterPlaceholderResolver <NSObject>
- (id)contentForContentID:(NSString *)arg1;
- (id)contentForPlaceholder:(MFAttachmentPlaceholder *)arg1;
- (id)contentForURL:(NSURL *)arg1;
@end

