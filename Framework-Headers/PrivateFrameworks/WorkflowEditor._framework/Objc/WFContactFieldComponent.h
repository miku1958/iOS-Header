//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKStatefulViewComponent.h>

@protocol WFComponentNavigationContext;

@interface WFContactFieldComponent : CKStatefulViewComponent
{
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    id<WFComponentNavigationContext> _navigationContext;
    struct WFContactFieldAttributes _attributes;
}

@property (readonly, nonatomic) struct WFContactFieldAttributes attributes; // @synthesize attributes=_attributes;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property (readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property (readonly, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;

+ (id)newWithAttributes:(const struct WFContactFieldAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 navigationContext:(id)arg4 size:(const struct CKComponentSize *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
