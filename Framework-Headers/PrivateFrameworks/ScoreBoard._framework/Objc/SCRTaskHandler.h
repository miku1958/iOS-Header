//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScoreBoard/NSCopying-Protocol.h>

@interface SCRTaskHandler : NSObject <NSCopying>
{
    CDUnknownBlockType _syncBlock;
    CDUnknownBlockType _asyncBlock;
}

+ (id)asynchronousHandlerWithBlock:(CDUnknownBlockType)arg1;
+ (id)synchronousHandlerWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (CDUnknownBlockType)_asyncHandler;
- (id)_initWithSyncBlock:(CDUnknownBlockType)arg1 asyncBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_syncHandler;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

