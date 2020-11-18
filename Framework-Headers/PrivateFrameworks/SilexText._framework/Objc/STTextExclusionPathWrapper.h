//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexText/TSDWrappable-Protocol.h>

@class NSString, STTextExclusionPath, TSDWrapPolygon;

@interface STTextExclusionPathWrapper : NSObject <TSDWrappable>
{
    BOOL _isRectangular;
    STTextExclusionPath *_exclusionPath;
    TSDWrapPolygon *_myWrapPolygon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) STTextExclusionPath *exclusionPath; // @synthesize exclusionPath=_exclusionPath;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isRectangular; // @synthesize isRectangular=_isRectangular;
@property (readonly, nonatomic) TSDWrapPolygon *myWrapPolygon; // @synthesize myWrapPolygon=_myWrapPolygon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (id)initWithTextExclusionPath:(id)arg1;
- (BOOL)isHTMLWrap;
- (id)parent;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)wrapPolygon;
- (int)wrapType;

@end

