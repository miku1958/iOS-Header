//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary, NSOperationQueue;

@interface PLKeyFaceManager : NSObject
{
    NSMutableDictionary *_operationsByPersonUUID;
    NSLock *_dictionaryLock;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (id)makeOperationForPersonUUID:(id)arg1;
- (void)markPersonAsNeedingKeyFace:(id)arg1;
- (void)operationDidCompletion:(id)arg1;

@end
