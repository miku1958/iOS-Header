//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLXPCPhotoLibraryStorePolicy-Protocol.h>

@class NSString;

@interface PLXPCPhotoLibraryStorePolicySandbox : NSObject <PLXPCPhotoLibraryStorePolicy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)hasSandboxAccessForPath:(id)arg1;
- (BOOL)shouldUseXPCStoreForDatabasePath:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;

@end

