//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface FLFollowUpAction : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_label;
    NSURL *_url;
    NSDictionary *_userInfo;
    NSURL *_launchActionURL;
    NSData *_launchActionArguments;
    unsigned long long _eventSource;
    unsigned long long _sqlID;
}

@property (strong, nonatomic) NSData *_userInfoData;
@property (nonatomic) unsigned long long eventSource; // @synthesize eventSource=_eventSource;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSData *launchActionArguments; // @synthesize launchActionArguments=_launchActionArguments;
@property (copy) NSURL *launchActionURL; // @synthesize launchActionURL=_launchActionURL;
@property (nonatomic) unsigned long long sqlID; // @synthesize sqlID=_sqlID;
@property (copy) NSURL *url; // @synthesize url=_url;
@property (copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)actionWithLabel:(id)arg1 url:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_loadActionURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 url:(id)arg2;

@end
