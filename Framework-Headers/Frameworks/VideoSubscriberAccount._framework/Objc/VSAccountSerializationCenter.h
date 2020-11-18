//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSUndoManager, VSPersistentStorage;

@interface VSAccountSerializationCenter : NSObject
{
    NSOperationQueue *_serializationQueue;
    VSPersistentStorage *_storage;
}

@property (strong, nonatomic) NSOperationQueue *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
@property (strong, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property (strong, nonatomic) NSUndoManager *undoManager;

+ (id)defaultSerializationCenter;
- (void).cxx_destruct;
- (id)exportDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
