//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HDDatabasePendingWriteRecord : NSObject
{
    CDUnknownBlockType _writeBlock;
    CDUnknownBlockType _completion;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy, nonatomic) CDUnknownBlockType writeBlock; // @synthesize writeBlock=_writeBlock;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWriteBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end

