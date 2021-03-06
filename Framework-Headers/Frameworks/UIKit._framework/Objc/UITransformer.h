//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITransform.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface UITransformer : UITransform <BSDescriptionProviding, NSMutableCopying>
{
    NSMutableArray *_transforms;
    NSMutableArray *_transformReasonAssociations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *transforms; // @synthesize transforms=_transforms;

- (void).cxx_destruct;
- (id)_initWithTransformer:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

