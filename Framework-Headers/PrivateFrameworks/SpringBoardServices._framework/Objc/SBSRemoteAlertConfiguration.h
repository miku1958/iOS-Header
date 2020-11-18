//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>

@class NSDictionary, NSString;

@interface SBSRemoteAlertConfiguration : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSString *_serviceName;
    NSString *_vcClassName;
    NSDictionary *_userInfo;
    NSString *_impersonatedCarPlayAppIdentifier;
    BOOL _forCarPlay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForCarPlay) BOOL forCarPlay; // @synthesize forCarPlay=_forCarPlay;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *impersonatedCarPlayAppIdentifier; // @synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier;
@property (readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (readonly, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_vcClassName;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

