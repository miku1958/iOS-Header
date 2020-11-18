//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FPActionOperationLocator, FPDMoveWriter, NSString;

@protocol FPDMoveWriterExecutor
- (id)initWithWriter:(FPDMoveWriter *)arg1;
- (void)performCopyOfItem:(FPActionOperationLocator *)arg1 to:(FPActionOperationLocator *)arg2 as:(NSString *)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(void (^)(FPActionOperationLocator *, NSError *))arg6;
- (void)performCreateFolder:(FPActionOperationLocator *)arg1 inside:(FPActionOperationLocator *)arg2 as:(NSString *)arg3 completion:(void (^)(FPActionOperationLocator *, NSError *))arg4;
- (void)performMoveOfFolder:(FPActionOperationLocator *)arg1 to:(FPActionOperationLocator *)arg2 as:(NSString *)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(BOOL)arg6 completion:(void (^)(FPActionOperationLocator *, NSError *))arg7;
- (void)performMoveOfItem:(FPActionOperationLocator *)arg1 to:(FPActionOperationLocator *)arg2 as:(NSString *)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(void (^)(FPActionOperationLocator *, NSError *))arg6;
@end
