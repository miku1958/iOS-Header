//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FSUserFontServicesManager : NSObject
{
}

+ (void)GSFontEnableOrDisablePersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 enabled:(BOOL)arg3 suspend:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
+ (void)GSFontRegisterPersistentURLs:(id)arg1 enabled:(BOOL)arg2 forProfileFonts:(BOOL)arg3 withReply:(CDUnknownBlockType)arg4;
+ (void)GSFontUnregisterPersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 withReply:(CDUnknownBlockType)arg3;
+ (id)_UserFontServicesConnection;

@end

