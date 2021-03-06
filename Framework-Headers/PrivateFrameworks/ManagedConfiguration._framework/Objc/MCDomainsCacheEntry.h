//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCDomainsCacheEntry : NSObject
{
    BOOL _subdomainsMatch;
    NSString *_domain;
    NSString *_path;
    NSNumber *_port;
}

@property (strong, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (strong, nonatomic) NSString *path; // @synthesize path=_path;
@property (strong, nonatomic) NSNumber *port; // @synthesize port=_port;
@property (nonatomic) BOOL subdomainsMatch; // @synthesize subdomainsMatch=_subdomainsMatch;

+ (id)normalizedPatternString:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPattern:(id)arg1;
- (BOOL)matchesURL:(id)arg1;

@end

