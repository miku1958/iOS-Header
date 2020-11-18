//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBAssertion, NSArray, NSDictionary, NSString;

@interface BBResponse : NSObject <NSSecureCoding>
{
    BBAssertion *_lifeAssertion;
    CDUnknownBlockType _sendBlock;
    NSString *_bulletinID;
    BOOL _sent;
    NSString *_replyText;
    BOOL _activated;
    NSArray *_lifeAssertions;
    long long _actionType;
    NSString *_buttonID;
    NSString *_actionID;
    NSString *_originID;
    unsigned long long _actionActivationMode;
    long long _actionBehavior;
    NSDictionary *_context;
}

@property (nonatomic) unsigned long long actionActivationMode; // @synthesize actionActivationMode=_actionActivationMode;
@property (nonatomic) long long actionBehavior; // @synthesize actionBehavior=_actionBehavior;
@property (copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property (nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property (nonatomic) BOOL activated; // @synthesize activated=_activated;
@property (copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property (copy, nonatomic) NSString *buttonID; // @synthesize buttonID=_buttonID;
@property (copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property (copy, nonatomic) NSArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;
@property (copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property (copy, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;
@property (copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)send;

@end

