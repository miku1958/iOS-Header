//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKTransitInfoLabelView, _MKLineHeaderModel;

__attribute__((visibility("hidden")))
@interface _MKDataHeaderModel : NSObject
{
    _MKLineHeaderModel *_firstLine;
    _MKLineHeaderModel *_secondLine;
    _MKLineHeaderModel *_thirdLine;
    _MKLineHeaderModel *_forthLine;
    MKTransitInfoLabelView *_transitLabel;
    _MKLineHeaderModel *_secondaryNameLine;
}

@property (strong, nonatomic) _MKLineHeaderModel *firstLine; // @synthesize firstLine=_firstLine;
@property (strong, nonatomic) _MKLineHeaderModel *forthLine; // @synthesize forthLine=_forthLine;
@property (strong, nonatomic) _MKLineHeaderModel *secondLine; // @synthesize secondLine=_secondLine;
@property (strong, nonatomic) _MKLineHeaderModel *secondaryNameLine; // @synthesize secondaryNameLine=_secondaryNameLine;
@property (strong, nonatomic) _MKLineHeaderModel *thirdLine; // @synthesize thirdLine=_thirdLine;
@property (strong, nonatomic) MKTransitInfoLabelView *transitLabel; // @synthesize transitLabel=_transitLabel;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

