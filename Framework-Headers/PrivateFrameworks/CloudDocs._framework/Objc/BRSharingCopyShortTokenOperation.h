//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShortTokenOperation : BROperation
{
    NSURL *_fileURL;
    CDUnknownBlockType _shortTokenCompletionBlock;
}

@property (copy) CDUnknownBlockType shortTokenCompletionBlock; // @synthesize shortTokenCompletionBlock=_shortTokenCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;

@end

