//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
    NSString *_templateString;
}

@property (readonly, copy, nonatomic) NSString *templateString; // @synthesize templateString=_templateString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)URLWithSearchTerms:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)includesParameter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2;
- (id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2;
- (id)templateBySubstitutingValues:(id)arg1;

@end

