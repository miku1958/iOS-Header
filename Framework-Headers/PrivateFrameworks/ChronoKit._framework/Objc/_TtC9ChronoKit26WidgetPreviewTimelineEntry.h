//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Timeline/TLTimelineBlobEntry.h>

#import <ChronoKit/TLPreviewTimelineEntry-Protocol.h>

@class MISSING_TYPE, NSArray;

@interface _TtC9ChronoKit26WidgetPreviewTimelineEntry : TLTimelineBlobEntry <TLPreviewTimelineEntry>
{
    MISSING_TYPE *tl_errors;
    MISSING_TYPE *tl_selectableRegions;
    MISSING_TYPE *backgroundColor;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSArray *tl_errors;
@property (nonatomic, copy) NSArray *tl_selectableRegions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlob:(id)arg1 atDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

