//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKComponentScopeRoot;

@interface CKTransactionalComponentDataSourceItem : NSObject
{
    struct CKComponentLayout _layout;
    id _model;
    CKComponentScopeRoot *_scopeRoot;
    struct CKComponentBoundsAnimation _boundsAnimation;
}

@property (readonly, nonatomic) struct CKComponentBoundsAnimation boundsAnimation; // @synthesize boundsAnimation=_boundsAnimation;
@property (readonly, nonatomic) id model; // @synthesize model=_model;
@property (readonly, nonatomic) CKComponentScopeRoot *scopeRoot; // @synthesize scopeRoot=_scopeRoot;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLayout:(const struct CKComponentLayout *)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(struct CKComponentBoundsAnimation)arg4;
- (const struct CKComponentLayout *)layout;

@end

