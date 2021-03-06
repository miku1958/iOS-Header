//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPKOSTransaction;

@interface NPKWorkQueueItem : NSObject
{
    NPKOSTransaction *_transaction;
    CDUnknownBlockType _workBlock;
}

@property (readonly, nonatomic) NPKOSTransaction *transaction; // @synthesize transaction=_transaction;
@property (readonly, nonatomic) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;

+ (id)itemWithTransaction:(id)arg1 work:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithTransaction:(id)arg1 work:(CDUnknownBlockType)arg2;

@end

