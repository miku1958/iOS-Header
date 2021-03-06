//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_xpc_object;

@interface SBSRemoteContentDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>
{
    NSString *_serviceName;
    NSString *_viewControllerClassName;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSDictionary *_userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (readonly, copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@property (strong, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // @synthesize xpcEndpoint=_xpcEndpoint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 xpcEndpoint:(id)arg3 userInfo:(id)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

