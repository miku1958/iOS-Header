//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMPConversationKey, NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject
{
    IDSMPConversationKey *_conversationKey;
    NSString *_sponsorAlias;
}

@property (readonly, nonatomic) IDSMPConversationKey *conversationKey; // @synthesize conversationKey=_conversationKey;
@property (readonly, nonatomic) NSString *sponsorAlias; // @synthesize sponsorAlias=_sponsorAlias;

- (void).cxx_destruct;
- (id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2;

@end

