//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol TSWPLayoutTarget;

@protocol TSWPOffscreenColumn <NSObject>

@property (readonly, nonatomic) struct _NSRange anchoredRange;
@property (readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (readonly, nonatomic) struct _NSRange range;
@property (readonly, nonatomic) BOOL terminatedByBreak;

- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id<TSWPLayoutTarget>)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
@end
