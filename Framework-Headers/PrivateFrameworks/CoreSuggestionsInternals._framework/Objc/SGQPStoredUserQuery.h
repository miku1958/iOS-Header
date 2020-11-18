//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQPStoredUserQuery : NSObject
{
    BOOL _engaged;
    NSString *_conversationId;
    NSString *_query;
    struct SGUnixTimestamp_ _creationTimestamp;
}

@property (readonly, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property (readonly, nonatomic) struct SGUnixTimestamp_ creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property (readonly, nonatomic) BOOL engaged; // @synthesize engaged=_engaged;
@property (readonly, nonatomic) NSString *query; // @synthesize query=_query;

+ (id)query:(id)arg1 withConversationId:(id)arg2 creationTimestamp:(struct SGUnixTimestamp_)arg3 engaged:(BOOL)arg4;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQuery:(id)arg1 conversationId:(id)arg2 creationTimestamp:(struct SGUnixTimestamp_)arg3 engaged:(BOOL)arg4;

@end

