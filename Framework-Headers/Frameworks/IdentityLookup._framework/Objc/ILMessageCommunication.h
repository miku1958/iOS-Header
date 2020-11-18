//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdentityLookup/ILCommunication.h>

@class NSString;

@interface ILMessageCommunication : ILCommunication
{
    NSString *_messageBody;
}

@property (readonly, copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMessageCommunication:(id)arg1;

@end
