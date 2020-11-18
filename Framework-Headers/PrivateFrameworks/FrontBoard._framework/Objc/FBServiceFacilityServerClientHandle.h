//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSBasicServerClient.h>

#import <FrontBoard/FBSServiceFacilityClientHandle_Internal-Protocol.h>

@class BSProcessHandle, FBProcess, NSObject, NSString;
@protocol FBSServiceFacilityClientContext, OS_xpc_object;

@interface FBServiceFacilityServerClientHandle : BSBasicServerClient <FBSServiceFacilityClientHandle_Internal>
{
    BOOL _uiApp;
    NSString *_bundleID;
    BOOL _extension;
    BOOL _suspended;
    NSString *_facilityID;
    FBProcess *_process;
    BSProcessHandle *_processHandle;
    id<FBSServiceFacilityClientContext> _context;
    NSString *_bundlePath;
}

@property (nonatomic, getter=isUIApp) BOOL UIApp; // @synthesize UIApp=_uiApp;
@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (strong, nonatomic) id<FBSServiceFacilityClientContext> context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExtension) BOOL extension; // @synthesize extension=_extension;
@property (copy, nonatomic) NSString *facilityID; // @synthesize facilityID=_facilityID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (void)resume;
- (void)suspend;

@end

