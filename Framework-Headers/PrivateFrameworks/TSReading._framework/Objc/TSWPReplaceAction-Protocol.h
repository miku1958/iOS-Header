//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSWPStorage;

@protocol TSWPReplaceAction <NSObject>
- (long long)delta;
- (struct _NSRange)insertedRange;
- (void)performWithStorage:(TSWPStorage *)arg1 delta:(long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3 replaceBlock:(void (^)(TSWPSelection *, NSString *))arg4;
- (unsigned long long)targetCharIndex;
@end

