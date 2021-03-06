//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKStatefulViewComponent.h>

@interface WFTextInputComponent : CKStatefulViewComponent
{
    CDUnknownBlockType _updateBlock;
    CKTypedComponentAction_789af415 _beginAction;
    CKTypedComponentAction_789af415 _doneAction;
    struct WFTextInputAttributes _attributes;
}

@property (readonly, nonatomic) struct WFTextInputAttributes attributes; // @synthesize attributes=_attributes;
@property (readonly, nonatomic) CKTypedComponentAction_789af415 beginAction; // @synthesize beginAction=_beginAction;
@property (readonly, nonatomic) CKTypedComponentAction_789af415 doneAction; // @synthesize doneAction=_doneAction;
@property (readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;

+ (id)newWithAttributes:(const struct WFTextInputAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 beginAction:(CKTypedComponentAction_789af415)arg3 doneAction:(CKTypedComponentAction_789af415)arg4 size:(const struct CKComponentSize *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

