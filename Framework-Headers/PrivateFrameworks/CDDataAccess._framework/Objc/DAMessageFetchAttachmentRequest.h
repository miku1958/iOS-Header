//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject
{
    NSString *_messageID;
    NSString *_attachmentName;
}

@property (copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property (copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

