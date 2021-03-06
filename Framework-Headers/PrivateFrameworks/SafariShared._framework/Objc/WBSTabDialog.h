//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSTabDialog : NSObject
{
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _dismissalBlock;
    BOOL _blocksWebProcessUntilDismissed;
    NSArray *_cancellationExemptions;
}

@property (nonatomic) BOOL blocksWebProcessUntilDismissed; // @synthesize blocksWebProcessUntilDismissed=_blocksWebProcessUntilDismissed;
@property (copy, nonatomic) NSArray *cancellationExemptions; // @synthesize cancellationExemptions=_cancellationExemptions;

+ (id)tabDialogWithPresentationBlock:(CDUnknownBlockType)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_init;
- (id)createInfo;
- (id)init;

@end

