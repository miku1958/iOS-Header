//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, PT2DGraphAxisStyle, UIColor;

@interface PT2DGraphView : UIView
{
    NSArray *_provisionalData;
    double _xminimum;
    double _yminimum;
    double _xmaximum;
    double _ymaximum;
    PT2DGraphAxisStyle *_xaxisStyle;
    PT2DGraphAxisStyle *_yaxisStyle;
    UIColor *_groundColor;
    UIColor *_dataColor;
    UIColor *_provisionalDataColor;
    NSArray *_data;
    NSMutableArray *_provisionalDataSubviews;
    struct CGPoint _origin;
    struct CGSize _datumSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (strong, nonatomic) NSArray *data; // @synthesize data=_data;
@property (strong, nonatomic) UIColor *dataColor; // @synthesize dataColor=_dataColor;
@property (nonatomic) struct CGSize datumSize; // @synthesize datumSize=_datumSize;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (strong, nonatomic) UIColor *groundColor; // @synthesize groundColor=_groundColor;
@property (nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property (strong, nonatomic) NSArray *provisionalData; // @synthesize provisionalData=_provisionalData;
@property (strong, nonatomic) UIColor *provisionalDataColor; // @synthesize provisionalDataColor=_provisionalDataColor;
@property (strong, nonatomic) NSMutableArray *provisionalDataSubviews; // @synthesize provisionalDataSubviews=_provisionalDataSubviews;
@property (strong, nonatomic) PT2DGraphAxisStyle *xaxisStyle; // @synthesize xaxisStyle=_xaxisStyle;
@property (nonatomic) double xmaximum; // @synthesize xmaximum=_xmaximum;
@property (nonatomic) double xminimum; // @synthesize xminimum=_xminimum;
@property (strong, nonatomic) PT2DGraphAxisStyle *yaxisStyle; // @synthesize yaxisStyle=_yaxisStyle;
@property (nonatomic) double ymaximum; // @synthesize ymaximum=_ymaximum;
@property (nonatomic) double yminimum; // @synthesize yminimum=_yminimum;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGPoint)pointForText:(id)arg1 centeredOnPoint:(struct CGPoint)arg2 withAttributes:(id)arg3;

@end

