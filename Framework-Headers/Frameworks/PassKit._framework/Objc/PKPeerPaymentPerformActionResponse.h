//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse
{
    BOOL _success;
    unsigned long long _status;
}

@property (readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property (readonly, nonatomic) BOOL success; // @synthesize success=_success;

- (id)initWithData:(id)arg1;

@end

