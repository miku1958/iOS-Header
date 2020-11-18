//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIVectorTextLayoutGlyph-Protocol.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph>
{
    unsigned short _glyph;
    UIBezierPath *_path;
    struct CGRect _rect;
    struct CGAffineTransform _pathTransform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short glyph; // @synthesize glyph=_glyph;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property (nonatomic) struct CGAffineTransform pathTransform; // @synthesize pathTransform=_pathTransform;
@property (nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
