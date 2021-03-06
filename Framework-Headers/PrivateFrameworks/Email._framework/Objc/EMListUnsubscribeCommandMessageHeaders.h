//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class NSString;

@interface EMListUnsubscribeCommandMessageHeaders : NSObject <NSSecureCoding>
{
    NSString *_firstRecipient;
    NSString *_subject;
    NSString *_firstSenderAddress;
    NSString *_listID;
}

@property (readonly, nonatomic) NSString *firstRecipient; // @synthesize firstRecipient=_firstRecipient;
@property (readonly, nonatomic) NSString *firstSenderAddress; // @synthesize firstSenderAddress=_firstSenderAddress;
@property (readonly, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property (readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaders:(id)arg1;

@end

