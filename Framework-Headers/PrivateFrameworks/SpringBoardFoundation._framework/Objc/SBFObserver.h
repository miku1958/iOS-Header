//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFObserver : NSObject
{
}

+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1;
+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3;
+ (void)sendObserver:(id)arg1 resultsOfBlock:(CDUnknownBlockType)arg2;

@end

