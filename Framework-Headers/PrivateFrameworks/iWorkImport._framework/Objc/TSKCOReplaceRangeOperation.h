//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOReplaceOperation.h>

#import <iWorkImport/TSKCORangeOperation-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation>
{
    vector_b5e32e34 _rangeVector;
    BOOL _preserveLowerPriorityLocation;
    unsigned long long _insertLength;
}

@property (readonly, nonatomic) unsigned long long insertLength; // @synthesize insertLength=_insertLength;
@property (readonly, nonatomic) BOOL preserveLowerPriorityLocation; // @synthesize preserveLowerPriorityLocation=_preserveLowerPriorityLocation;
@property (readonly, nonatomic) const vector_b5e32e34 *rangeVector;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 rangeVector:(const vector_b5e32e34 *)arg2 insertLength:(unsigned long long)arg3;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 rangeVector:(const vector_b5e32e34 *)arg2 insertLength:(unsigned long long)arg3 noop:(BOOL)arg4;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 rangeVector:(const vector_b5e32e34 *)arg2 insertLength:(unsigned long long)arg3 preserveLowerPriorityLocation:(BOOL)arg4 noop:(BOOL)arg5;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (BOOL)isEqual:(id)arg1;
- (shared_ptr_f167ad79)newTransformableOperation;
- (id)operationWithNewNoop:(BOOL)arg1;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)toString;

@end
