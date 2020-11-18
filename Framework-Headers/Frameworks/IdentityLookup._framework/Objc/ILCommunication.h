//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface ILCommunication : NSObject <NSSecureCoding>
{
    NSString *_sender;
    NSDate *_dateReceived;
}

@property (readonly, copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property (readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCommunication:(id)arg1;

@end

