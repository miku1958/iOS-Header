//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CNFutureResult : NSObject
{
    id _result;
    NSError *_error;
}

@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) id result; // @synthesize result=_result;

- (void)dealloc;
- (void)setResult:(id)arg1 error:(id)arg2;

@end

