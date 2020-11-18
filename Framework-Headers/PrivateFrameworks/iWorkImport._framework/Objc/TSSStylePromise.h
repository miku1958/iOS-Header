//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSSStyleObject-Protocol.h>

@class NSMutableArray, TSSStyle;

__attribute__((visibility("hidden")))
@interface TSSStylePromise : NSObject <TSSStyleObject>
{
    TSSStyle *_sourceStyle;
    NSMutableArray *_promisees;
}

+ (id)promiseForStyle:(id)arg1;
- (void)addPromisee:(id)arg1;
- (void)dealloc;
- (void)fulfillWithStyle:(id)arg1;
- (id)initWithStyle:(id)arg1;

@end

