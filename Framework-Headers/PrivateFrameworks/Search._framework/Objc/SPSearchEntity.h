//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Search/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPSearchEntity : NSObject <NSSecureCoding>
{
    BOOL _hasWords;
    NSString *_bundleIdentifier;
}

@property (strong) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property BOOL hasWords; // @synthesize hasWords=_hasWords;
@property (readonly) BOOL isPeopleSearch;
@property (readonly) BOOL isScopedAppSearch;
@property (readonly) NSString *queryString;
@property (readonly) NSString *tokenText;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;

@end
