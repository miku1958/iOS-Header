//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHPhotoLibraryExecutionContext-Protocol.h>

@class NSString;

@interface PHAsynchronousPhotoLibraryExecutionContext : NSObject <PHPhotoLibraryExecutionContext>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)asynchronousExecutionContext;
- (void)callTransactionCompletionHandler:(CDUnknownBlockType)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
- (void)dispatchOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)sendChangesRequest:(id)arg1 onClient:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
