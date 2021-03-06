//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PXCPLUIStatusProvider;

@interface PUStorageManagementCPLService : NSObject <PXChangeObserver>
{
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    BOOL _hasCompletedInitialUpload;
    CDUnknownBlockType _uploadCallbackHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCompletedInitialUpload; // @synthesize hasCompletedInitialUpload=_hasCompletedInitialUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType uploadCallbackHandler; // @synthesize uploadCallbackHandler=_uploadCallbackHandler;

+ (id)sharedCPLService;
- (void).cxx_destruct;
- (void)_initCPLUIStatusProvider;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end

