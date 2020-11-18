//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSString;

@interface MLCloudSession : NSObject
{
    NSString *_serviceName;
    CKContainer *_container;
    NSString *_teamIdentifier;
}

@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (strong, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;

- (void).cxx_destruct;
- (id)fetchKeyResponseFromServerForKeyID:(id)arg1 signedKeyRequest:(id)arg2 error:(id *)arg3;
- (id)initWithTeamIdentifier:(id)arg1;
- (void)invokeRPC:(id)arg1 request:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
