//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICFPSAPContext : NSObject
{
}

- (void)dealloc;
- (BOOL)exchangeWithSAPVersion:(unsigned int)arg1 data:(id)arg2 returningData:(id *)arg3 exchangeStatus:(char *)arg4 error:(id *)arg5;
- (id)initReturningError:(id *)arg1;
- (BOOL)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (BOOL)signData:(id)arg1 returningSignatureData:(id *)arg2 error:(id *)arg3;

@end
