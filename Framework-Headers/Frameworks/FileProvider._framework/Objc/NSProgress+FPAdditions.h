//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

#import <FileProvider/FPCancellable-Protocol.h>

@interface NSProgress (FPAdditions) <FPCancellable>
- (void)fp_addChildProgress:(id)arg1;
- (id)fp_fileOperationKind;
- (id)fp_fileOperationKindStrict:(BOOL)arg1;
- (BOOL)fp_isOfFileOperationKind:(id)arg1;
- (BOOL)fp_isOfFileOperationKind:(id)arg1 strict:(BOOL)arg2;
- (void)fp_setFileOperationKind:(id)arg1;
@end
