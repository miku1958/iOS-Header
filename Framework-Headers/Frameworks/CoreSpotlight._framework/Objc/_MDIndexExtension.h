//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSString;
@protocol OS_dispatch_queue;

@interface _MDIndexExtension : NSObject
{
    BOOL _entitlementVerified;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_containerPath;
    NSString *_containerID;
    NSExtension *_extension;
    NSString *_extensionID;
}

@property (strong, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property (strong, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property (readonly) BOOL dontRunDuringMigration;
@property (nonatomic) BOOL entitlementVerified; // @synthesize entitlementVerified=_entitlementVerified;
@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (strong, nonatomic) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property (readonly) BOOL isEnabled;
@property (readonly) BOOL isInternal;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)_performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_verifyIntegrityWithHostContext:(id)arg1;
- (id)description;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4;
- (void)performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

