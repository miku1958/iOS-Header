//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardUIServices/NSCopying-Protocol.h>

@class FBUISceneClientIdentity;

@interface FBUISceneSpecification : NSObject <NSCopying>
{
    FBUISceneClientIdentity *_clientIdentity;
}

@property (readonly, nonatomic) Class agentClass;
@property (readonly, copy, nonatomic) FBUISceneClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property (readonly, nonatomic) Class clientSettingsClass;
@property (readonly, nonatomic) Class settingsClass;
@property (readonly, nonatomic) Class transitionContextClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientIdentity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

