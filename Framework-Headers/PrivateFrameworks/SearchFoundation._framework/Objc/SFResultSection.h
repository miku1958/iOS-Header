//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFResultSection : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_results;
    unsigned long long _maxInitiallyVisibleResults;
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_title;
    NSString *_moreText;
    double _rankingScore;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long maxInitiallyVisibleResults; // @synthesize maxInitiallyVisibleResults=_maxInitiallyVisibleResults;
@property (copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property (nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property (strong, nonatomic) NSArray *results; // @synthesize results=_results;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

