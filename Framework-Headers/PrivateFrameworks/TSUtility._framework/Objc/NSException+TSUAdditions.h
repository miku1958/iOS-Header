//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)
+ (void)errnoRaise:(id)arg1 format:(id)arg2;
+ (void)tsu_raiseWithError:(id)arg1;
- (int)localErrno;
- (id)tsu_error;
@end

