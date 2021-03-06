//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CVNLP/NSCopying-Protocol.h>

@interface CVNLPLexiconCursor : NSObject <NSCopying>
{
    const struct _LXCursor *_cursor;
    unsigned long long _priority;
}

@property (readonly, nonatomic) const struct _LXCursor *cursor; // @synthesize cursor=_cursor;
@property (readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)cursorConditionalLogProbability;
- (void)dealloc;
- (id)initByAdvancingCursor:(id)arg1 withString:(id)arg2;
- (id)initWithCursor:(struct _LXCursor *)arg1 priority:(unsigned long long)arg2;
- (id)newCursorByAdvancingWithString:(id)arg1;

@end

