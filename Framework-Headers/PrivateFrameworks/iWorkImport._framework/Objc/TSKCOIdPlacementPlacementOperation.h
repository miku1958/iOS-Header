//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementPlacementOperation : TSKCOIdPlacementBaseOperation
{
}

- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5;
- (shared_ptr_f167ad79)newTransformableOperation;
- (int)placementType;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;

@end

