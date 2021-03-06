//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface SSModelLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_pendingUpdates;
}

@property (strong, nonatomic) NSMutableSet *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)assetDirectoryPathForType:(unsigned long long)arg1 forUpdate:(BOOL)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)hasPendingUpdates;
- (id)init;
- (void)moveNewlyPackagedAssets:(id)arg1;
- (void)removeAssetsForType:(unsigned long long)arg1 group:(id)arg2;
- (void)removeAssetsWithName:(id)arg1;
- (void)unpackageModelAssets:(id)arg1 assetName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

