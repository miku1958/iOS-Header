//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSArray, NSString, NTKUpNextElementAction, NTKUpNextElementContent;

@interface NTKUpNextElement : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    unsigned long long _interaction;
    NSString *_identifier;
    unsigned long long _privacyBehavior;
    NTKUpNextElementContent *_content;
    NTKUpNextElementContent *_idealizedContent;
    NTKUpNextElementContent *_lockedContent;
    NSArray *_relevanceProviders;
    NTKUpNextElementAction *_defaultAction;
}

@property (readonly, nonatomic) NTKUpNextElementContent *content; // @synthesize content=_content;
@property (readonly, nonatomic) NTKUpNextElementAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property (readonly, nonatomic) NTKUpNextElementContent *idealizedContent; // @synthesize idealizedContent=_idealizedContent;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long interaction; // @synthesize interaction=_interaction;
@property (readonly, nonatomic) NTKUpNextElementContent *lockedContent; // @synthesize lockedContent=_lockedContent;
@property (readonly, nonatomic) unsigned long long privacyBehavior; // @synthesize privacyBehavior=_privacyBehavior;
@property (readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 lockedContent:(id)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6 interaction:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5 idealizedContent:(id)arg6 interaction:(unsigned long long)arg7 lockedContent:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNoContentElement;
- (void)setBundleIdentifier:(id)arg1;

@end
