//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject
{
    MFMailMessage *_message;
    id _content;
    BOOL _isDraft;
    CDUnknownBlockType _completionBlock;
}

- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadAttachments;

@end

