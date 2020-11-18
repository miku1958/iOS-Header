//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject
{
    HMBProcessingOptions *_options;
    unsigned long long _blockRow;
}

@property (readonly, nonatomic) unsigned long long blockRow; // @synthesize blockRow=_blockRow;
@property (readonly, nonatomic) HMBProcessingOptions *options; // @synthesize options=_options;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2;

@end
