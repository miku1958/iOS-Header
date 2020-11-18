//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TIUITextChecking;

@interface TITextChecker : NSObject
{
    id<_TIUITextChecking> _checker;
}

@property (readonly, nonatomic) id<_TIUITextChecking> checker; // @synthesize checker=_checker;

+ (id)_UITextCheckerWithAsynchronousLoading:(BOOL)arg1;
- (void).cxx_destruct;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id *)arg5;
- (BOOL)doneLoading;
- (id)init;
- (id)initWithAsynchronousLoading:(BOOL)arg1;

@end
