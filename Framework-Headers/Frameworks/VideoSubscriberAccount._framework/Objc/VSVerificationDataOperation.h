//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSFailable;

__attribute__((visibility("hidden")))
@interface VSVerificationDataOperation : VSAsyncOperation
{
    VSFailable *_result;
}

@property (strong, nonatomic) VSFailable *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (void)_finishWithData:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithResult:(int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3;
- (void)executionDidBegin;
- (id)init;

@end
