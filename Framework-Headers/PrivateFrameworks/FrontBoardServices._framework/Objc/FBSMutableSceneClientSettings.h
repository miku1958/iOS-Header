//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneClientSettings.h>

#import <FrontBoardServices/BSDebugDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCSecureCoding-Protocol.h>

@class FBSSceneIdentityToken, NSOrderedSet, NSString;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <BSDebugDescriptionProviding, BSXPCSecureCoding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic, setter=_setLayers:) NSOrderedSet *layers; // @dynamic layers;
@property (nonatomic) long long preferredInterfaceOrientation; // @dynamic preferredInterfaceOrientation;
@property (nonatomic) double preferredLevel; // @dynamic preferredLevel;
@property (copy, nonatomic) NSString *preferredSceneHostIdentifier; // @dynamic preferredSceneHostIdentifier;
@property (copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity; // @dynamic preferredSceneHostIdentity;
@property (readonly) Class superclass;

+ (BOOL)_isMutable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)otherSettings;

@end

