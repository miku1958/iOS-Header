//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextRange;

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject
{
    UITextRange *_resultRange;
    CDUnknownBlockType _targetedPreviewProvider;
}

@property (readonly, nonatomic) UITextRange *resultRange; // @synthesize resultRange=_resultRange;
@property (readonly, nonatomic) CDUnknownBlockType targetedPreviewProvider; // @synthesize targetedPreviewProvider=_targetedPreviewProvider;

+ (id)resultWithRange:(id)arg1 targetedPreviewProvider:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithRange:(id)arg1 targetedPreviewProvider:(CDUnknownBlockType)arg2;

@end
