//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLFunctionVariant.h>

@class MTLSimFunction;

__attribute__((visibility("hidden")))
@interface MTLSimFunctionVariant : MTLFunctionVariant
{
    MTLSimFunction *_function;
}

@property (readonly) MTLSimFunction *function;

- (void)dealloc;
- (id)initWithFunction:(id)arg1 compilerOutput:(id)arg2;

@end

