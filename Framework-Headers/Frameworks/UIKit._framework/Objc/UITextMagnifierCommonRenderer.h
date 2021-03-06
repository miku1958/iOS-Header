//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CALayer, NSDictionary;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCommonRenderer : UIView
{
    BOOL m_loaded;
    NSDictionary *m_images;
    NSDictionary *m_offsets;
    CALayer *m_back;
    CALayer *m_mask;
    CALayer *m_content;
    CALayer *m_front;
    BOOL _isRegisteredForGeometryChanges;
}

- (void).cxx_destruct;
- (void)_geometryChanged:(const CDStruct_ac6e8047 *)arg1 forAncestor:(id)arg2;
- (id)backgroundColourIfNecessary;
- (void)didMoveToSuperview;
- (void)loadImages;
- (id)magnifier;
- (void)performOperations:(CDUnknownBlockType)arg1;
- (void)update;
- (id)visualsForMagnifier;

@end

