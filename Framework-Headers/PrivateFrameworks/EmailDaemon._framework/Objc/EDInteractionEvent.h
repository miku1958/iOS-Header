//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface EDInteractionEvent : NSObject
{
    long long _eventID;
    long long _version;
    NSDate *_date;
    NSString *_accountID;
    long long _mailboxID;
    long long _conversationID;
    long long _messageIDHash;
    long long _messagePersistentID;
    NSString *_name;
    NSDictionary *_data;
}

@property (copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
@property (copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) long long eventID; // @synthesize eventID=_eventID;
@property (nonatomic) long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property (nonatomic) long long messageIDHash; // @synthesize messageIDHash=_messageIDHash;
@property (nonatomic) long long messagePersistentID; // @synthesize messagePersistentID=_messagePersistentID;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)debugDescription;

@end
