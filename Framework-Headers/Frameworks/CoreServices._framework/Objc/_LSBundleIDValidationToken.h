//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSValidationToken.h>

__attribute__((visibility("hidden")))
@interface _LSBundleIDValidationToken : _LSValidationToken
{
}

+ (BOOL)isToken:(id)arg1 correctForBundleIdentifier:(id)arg2 connection:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (id)initWithBundleIdentifier:(id)arg1;

@end
