//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPointerRegionPrivate;

__attribute__((visibility("hidden")))
@interface PDFPointerRegion : NSObject
{
    PDFPointerRegionPrivate *_private;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithRect:(struct CGRect)arg1 identifier:(id)arg2;
- (struct CGRect)rect;
- (void)setIdentifier:(id)arg1;
- (void)setRect:(struct CGRect)arg1;

@end
