//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <NSSecureCoding>
{
    ENAccountIdentity *_accountIdentity;
    NSArray *_participants;
    NSData *_sharedApplicationData;
}

@property (strong) ENAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
@property (strong, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property (strong, nonatomic) NSData *sharedApplicationData; // @synthesize sharedApplicationData=_sharedApplicationData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

