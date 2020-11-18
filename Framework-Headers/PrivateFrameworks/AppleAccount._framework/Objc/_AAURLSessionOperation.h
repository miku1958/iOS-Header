//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface _AAURLSessionOperation : NSObject
{
    NSMutableData *_mutableData;
    CDUnknownBlockType _completion;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy, nonatomic) NSData *data;

+ (id)operationWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (id)init;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2;

@end

