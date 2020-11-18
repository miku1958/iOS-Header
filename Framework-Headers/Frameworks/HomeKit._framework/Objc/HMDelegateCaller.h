//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HMDelegateCaller : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)_localizedError:(id)arg1;
- (void)callCompletion:(CDUnknownBlockType)arg1 actionSet:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 array:(id)arg2;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 array:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 boolValue:(BOOL)arg3 array:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 dictionary:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 obj:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 errorString:(id)arg2;
- (void)callCompletion:(CDUnknownBlockType)arg1 errorString:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 home:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 invitations:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 isUsingHomeKit:(BOOL)arg2 isUsingCloudServices:(BOOL)arg3 error:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 obj:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 room:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 serviceGroup:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 user:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 value:(BOOL)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 zone:(id)arg2 error:(id)arg3;
- (id)initWithQueue:(id)arg1;
- (void)invokeBlock:(CDUnknownBlockType)arg1;

@end
