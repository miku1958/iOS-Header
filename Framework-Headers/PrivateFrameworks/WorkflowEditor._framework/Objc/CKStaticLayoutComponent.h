//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKComponent.h>

@interface CKStaticLayoutComponent : CKComponent
{
    vector_24047093 _children;
}

+ (id)newWithChildren:(const vector_24047093 *)arg1;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2 children:(const vector_24047093 *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

