//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (VCError)
+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
@end

