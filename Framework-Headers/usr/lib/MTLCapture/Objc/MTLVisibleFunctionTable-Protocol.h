//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/MTLResource-Protocol.h>

@protocol MTLFunctionHandle;

@protocol MTLVisibleFunctionTable <MTLResource>
- (void)setFunction:(id<MTLFunctionHandle>)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id *)arg1 withRange:(struct _NSRange)arg2;
@end

