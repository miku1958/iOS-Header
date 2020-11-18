//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (TSUIO)

@property (readonly, nonatomic) BOOL tsu_isCorruptedError;
@property (readonly, nonatomic) BOOL tsu_isReadError;
@property (readonly, nonatomic) BOOL tsu_isWriteError;

+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;
@end
