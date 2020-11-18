//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>

@class CIFilterShape;

@interface CISampler : NSObject <NSCopying>
{
    void *_priv;
}

@property (readonly) CIFilterShape *definition;
@property (readonly) struct CGRect extent;

+ (id)samplerWithImage:(id)arg1;
+ (id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2;
+ (id)samplerWithImage:(id)arg1 options:(id)arg2;
- (id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(struct __va_list_tag [1])arg3;
- (void *)_internalRepresentation;
- (void *)colorSpace;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 keysAndValues:(id)arg2;
- (id)initWithImage:(id)arg1 options:(id)arg2;
- (id)opaqueShape;
- (id)wrapMode;

@end
