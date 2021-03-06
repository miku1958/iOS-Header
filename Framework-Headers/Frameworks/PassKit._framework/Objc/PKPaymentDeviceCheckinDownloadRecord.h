//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface PKPaymentDeviceCheckinDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>
{
    NSString *_region;
    NSUUID *_identifier;
    NSData *_responseData;
}

@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *region; // @synthesize region=_region;
@property (strong, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

