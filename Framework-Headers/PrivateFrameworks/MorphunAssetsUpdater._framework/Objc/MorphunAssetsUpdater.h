//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MorphunAssetsUpdater : NSObject
{
}

+ (id)createError:(id)arg1 code:(int)arg2;
+ (id)forceSynchronousUpdateOfLocales:(id)arg1 andRemoveLocales:(id)arg2;
+ (id)forceUpdate:(BOOL)arg1 updateLanguages:(id)arg2 removeLanguages:(id)arg3;
+ (void)forceUpdateLocales:(id)arg1 andRemoveLocales:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)forceUpdateWithCompletion:(id)arg1 remove:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getPaths:(id *)arg1;
+ (void)getPathsWithCompletion:(CDUnknownBlockType)arg1;
+ (id)languageCodesFromLocales:(id)arg1;
+ (id)validateMessage:(id)arg1;

@end

