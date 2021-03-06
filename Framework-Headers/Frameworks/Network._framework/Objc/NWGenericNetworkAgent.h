//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription>
{
    struct netagent *_internalNetagent;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *agentDescription;
@property (readonly, nonatomic) NSString *agentDomain;
@property (readonly, nonatomic) NSString *agentType;
@property (readonly, nonatomic) NSUUID *agentUUID;
@property struct netagent *internalNetagent; // @synthesize internalNetagent=_internalNetagent;
@property (readonly, nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property (readonly, nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (readonly, nonatomic, getter=isUserActivated) BOOL userActivated;
@property (readonly, nonatomic, getter=isVoluntary) BOOL voluntary;

- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)initWithKernelAgent:(const struct netagent *)arg1;
- (BOOL)isNexusProvider;
- (BOOL)requiresAssert;
- (BOOL)supportsBrowse;
- (BOOL)supportsResolve;

@end

