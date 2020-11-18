//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNPromise, NSDictionary, NSNumber, NSSet;

@interface CNContactMatchInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _matchedNameProperty;
    NSNumber *_relevanceScore;
    NSDictionary *_matchedProperties;
    NSSet *_matchedTerms;
    CNPromise *_excerpt;
}

@property (strong, nonatomic) CNPromise *excerpt; // @synthesize excerpt=_excerpt;
@property (nonatomic) BOOL matchedNameProperty; // @synthesize matchedNameProperty=_matchedNameProperty;
@property (copy, nonatomic) NSDictionary *matchedProperties; // @synthesize matchedProperties=_matchedProperties;
@property (strong, nonatomic) NSSet *matchedTerms; // @synthesize matchedTerms=_matchedTerms;
@property (copy, nonatomic) NSNumber *relevanceScore; // @synthesize relevanceScore=_relevanceScore;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
