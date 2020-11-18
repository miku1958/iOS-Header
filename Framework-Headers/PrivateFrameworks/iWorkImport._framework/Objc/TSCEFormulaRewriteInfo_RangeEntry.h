//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject
{
    struct _NSRange _range;
    vector_dadc1b26 _orderedUuids;
    unsigned short _offset;
}

@property unsigned short offset; // @synthesize offset=_offset;
@property (readonly) const vector_dadc1b26 *orderedUuids; // @synthesize orderedUuids=_orderedUuids;
@property (readonly) struct _NSRange range; // @synthesize range=_range;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initFromMessage:(const struct RewriteRangeEntryArchive *)arg1;
- (id)initWithRange:(struct _NSRange)arg1 orderedUuids:(const vector_dadc1b26 *)arg2 offset:(unsigned short)arg3;
- (void)saveToMessage:(struct RewriteRangeEntryArchive *)arg1;

@end

