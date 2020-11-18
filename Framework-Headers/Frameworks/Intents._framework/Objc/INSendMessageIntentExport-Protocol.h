//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <NSObject, JSExport>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) INSpeakableString *speakableGroupName;

- (id)init;
@end

