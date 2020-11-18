//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSError, NSNumber;

@interface ASDAccountLookupResponse : ASDRequestResponse
{
    BOOL _askToBuyEnabled;
    NSNumber *_accountID;
}

@property (copy) NSNumber *accountID; // @synthesize accountID=_accountID;
@property BOOL askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property (copy) NSError *error; // @dynamic error;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccountID:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

