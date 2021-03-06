//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTZoomController : NSObject
{
    double _zoomFactor;
    double _checklistZoomFactor;
}

@property (nonatomic) double checklistZoomFactor; // @synthesize checklistZoomFactor=_checklistZoomFactor;
@property (nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;

- (id)init;
- (id)reallyZoomAttributedString:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)reallyZoomAttributes:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)unzoomAttributedString:(id)arg1;
- (id)unzoomAttributes:(id)arg1;
- (id)unzoomFont:(id)arg1;
- (id)unzoomFontInAttributes:(id)arg1;
- (id)zoomAttributedString:(id)arg1;
- (id)zoomAttributes:(id)arg1;
- (id)zoomFont:(id)arg1;
- (id)zoomFontInAttributes:(id)arg1;

@end

