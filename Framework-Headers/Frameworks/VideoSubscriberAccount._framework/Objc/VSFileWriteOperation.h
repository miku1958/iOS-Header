//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSData, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface VSFileWriteOperation : VSAsyncOperation
{
    NSData *_data;
    NSURL *_destination;
    NSError *_error;
}

@property (copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (copy, nonatomic) NSURL *destination; // @synthesize destination=_destination;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;

- (void).cxx_destruct;
- (void)executionDidBegin;

@end
