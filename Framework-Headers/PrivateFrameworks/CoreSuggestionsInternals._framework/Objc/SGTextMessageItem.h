//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>
#import <CoreSuggestionsInternals/SGConversationTurnProtocol-Protocol.h>

@class NSArray, NSDate, NSString, SGTextMessage;

@interface SGTextMessageItem : NSObject <NSSecureCoding, SGConversationTurnProtocol>
{
    SGTextMessage *_message;
    NSString *_text;
    NSString *_senderID;
    NSDate *_timestamp;
    NSString *_language;
    NSArray *_detectedData;
    NSArray *_features;
}

@property (readonly) NSArray *detectedData; // @synthesize detectedData=_detectedData;
@property (strong) NSArray *features; // @synthesize features=_features;
@property (readonly) NSString *language; // @synthesize language=_language;
@property (readonly) SGTextMessage *message; // @synthesize message=_message;
@property (readonly, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property (readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property (readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextMessage:(id)arg1;
- (id)initWithTextMessage:(id)arg1 detectedData:(id)arg2;
- (BOOL)isEqualToConversationTurn:(id)arg1;

@end

