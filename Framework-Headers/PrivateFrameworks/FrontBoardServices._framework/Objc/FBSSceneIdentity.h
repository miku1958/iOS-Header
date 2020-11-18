//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class NSString;

@interface FBSSceneIdentity : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSString *_identifier;
    NSString *_workspaceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *workspaceIdentifier; // @synthesize workspaceIdentifier=_workspaceIdentifier;

+ (id)identity;
+ (id)identityForIdentifier:(id)arg1;
+ (id)identityForIdentifier:(id)arg1 workspaceIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

