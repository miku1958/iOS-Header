//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint
{
    double _huggingPriority;
    double _compressionResistancePriority;
}

@property (readonly) double compressionResistancePriority; // @synthesize compressionResistancePriority=_compressionResistancePriority;
@property (readonly) double huggingPriority; // @synthesize huggingPriority=_huggingPriority;

- (id)_priorityDescription;
- (id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5;
- (double)priorityForVariable:(id)arg1;

@end
