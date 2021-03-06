//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSArray, NSString, REContent, REElementAction;

@interface REElement : NSObject <REAutomaticExportedInterface, NSCopying, NSCoding>
{
    NSString *_identifier;
    unsigned long long _privacyBehavior;
    REContent *_content;
    REContent *_idealizedContent;
    NSArray *_relevanceProviders;
    REElementAction *_action;
    NSString *_bundleIdentifier;
}

@property (readonly, nonatomic) REElementAction *action; // @synthesize action=_action;
@property (strong) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) REContent *content; // @synthesize content=_content;
@property (readonly, nonatomic) REContent *idealizedContent; // @synthesize idealizedContent=_idealizedContent;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long privacyBehavior; // @synthesize privacyBehavior=_privacyBehavior;
@property (readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;

+ (id)_supportedDictionaryEncodingKeys;
- (void).cxx_destruct;
- (BOOL)_relevanceProvidersEqualToElement:(id)arg1;
- (void)_updateIdentifier:(id)arg1;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeContent;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 relevanceProviderGenerator:(id)arg2;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 privacyBehavior:(unsigned long long)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNoContentElement;
- (id)shallowCopy;

@end

