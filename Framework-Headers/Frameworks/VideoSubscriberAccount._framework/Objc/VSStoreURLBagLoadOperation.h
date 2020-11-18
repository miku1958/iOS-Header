//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, NSString, VSStoreURLBag;

__attribute__((visibility("hidden")))
@interface VSStoreURLBagLoadOperation : VSAsyncOperation
{
    VSStoreURLBag *_bag;
    NSString *_bagKey;
    id _value;
    NSError *_error;
}

@property (strong, nonatomic) VSStoreURLBag *bag; // @synthesize bag=_bag;
@property (copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) id value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)executionDidBegin;

@end
