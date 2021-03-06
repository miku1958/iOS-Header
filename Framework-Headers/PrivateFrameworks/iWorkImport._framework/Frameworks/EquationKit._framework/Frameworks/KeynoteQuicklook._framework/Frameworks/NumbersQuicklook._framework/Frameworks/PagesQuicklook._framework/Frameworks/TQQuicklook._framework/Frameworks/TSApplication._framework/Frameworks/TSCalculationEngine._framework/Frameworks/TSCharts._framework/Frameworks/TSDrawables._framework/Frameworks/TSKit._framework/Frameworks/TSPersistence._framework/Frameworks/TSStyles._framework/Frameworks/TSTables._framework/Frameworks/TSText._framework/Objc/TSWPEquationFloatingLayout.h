//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPEquationLayout.h>

@class TSDInfoGeometry, TSDLayoutGeometry;

@interface TSWPEquationFloatingLayout : TSWPEquationLayout
{
    TSDInfoGeometry *_dynamicInfoGeometry;
    TSDLayoutGeometry *_baseEquationLayoutGeometry;
}

@property (readonly, nonatomic) TSDInfoGeometry *currentInfoGeometry;

- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;

@end

