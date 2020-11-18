//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>
#import <BoardServices/NSCopying-Protocol.h>
#import <BoardServices/NSMutableCopying-Protocol.h>

@class BSObjCProtocol, NSString;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSString *_identifier;
    BSObjCProtocol *_server;
    BSObjCProtocol *_client;
    struct __CFBoolean *_clientWaitsForActivation;
}

@property (readonly, copy, nonatomic) BSObjCProtocol *client;
@property (readonly, nonatomic) long long clientMessagingExpectation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) BSObjCProtocol *server;
@property (readonly) Class superclass;

+ (id)interfaceWithServer:(id)arg1 client:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
