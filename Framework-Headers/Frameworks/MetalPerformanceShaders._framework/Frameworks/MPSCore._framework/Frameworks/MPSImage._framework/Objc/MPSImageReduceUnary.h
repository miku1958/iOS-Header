//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageReduceUnary : MPSUnaryImageKernel
{
    CDStruct_1e3be3a8 _clipRectSource;
    int _reduceOp;
}

@property (nonatomic) CDStruct_1e3be3a8 clipRectSource; // @synthesize clipRectSource=_clipRectSource;

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 reduceOperation:(int)arg2;

@end

