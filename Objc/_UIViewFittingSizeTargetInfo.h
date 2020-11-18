//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying>
{
    BOOL _dummy;
    float _horizontalPriority;
    float _verticalPriority;
    struct CGSize _targetSize;
}

@property (nonatomic, getter=isDummy) BOOL dummy; // @synthesize dummy=_dummy;
@property (readonly, nonatomic) float horizontalPriority; // @synthesize horizontalPriority=_horizontalPriority;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (readonly, nonatomic) float verticalPriority; // @synthesize verticalPriority=_verticalPriority;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTargetSize:(struct CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTargetInfo:(id)arg1;

@end

