//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/CKTextKitTruncating-Protocol.h>

@class CKTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface CKTextKitTailTruncater : NSObject <CKTextKitTruncating>
{
    CKTextKitContext *_context;
    NSAttributedString *_truncationAttributedString;
    NSCharacterSet *_avoidTailTruncationSet;
    struct CGSize _constrainedSize;
    vector_b5e32e34 _visibleRanges;
    struct CGRect _truncationStringRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGRect truncationStringRect; // @synthesize truncationStringRect=_truncationStringRect;
@property (readonly, nonatomic) vector_b5e32e34 visibleRanges; // @synthesize visibleRanges=_visibleRanges;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3;
- (unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3;
- (void)_truncate;
- (id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 constrainedSize:(struct CGSize)arg4;

@end
