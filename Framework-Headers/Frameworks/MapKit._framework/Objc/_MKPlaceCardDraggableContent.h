//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol UIItemProviderWriting;

@interface _MKPlaceCardDraggableContent : NSObject
{
    BOOL _header;
    int _analyticsTarget;
    UIView *_view;
    id<UIItemProviderWriting> _draggableContent;
}

@property (nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property (strong, nonatomic) id<UIItemProviderWriting> draggableContent; // @synthesize draggableContent=_draggableContent;
@property (nonatomic, getter=isHeader) BOOL header; // @synthesize header=_header;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;

@end

