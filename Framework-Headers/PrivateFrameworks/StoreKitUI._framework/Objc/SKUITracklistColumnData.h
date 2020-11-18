//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SKUITracklistColumnData : NSObject
{
    NSArray *_columns;
    double _interColumnSpacing;
    double _leftEdgeInset;
    double _rightEdgeInset;
}

@property (copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property (nonatomic) double interColumnSpacing; // @synthesize interColumnSpacing=_interColumnSpacing;
@property (nonatomic) double leftEdgeInset; // @synthesize leftEdgeInset=_leftEdgeInset;
@property (nonatomic) double rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;

- (void).cxx_destruct;
- (id)_initSKUITracklistColumnData;
- (void)adjustColumnsToFitWidth:(double)arg1;
- (id)columnForIdentifier:(long long)arg1;
- (void)enumerateColumnsForHeader:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateColumnsForTrack:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithRepresentativeTrack:(id)arg1;
- (id)viewElementsForTrack:(id)arg1 columnIndex:(long long)arg2;

@end

