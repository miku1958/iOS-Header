//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAssertionHandler.h>

@interface TSUAssertionHandler : NSAssertionHandler
{
}

+ (id)currentHandler;
+ (void)installAsNSHandler;
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;
+ (void)testCaseStarted:(id)arg1;
+ (void)testCaseStopped:(id)arg1;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
- (void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;

@end

