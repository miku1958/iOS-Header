//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage
{
    NSString *_networkSSID;
    NSString *_networkPassword;
}

@property (copy, nonatomic) NSString *networkPassword; // @synthesize networkPassword=_networkPassword;
@property (copy, nonatomic) NSString *networkSSID; // @synthesize networkSSID=_networkSSID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

