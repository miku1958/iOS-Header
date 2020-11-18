//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface UISwipeActionsConfiguration : NSObject
{
    BOOL _performsFirstActionWithFullSwipe;
    BOOL _autosizesButtons;
    NSArray *_actions;
    long long __swipeActionsStyle;
}

@property (nonatomic, getter=_swipeActionsStyle, setter=_setSwipeActionsStyle:) long long _swipeActionsStyle; // @synthesize _swipeActionsStyle=__swipeActionsStyle;
@property (readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (nonatomic, getter=_autosizesButtons, setter=_setAutosizesButtons:) BOOL autosizesButtons; // @synthesize autosizesButtons=_autosizesButtons;
@property (nonatomic) BOOL performsFirstActionWithFullSwipe; // @synthesize performsFirstActionWithFullSwipe=_performsFirstActionWithFullSwipe;

+ (id)configurationWithActions:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

