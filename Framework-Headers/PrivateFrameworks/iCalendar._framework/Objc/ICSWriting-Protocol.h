//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSMutableString, NSSet, NSString;

@protocol ICSWriting
- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(NSMutableString *)arg2;
- (NSSet *)parametersToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)parametersToObscure;
- (NSSet *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (NSSet *)propertiesToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesToObscure;
- (BOOL)shouldObscureValue;
@end
