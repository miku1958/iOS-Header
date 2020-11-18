//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXTilingLayout, PXTilingLayoutInvalidationContext;

@interface PXTilingChangeEvent : NSObject
{
    long long _type;
    PXTilingLayout *_layout;
    PXTilingLayoutInvalidationContext *_context;
    struct CGSize _referenceSize;
    struct UIEdgeInsets _contentInset;
}

@property (readonly, nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, nonatomic) PXTilingLayoutInvalidationContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) PXTilingLayout *layout; // @synthesize layout=_layout;
@property (readonly, nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithChangeToContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithChangeToLayout:(id)arg1;
- (id)initWithChangeToReferenceSize:(struct CGSize)arg1;
- (id)initWithCoordinateSpaceChange;
- (id)initWithLayoutInvalidationContext:(id)arg1;

@end

