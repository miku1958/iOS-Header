//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol EMFAutocompleteCandidateProvider
- (void)enumerateCandidatesMatchingPrefix:(NSString *)arg1 withEnumerationType:(long long)arg2 maxCandidates:(unsigned long long)arg3 usingBlock:(void (^)(NSString *, long long, BOOL *))arg4;
- (NSString *)firstCandidateMatchingPrefix:(NSString *)arg1;
- (BOOL)isValidToken:(NSString *)arg1;
@end

