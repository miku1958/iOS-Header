//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional;

@interface VSVerificationDataOperation : VSAsyncOperation
{
    VSOptional *_result;
}

@property (strong) VSOptional *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (void)_finishWithData:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithResult:(int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3;
- (void)executionDidBegin;
- (id)init;

@end
