//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BSSettings, NSSet, NSString;

@interface FBSSceneClientSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    double _preferredLevel;
    long long _preferredInterfaceOrientation;
    NSSet *_occlusions;
    NSString *_preferredSceneHostIdentifier;
    BSSettings *_otherSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSSet *occlusions; // @synthesize occlusions=_occlusions;
@property (readonly, nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
@property (readonly, nonatomic) double preferredLevel; // @synthesize preferredLevel=_preferredLevel;
@property (readonly, copy, nonatomic) NSString *preferredSceneHostIdentifier; // @synthesize preferredSceneHostIdentifier=_preferredSceneHostIdentifier;
@property (readonly) Class superclass;

+ (BOOL)_isMutable;
+ (id)settings;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)otherSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

