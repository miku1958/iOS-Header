//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    BOOL _groupToPrevious;
    double _xValue;
    long long _yValue;
    long long _markStyle;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double endXValue;
@property (readonly, nonatomic) BOOL groupToPrevious; // @synthesize groupToPrevious=_groupToPrevious;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long markStyle; // @synthesize markStyle=_markStyle;
@property (readonly, nonatomic) double startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property (readonly, nonatomic) double xValue; // @synthesize xValue=_xValue;
@property (readonly, nonatomic) long long yValue; // @synthesize yValue=_yValue;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithXValue:(double)arg1 yValue:(long long)arg2 groupToPrevious:(BOOL)arg3 markStyle:(long long)arg4 userInfo:(id)arg5;

@end

