//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DataAccess/NSCoding-Protocol.h>

@interface DAMailMessage : NSObject <NSCoding>
{
}

- (id)attachments;
- (id)bcc;
- (id)body;
- (int)bodySize;
- (int)bodyTruncated;
- (int)bodyType;
- (id)cc;
- (id)clientID;
- (id)conversationId;
- (id)conversationIndex;
- (id)date;
- (id)displayTo;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)flagged;
- (BOOL)flaggedIsSet;
- (id)folderID;
- (id)from;
- (int)importance;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (BOOL)isDraft;
- (int)lastVerb;
- (id)longID;
- (BOOL)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)messageClass;
- (BOOL)read;
- (BOOL)readIsSet;
- (id)remoteID;
- (id)replyTo;
- (id)rfc822Data;
- (id)sender;
- (id)serverID;
- (int)smimeType;
- (id)subject;
- (id)threadTopic;
- (id)to;
- (BOOL)verbIsSet;

@end
