//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class LSApplicationWorkspace, NSExtension, NSString, NSUUID;

@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    LSApplicationWorkspace *mWorkspace;
    NSExtension *mInstructorExtension;
    NSUUID *mContextIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedExtensionProxy;
- (void).cxx_destruct;
- (void)_fetchListenerEndpointWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)dealloc;
- (void)fetchListenerEndpointWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)proxiesContainClassroomApp:(id)arg1;
- (void)resetExtension;

@end
