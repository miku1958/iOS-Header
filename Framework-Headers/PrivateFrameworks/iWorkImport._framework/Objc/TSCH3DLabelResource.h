//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DResource.h>

#import <iWorkImport/TSCH3DStringIndexableResource-Protocol.h>

@class TSCH3DLabelResourceAttributes;

__attribute__((visibility("hidden")))
@interface TSCH3DLabelResource : TSCH3DResource <TSCH3DStringIndexableResource>
{
    BOOL mSizeAndOffsetCalculated;
    tvec2_84d5962d mTightSize;
    tvec2_84d5962d mSize;
    tvec2_84d5962d mLabelRenderOffset;
    tvec2_84d5962d mBitmapLabelRenderOffset;
    TSCH3DLabelResourceAttributes *mAttributes;
}

@property (copy, nonatomic) TSCH3DLabelResourceAttributes *attributes; // @synthesize attributes=mAttributes;
@property (readonly, nonatomic) tvec2_84d5962d bitmapLabelRenderOffset;
@property (readonly, nonatomic) tvec2_3b141483 clampedLabelSampledSize;
@property (readonly, nonatomic) tvec2_84d5962d labelRenderOffset;
@property (readonly, nonatomic) tvec2_84d5962d labelSize;
@property (readonly, nonatomic) tvec2_84d5962d tightSize;

+ (id)resourceWithLabelAttributes:(id)arg1;
- (id).cxx_construct;
- (void)dealloc;
- (id)get;
- (id)init;
- (id)initWithLabelAttributes:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (tvec2_3b141483)labelSizeWithSamples:(double)arg1;
- (void)p_calculateSizeAndOffset;
- (tvec2_3b141483)p_clampedLabelSampledSizeReturningClampedRatio:(float *)arg1;
- (void)setString:(id)arg1;

@end

