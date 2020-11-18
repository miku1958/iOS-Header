//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface BBActionResponse : NSObject <NSSecureCoding>
{
    long long _actionType;
    NSString *_actionID;
    NSString *_bulletinRecordID;
    NSString *_bulletinPublisherID;
    NSDictionary *_bulletinContext;
    NSString *_bulletinButtonID;
    NSDictionary *_context;
}

@property (copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property (nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property (copy, nonatomic) NSString *bulletinButtonID; // @synthesize bulletinButtonID=_bulletinButtonID;
@property (copy, nonatomic) NSDictionary *bulletinContext; // @synthesize bulletinContext=_bulletinContext;
@property (copy, nonatomic) NSString *bulletinPublisherID; // @synthesize bulletinPublisherID=_bulletinPublisherID;
@property (copy, nonatomic) NSString *bulletinRecordID; // @synthesize bulletinRecordID=_bulletinRecordID;
@property (copy, nonatomic) NSDictionary *context; // @synthesize context=_context;

+ (id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

