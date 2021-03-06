//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSDictionary, NSString;

@interface CRKSendIDSMessageRequest : CATTaskRequest
{
    NSString *_sourceAppleID;
    NSString *_destinationAddress;
    NSDictionary *_message;
}

@property (copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property (copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property (copy, nonatomic) NSString *sourceAppleID; // @synthesize sourceAppleID=_sourceAppleID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

