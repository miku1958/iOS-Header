//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPReplaceAction-Protocol.h>

@class NSString, TSWPChangeSession;

__attribute__((visibility("hidden")))
@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction>
{
    struct _NSRange _range;
    TSWPChangeSession *_changeSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)delta;
- (id)initWithRange:(struct _NSRange)arg1 changeSession:(id)arg2;
- (struct _NSRange)insertedRange;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder *)arg3 withFlags:(unsigned int)arg4 replaceBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)targetCharIndex;

@end

