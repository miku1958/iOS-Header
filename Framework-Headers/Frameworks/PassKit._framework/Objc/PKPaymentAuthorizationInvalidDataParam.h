//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKPaymentAuthorizationParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : PKPaymentAuthorizationParam
{
    BOOL _animated;
    long long _dataType;
    long long _status;
    NSError *_error;
}

@property (nonatomic) BOOL animated; // @synthesize animated=_animated;
@property (nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) long long status; // @synthesize status=_status;


@end
