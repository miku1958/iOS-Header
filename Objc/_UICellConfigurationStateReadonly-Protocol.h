//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewConfigurationStateReadonly-Protocol.h>

@protocol _UICellConfigurationStateReadonly <_UIViewConfigurationStateReadonly>

@property (readonly, nonatomic) long long cellDragState;
@property (readonly, nonatomic) long long cellDropState;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic, getter=isReordering) BOOL reordering;
@property (readonly, nonatomic, getter=isSwiped) BOOL swiped;

@end

