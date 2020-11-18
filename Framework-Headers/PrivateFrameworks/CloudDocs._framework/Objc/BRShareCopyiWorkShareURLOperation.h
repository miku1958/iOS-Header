//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation
{
    CKShare *_share;
    NSString *_appName;
    CDUnknownBlockType _shareCopyURLCompletionBlock;
}

@property (strong, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (strong, nonatomic) CKShare *share; // @synthesize share=_share;
@property (copy) CDUnknownBlockType shareCopyURLCompletionBlock; // @synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock;

+ (id)iWorkShareableExtensions;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1 appName:(id)arg2;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (void)main;

@end

