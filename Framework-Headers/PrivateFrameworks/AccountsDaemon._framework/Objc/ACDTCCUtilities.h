//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDTCCUtilities : NSObject
{
}

+ (int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (BOOL)TCCSupportedForAccountTypeID:(id)arg1;
+ (struct __CFString *)_TCCServiceForAccountTypeID:(id)arg1;
+ (id)allTCCStatesForAccountTypeID:(id)arg1;
+ (BOOL)clearAllTCCStatesForAccountTypeID:(id)arg1;
+ (BOOL)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (BOOL)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(BOOL)arg3;

@end

