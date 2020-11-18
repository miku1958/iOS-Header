//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RTKeychainManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_deleteValueWithKey:(id)arg1 error:(id *)arg2;
- (id)_objectForKey:(id)arg1 error:(id *)arg2;
- (BOOL)_setObject:(id)arg1 forKey:(id)arg2 existence:(BOOL)arg3 error:(id *)arg4;
- (id)init;
- (id)objectForKey:(id)arg1 defaultHandler:(CDUnknownBlockType)arg2;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;

@end

