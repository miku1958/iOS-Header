//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface NUAutoCalculatorResponse : NSObject
{
    long long _status;
    NSError *_error;
    NSDictionary *_result;
}

@property (readonly) NSError *error; // @synthesize error=_error;
@property (readonly) NSDictionary *result; // @synthesize result=_result;
@property (readonly) long long status; // @synthesize status=_status;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)initWithNoResult;
- (id)initWithResult:(id)arg1;

@end

