//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppDataStoring-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_storage;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;

- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)count;
- (id)getDataForKey:(id)arg1;
- (id)init;
- (id)keyAtIndex:(unsigned long long)arg1;
- (void)removeDataForKey:(id)arg1;
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;

@end

