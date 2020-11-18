//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface APContentDepiction : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    unsigned long long _placement;
    unsigned long long _adjacency;
    NSString *_language;
    NSString *_locale;
    NSArray *_searchTerms;
    NSArray *_keywords;
    NSArray *_categories;
}

@property unsigned long long adjacency; // @synthesize adjacency=_adjacency;
@property (strong) NSArray *categories; // @synthesize categories=_categories;
@property (strong) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong) NSArray *keywords; // @synthesize keywords=_keywords;
@property (strong) NSString *language; // @synthesize language=_language;
@property (strong) NSString *locale; // @synthesize locale=_locale;
@property unsigned long long placement; // @synthesize placement=_placement;
@property (strong) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)init:(unsigned long long)arg1 adjacency:(unsigned long long)arg2 language:(id)arg3 locale:(id)arg4 searchTerm:(id)arg5 keywords:(id)arg6 categories:(id)arg7;
- (id)initWithCoder:(id)arg1;

@end
