//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMAssistantMessageSearchChatParticipant : NSObject
{
    BOOL _isMe;
    NSString *_handle;
    NSArray *_contactIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property (readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) BOOL isMe; // @synthesize isMe=_isMe;

- (void).cxx_destruct;
- (id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(BOOL)arg3;
- (BOOL)matchesPerson:(id)arg1 withUnifiedContactIdentifiers:(id)arg2;

@end

