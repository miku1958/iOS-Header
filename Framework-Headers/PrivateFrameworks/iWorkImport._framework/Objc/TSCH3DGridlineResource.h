//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DAxisGridEnumerator, TSDStroke;

__attribute__((visibility("hidden")))
@interface TSCH3DGridlineResource : TSCH3DResource
{
    TSCH3DAxisGridEnumerator *mAxis;
}

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) TSDStroke *stroke;

+ (id)resourceWithAxisEnumerator:(id)arg1;
- (void)dealloc;
- (id)get;
- (id)initWithAxisEnumerator:(id)arg1;

@end

