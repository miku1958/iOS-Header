//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSArray;

@interface FPTrashOperation : FPActionOperation
{
    NSArray *_items;
}

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end

