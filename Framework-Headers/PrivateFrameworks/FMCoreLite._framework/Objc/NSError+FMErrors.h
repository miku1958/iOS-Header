//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FMErrors)
+ (id)fm_cancelledError;
+ (id)fm_errorWithCode:(unsigned long long)arg1;
+ (id)fm_genericError;
+ (id)fm_timeoutError;
- (BOOL)fm_isCancelledError;
- (BOOL)fm_isTimeoutError;
@end
