//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSArray;

@interface FPUntrashOperation : FPActionOperation
{
    NSArray *_items;
    FPItem *_restoreDirectory;
    CDUnknownBlockType _untrashCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType untrashCompletionBlock; // @synthesize untrashCompletionBlock=_untrashCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end

