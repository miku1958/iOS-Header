//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentLayoutAttributeDescriptor.h>

@class STTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor
{
    STTextExclusionPath *_resultingExclusionPath;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (strong, nonatomic) STTextExclusionPath *resultingExclusionPath; // @synthesize resultingExclusionPath=_resultingExclusionPath;

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 withRange:(struct _NSRange)arg4;
- (void).cxx_destruct;

@end
