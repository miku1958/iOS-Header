//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification, NSString;

@interface FBSSceneParameters : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    FBSSceneSpecification *_specification;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
}

@property (copy, nonatomic) FBSSceneClientSettings *clientSettings; // @synthesize clientSettings=_clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification; // @synthesize specification=_specification;
@property (readonly) Class superclass;

+ (id)parametersForSpecification:(id)arg1;
- (void).cxx_destruct;
- (void)_configureCopy:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithSpecification:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;

@end

