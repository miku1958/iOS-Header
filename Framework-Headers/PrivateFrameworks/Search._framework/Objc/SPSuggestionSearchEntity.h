//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPSearchEntity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPSuggestionSearchEntity : SPSearchEntity
{
    NSString *_queryString;
    NSString *_tokenText;
}

@property (strong, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (strong, nonatomic) NSString *tokenText; // @synthesize tokenText=_tokenText;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;

@end

