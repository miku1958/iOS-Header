//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FCErrorAdditions)
+ (id)fc_belowMinimumVersionError;
+ (id)fc_canaryDownError;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)fc_feedDroppedError;
+ (id)fc_notAvailableError;
+ (id)fc_notCachedError;
+ (id)fc_offlineErrorWithReason:(long long)arg1;
@end

