//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface REPredictionElement : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _privacyBehavior;
    NSArray *_relevanceProviders;
    NSString *_bundleIdentifier;
    NSString *_interaction;
    NSString *_section;
}

@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *interaction; // @synthesize interaction=_interaction;
@property (readonly, nonatomic) unsigned long long privacyBehavior; // @synthesize privacyBehavior=_privacyBehavior;
@property (readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;
@property (strong, nonatomic) NSString *section; // @synthesize section=_section;

+ (id)predictionElementFromElement:(id)arg1;
+ (id)predictionElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 bundleIdentifier:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
